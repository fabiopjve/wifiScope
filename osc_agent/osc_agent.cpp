/*
 * osc_agent.cpp
 *
 * Author: Charlie Park (chul2.park@gmail.com)
 *
 */

/*
TODO
need to handle the case of usb disconnection
*/

#include <ctype.h>
#include <errno.h>   /* Error number definitions */
#include <fcntl.h>   /* File control definitions */
#include <stdio.h>   /* Standard input/output definitions */
#include <stdlib.h>
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/time.h>
#include "common.h"
#include "packet.h"

#define BUFF_SIZE 128

#define MAX_QUEUE 128
#define QUEUE_INCR (x) (((x)+1) % MAX_QUEUE)
#define QUEUE_INCRBY (x,y) (((x)+(y)) % MAX_QUEUE)

#define SERVER_PORT  5555

static int fd; /* File descriptor for ttyACM channel */
int listen_sd, max_sd, new_sd;
int close_conn;

fd_set rset, wset;
timeval tv = { 2, 0 };

typedef struct _queue {
	int fd;
	int head, tail;
	char buff[MAX_QUEUE];
} queue;

queue rxq, txq;

char buffer[BUFF_SIZE];
char outBuff[BUFF_SIZE];

void init_queue(queue *q, int fd)
{
	q->head = q->tail = 0;
	q->fd = fd;
}

int isQueueEmpty(queue *q)
{
	return q->head == q->tail;
}

int isQueueFull(queue *q)
{
	return q->head == (q->tail + 1) % MAX_QUEUE;
}

// make sure len is bigger than available room in the queue
// before calling this function!!
void enqueue(queue *q, char *buff, int len)
{
#if 1
	// simplified version
	while (len) {
		q->buff[q->tail] = *buff++;
		q->tail++;
		q->tail %= MAX_QUEUE;
		len--;
	}
#else
	int freeroom;

	// memcpy version (would be faster thanks to the memory DMA)
	if (q->head <= q->tail) {
		freeroom = BUFF_SIZE - q->tail - 1;
		if (freeroom >= len) {
			memcpy(q->buff + q->tail, buff, len);
			q->tail += freeroom;
		} else {
			memcpy(q->buff, buff, len - freeroom);
		}
	}
#endif

	printf("====== txq after enqueue (%d:%d)=====\n", q->head, q->tail);
	hex_dump(q->buff, MAX_QUEUE);
}

// If available data is less than len, just return the smaller size.
int dequeue(queue *q, char *buff, int len)
{
	int i;
#if 1
	for (i=0; i < len ;i++) {
		if (isQueueEmpty(q))
			break;
		buff[i] = q->buff[q->head];
		q->head++;
		q->head %= MAX_QUEUE;
	}
#else
	//int nbytes, cp_len;

	if (q->tail > q->head) {
		nbytes = write(q->fd, q->buffer, nbytes);
	} else {

	}
#endif

	printf("====== txq after dequeue (%d:%d)=====\n", q->head, q->tail);
	hex_dump(q->buff, MAX_QUEUE);

	return i;
}

// later on, this function should handle multiple connection, using fd loop
void handleSocketRead()
{
	int rc, len;

	if (FD_ISSET(listen_sd, &rset)) {
		printf("Listening socket is readable\n");
		if (new_sd) {
			FD_CLR(listen_sd, &rset);
			printf("Currently, only one user connection is allowed!\n");
			close_conn = TRUE;
		}
		new_sd = accept(listen_sd, NULL, NULL);
		if (new_sd < 0) {
			if (errno != EWOULDBLOCK) {
				perror("  accept() failed");
				//end_server = TRUE;
			}
		}
		printf("New incoming connection - %d\n", new_sd);
		FD_SET(new_sd, &rset);
		if (new_sd > max_sd)
			max_sd = new_sd;
	}

	if (FD_ISSET(max_sd, &rset)) {
		/**********************************************/
		/* Receive data on this connection until the  */
		/* recv fails with EWOULDBLOCK.  If any other */
		/* failure occurs, we will close the          */
		/* connection.                                */
		/**********************************************/
		rc = recv(max_sd, buffer, sizeof(buffer), 0);
		if (rc < 0) {
			if (errno != EWOULDBLOCK) {
				perror("  recv() failed");
				close_conn = TRUE;
			}
		}

		/**********************************************/
		/* Check to see if the connection has been    */
		/* closed by the client                       */
		/**********************************************/
		if (rc == 0) {
			printf("  Connection closed\n");
			close_conn = TRUE;
		}

		/**********************************************/
		/* Data was received                          */
		/**********************************************/
		len = rc;
		printf("  %d bytes received\n", len);

		/**********************************************/
		/* Echo the data back to the client           */
		/**********************************************/
		rc = send(max_sd, buffer, len, 0);
		if (rc < 0) {
			perror("  send() failed");
			close_conn = TRUE;
		}
	}

	if (close_conn) {
		close(max_sd);
		FD_CLR(max_sd, &rset);
		max_sd = listen_sd;
		new_sd = 0;
	}
}

