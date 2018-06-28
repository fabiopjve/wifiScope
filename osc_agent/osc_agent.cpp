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

#define DEBUG

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
#include "queue.h"

#define SERVER_PORT  5555

static int fd; /* File descriptor for ttyACM channel */

static int listen_sd, max_sd, new_sd;
static int close_conn;

static char buffer[BUFF_SIZE];
static char outBuff[BUFF_SIZE];

fd_set rset, wset;
timeval tv = { 2, 0 };

queue rxq, txq;

// make packet structure...
// The maximum number of bytes can be written at a time
// depending on how device driver is implemented.
void generate_test_packet(int nbytes)
{
	// sync string (4) + payload size (4) + packet type (2) + payload (n) + '\n'
	sprintf(outBuff, SYNC_STR"%04x%02x", nbytes, 0xcc);
	// payload
	strncat(outBuff, buffer, nbytes);
	strcat(outBuff, "\n");

	pr_debug("====== packet data to send ======\n");
	hex_dump(outBuff, 32);

	enqueue(&txq, outBuff, nbytes + 11);

	// if txq is empty
	if(!isQueueEmpty(&txq))
		FD_SET(fd, &wset);

	printf("%d bytes has been requested to write\r\n", nbytes + 11);
}

// later on, this function should handle multiple connection, using fd loop
void handleSocketRead()
{
	int rc, len;

	if (FD_ISSET(listen_sd, &rset)) {
		printf("listening socket is readable\n");
		if (new_sd) {
			FD_CLR(listen_sd, &rset);
			printf("Currently, only one user connection is allowed!\n");
			close_conn = TRUE;
		}
		new_sd = accept(listen_sd, NULL, NULL);
		if (new_sd < 0) {
			if (errno != EWOULDBLOCK) {
				pr_err("accept() failed");
				//end_server = TRUE;
			}
		}

		FD_SET(new_sd, &rset);
		if (new_sd > max_sd)
			max_sd = new_sd;

		printf("new incoming connection (max_sd = %d, new_sd = %d, listen_sd = %d, tty fd = %d)\n",
				max_sd, new_sd, listen_sd, fd);

		return;
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
				pr_err("recv() failed");
				close_conn = TRUE;
			}
		}

		/**********************************************/
		/* Check to see if the connection has been    */
		/* closed by the client                       */
		/**********************************************/
		if (rc == 0) {
			printf("connection closed\n");
			close_conn = TRUE;
		} else {
			len = rc;
			buffer[len] = '\0';
			printf("socket data was (len = %d) => %s\n", len, buffer);
			generate_test_packet(len);

			return;
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
	int nbytes, dlen;

	if (FD_ISSET(0, &rset)) {
		nbytes = read(0, buffer, BUFF_SIZE);

		buffer[nbytes] = '\0';
		pr_debug("stdin was (len = %d) => %s\n", nbytes, buffer);

		generate_test_packet(nbytes);
	}

	if (FD_ISSET(fd, &rset)) {
		nbytes = read(fd, buffer, BUFF_SIZE/2);
		/* make NULL terminated string */
		buffer[nbytes] = '\0';
		//printf("STM32 sent %d bytes >> %s\r\n", nbytes, buffer);
		pr_debug("====== STM32 sent %d bytes =====\n", nbytes);
		hex_dump(buffer, 32);

		// if frontend is connected via socket
		if (max_sd != listen_sd) {
			// just try to send recieved data to front end via socket
			// without using select system call
			dlen = nbytes;
			while (dlen) {
				nbytes = send(max_sd, buffer, dlen, 0);
				pr_info("send returned %d\n", nbytes);
				if (nbytes < 0) {
					pr_info("error = %d dlen=%d\n", nbytes, dlen);
					// I know it's ugly. :(
					usleep(1000000);
				}
				else
					dlen -= nbytes;
			}
		}
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
			if (nbytes < 0) {
				pr_info("error = %d dlen=%d\n", nbytes, dlen);
				// I know it's ugly. :(
				usleep(1000000);
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
   sockaddr_in addr;

   /*************************************************************/
   /* Create an AF_INET stream socket to receive incoming       */
   /* connections on                                            */
   /*************************************************************/
   listen_sd = socket(AF_INET, SOCK_STREAM, 0);
   if (listen_sd < 0) {
      pr_err("socket() failed");
      exit(-1);
   }

   /*************************************************************/
   /* Allow socket descriptor to be reuseable                   */
   /*************************************************************/
   rc = setsockopt(listen_sd, SOL_SOCKET,  SO_REUSEADDR,
                   (char *)&on, sizeof(on));
   if (rc < 0) {
      pr_err("setsockopt() failed");
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
      pr_err("ioctl() failed");
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
      pr_err("bind() failed");
      close(listen_sd);
      exit(-1);
   }

   /*************************************************************/
   /* Set the listen back log                                   */
   /*************************************************************/
   rc = listen(listen_sd, 32);
   if (rc < 0) {
      pr_err("listen() failed");
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
		if (new_sd) {
			FD_SET(new_sd, &rset);
		}

		pr_debug("select: round again\n");
		//ret = select(fd+1, &rset, &wset, NULL, &tv);
		ret = select(max_sd+1, &rset, &wset, NULL, NULL);
		pr_debug("select: returned %d\n", ret);

		switch (ret) {
			case -1:
				pr_err("select()");
				continue;
			case 0:
				puts("timeout!!~~");
				/* Wait up to 2 seconds. */
				tv.tv_sec = 2;
				tv.tv_usec = 0;
				continue;
		}

		handleSocketRead();

		handleRead();
		handleWrite();
	}

	close(fd);

	return 0;
}