void handleRead()
{
	int nbytes;

	if (FD_ISSET(0, &rset)) {
		nbytes = read(0, buffer, BUFF_SIZE);
		buffer[nbytes] = '\0';

		printf("stdin was => %s\n", buffer);

		// The maximum number of bytes can be written at a time depend on
		// how device driver is implemented.

		// make packet structure...
		{
			// sync string (4) + payload size (4) + packet type (2) + payload (n) + '\r'
			sprintf(outBuff, SYNC_STR"%04x%02x", nbytes, 0xcc);
			// payload
			strncat(outBuff, buffer, nbytes);
			strcat(outBuff, "\r");

			puts("====== packet data to send ======");
			hex_dump(outBuff, 32);
		}

		enqueue(&txq, outBuff, nbytes + 11);

		// if txq is empty
		if(!isQueueEmpty(&txq))
			FD_SET(fd, &wset);

		printf("%d bytes has been requested to write\r\n", nbytes + 11);
	}

	if (FD_ISSET(fd, &rset)) {
		nbytes = read(fd, buffer, BUFF_SIZE/2);
		/* make NULL terminated string */
		buffer[nbytes] = '\0';
		//printf("STM32 sent %d bytes >> %s\r\n", nbytes, buffer);
		printf("====== STM32 sent %d bytes =====\n", nbytes);
		hex_dump(buffer, 32);
	}
}

// should be handled by separated thread
void handleWrite()
{
	int nbytes, dlen;

	if (FD_ISSET(fd, &wset)) {
		puts("fd write set!!");
		dlen = dequeue(&txq, buffer, WRITE_SIZE);
		while (dlen) {
			nbytes = write(fd, buffer, dlen);
			pr_info("write returned %d\n", nbytes);
			if (nbytes == EAGAIN) {
				pr_info("EAGAIN!! dlen=%d nbytes=%d\n", dlen, nbytes);
				usleep(100);
			}
			else
				dlen -= nbytes;
		}
		if(isQueueEmpty(&txq))
			FD_CLR(fd, &wset);
	}
}

void init_socket()
{
   int rc, on = 1;
   //int desc_ready, end_server = FALSE;
   //char buffer[80];
   sockaddr_in addr;
   //timeval timeout;
   //fd_set master_set, working_set;

   /*************************************************************/
   /* Create an AF_INET stream socket to receive incoming       */
   /* connections on                                            */
   /*************************************************************/
   listen_sd = socket(AF_INET, SOCK_STREAM, 0);
   if (listen_sd < 0) {
      perror("socket() failed");
      exit(-1);
   }

   /*************************************************************/
   /* Allow socket descriptor to be reuseable                   */
   /*************************************************************/
   rc = setsockopt(listen_sd, SOL_SOCKET,  SO_REUSEADDR,
                   (char *)&on, sizeof(on));
   if (rc < 0) {
      perror("setsockopt() failed");
      close(listen_sd);
      exit(-1);
   }

   /*************************************************************/
   /* Set socket to be nonblocking. All of the sockets for    */
   /* the incoming connections will also be nonblocking since  */
   /* they will inherit that state from the listening socket.   */
   /*************************************************************/
   rc = ioctl(listen_sd, FIONBIO, (char *)&on);
   if (rc < 0) {
      perror("ioctl() failed");
      close(listen_sd);
      exit(-1);
   }

   /*************************************************************/
   /* Bind the socket                                           */
   /*************************************************************/
   memset(&addr, 0, sizeof(addr));
   addr.sin_family      = AF_INET;
   addr.sin_addr.s_addr = htonl(INADDR_ANY);
   addr.sin_port        = htons(SERVER_PORT);
   rc = bind(listen_sd, (struct sockaddr *)&addr, sizeof(addr));
   if (rc < 0) {
      perror("bind() failed");
      close(listen_sd);
      exit(-1);
   }

   /*************************************************************/
   /* Set the listen back log                                   */
   /*************************************************************/
   rc = listen(listen_sd, 32);
   if (rc < 0) {
      perror("listen() failed");
      close(listen_sd);
      exit(-1);
   }

   max_sd = listen_sd;
}

int main(int argc, char *argv[])
{
	int ret;
    const char *dev;

	if (argc >= 2)
		dev = argv[1];
	else
		dev = TTY_DEV;

	fd = open_port(dev);
	if (fd < 0)
		return 0;

	init_queue(&rxq, fd);
	init_queue(&txq, fd);

	set_baudrate(fd);

	/* Flush anything already in the serial buffer */
	tcflush(fd, TCIFLUSH);

	init_socket();

	// once stabilzed, let's change from select to epoll system call
	// for I/O multiplexing, which is much more efficient.
	while(1) {
		FD_ZERO(&rset);
		FD_ZERO(&wset);
		FD_SET(0, &rset);	// or stdin
		FD_SET(fd, &rset);
		// listening socket
		FD_SET(listen_sd, &rset);

		pr_debug("select: round again");
		//ret = select(fd+1, &rset, &wset, NULL, &tv);
		ret = select(max_sd+1, &rset, &wset, NULL, NULL);
		pr_debug("select: returned %d\n", ret);

		switch (ret) {
			case -1:
				perror("select()");
				continue;
			case 0:
				puts("timeout!!~~");
				/* Wait up to 2 seconds. */
				tv.tv_sec = 2;
				tv.tv_usec = 0;
				continue;
		}

		handleRead();
		handleWrite();

		handleSocketRead();
	}

	close(fd);

	return 0;
}
