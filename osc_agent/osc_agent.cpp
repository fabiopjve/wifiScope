/*
 * osc_agent.cpp
 *
 * Author: Charlie Park (chul2.park@gmail.com)
 *
 */

#define DEBUG
#define DEBUG_TIMESTAMP
//#define DEBUG_DUMP

#include <ctype.h>
#include <errno.h>   /* Error number definitions */
#include <fcntl.h>   /* File control definitions */
#include <stdio.h>   /* Standard input/output definitions */
#include <stdlib.h>
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include <net/if.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include "common.h"
#include "packet.h"
#include "queue.h"

#define SERVER_PORT		5555
#define USLEEP_EAGAIN	1000
//#define FAKE_PACKET
#define DUMP_BYTES		32

static int serial_fd; /* File descriptor for ttyACM channel */

static int listen_sd, max_sd, new_sd;
static int close_conn, osc_alive = TRUE;

static char buffer[BUFF_SIZE];
#ifdef FAKE_PACKET
static char outBuff[BUFF_SIZE];
#endif

fd_set rset, wset;
timeval tv = { 2, 0 };

queue rxq, txq;

void printLocalIP(void)
{
    struct ifreq my_ifreq;
    char interfaceName[] = "apcli0";
    int socketFD = socket(AF_INET, SOCK_DGRAM, 0);
    // Type of address to retrieve - IPv4 IP address
    my_ifreq.ifr_addr.sa_family = AF_INET;
    // Copy the interface name in the ifreq structure
    strncpy(my_ifreq.ifr_name , interfaceName , IFNAMSIZ - 1);
    ioctl(socketFD, SIOCGIFADDR, &my_ifreq);
    close(socketFD);
    // Print Omega's local IP address
    printf("Omega's local IP address is %s\n",inet_ntoa(((struct sockaddr_in *)&my_ifreq.ifr_addr)->sin_addr));	
}

void forward_packet(int nbytes)
{
#ifdef FAKE_PACKET
	// fabricate packet

	/* -1 means just ignoring stdin's '\n' character */
	nbytes -= 1;

	buffer[nbytes] = '\0';
	pr_info("payload data was (len = %d) => %s\n", nbytes, buffer);

	// make packet structure...
	// sync string (4) + payload size (4) + packet type (2) + payload (n) + '\n'
	sprintf(outBuff, SYNC_STR"%04x%02x", nbytes, 0xcc);
	// payload
	strncat(outBuff, buffer, nbytes);
	strcat(outBuff, "\n");

	hex_dump("from frontend", outBuff, DUMP_BYTES);

	enqueue(&txq, outBuff, nbytes + 11);

	pr_debug("requested to write %d bytes\r\n", nbytes + 11);
#else
	hex_dump("from frontend", buffer, DUMP_BYTES);
	enqueue(&txq, buffer, nbytes);

	pr_debug("frontend -> STM32 (%d bytes)\r\n", nbytes);
#endif

	// if txq is empty
	if(!isQueueEmpty(&txq))
		FD_SET(serial_fd, &wset);
}

// later on, this function should handle multiple connection, using fd loop
void handleSocketRead()
{
	int rc;

	if (FD_ISSET(listen_sd, &rset)) {
		pr_info("listening socket is readable\n");
		if (new_sd) {
			FD_CLR(listen_sd, &rset);
			pr_info("Currently, only one user connection is allowed!\n");
			close_conn = TRUE;
		}
		new_sd = accept(listen_sd, NULL, NULL);
		if (new_sd < 0) {
			if (errno != EWOULDBLOCK) {
				pr_err("accept() failed\n");
				//end_server = TRUE;
			}
		}

		FD_SET(new_sd, &rset);
		if (new_sd > max_sd)
			max_sd = new_sd;

		pr_info("new incoming connection (max_sd = %d, new_sd = %d, listen_sd = %d, tty fd = %d)\n",
				max_sd, new_sd, listen_sd, serial_fd);

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
				pr_err("recv() failed\n");
				close_conn = TRUE;
			}
		}

		/**********************************************/
		/* Check to see if the connection has been    */
		/* closed by the client                       */
		/**********************************************/
		if (rc == 0) {
			pr_info("connection has been closed by peer.\n");
			close_conn = TRUE;
		} else {
			forward_packet(rc);
			return;
		}
	}

	if (close_conn) {
		close(max_sd);
		FD_CLR(max_sd, &rset);
		FD_CLR(max_sd, &wset);
		max_sd = listen_sd;
		new_sd = 0;
		close_conn = FALSE;
		pr_info("connection closed\n");
	}
}

void handleRead()
{
	int nbytes, dlen;

	if (FD_ISSET(0, &rset)) {
		nbytes = read(0, buffer, BUFF_SIZE);
		forward_packet(nbytes);
	}

	if (FD_ISSET(serial_fd, &rset)) {
		nbytes = read(serial_fd, buffer, BUFF_SIZE);
		if (nbytes == 0) {
			osc_alive = FALSE;
			pr_err("USB H/W has been disconnected...\n");
			return;
		}
		/* make NULL terminated string */
		buffer[nbytes] = '\0';
		hex_dump("from STM32", buffer, DUMP_BYTES);

		// if frontend is connected via socket
		if (max_sd != listen_sd) {
			// just try to send recieved data to front end via socket
			// without using select system call
			dlen = nbytes;
			while (dlen) {
				nbytes = send(max_sd, buffer, dlen, 0);
				pr_debug("frontend <- STM32 (%d bytes)\n", nbytes);
				if (nbytes < 0) {
					pr_err("error = %d dlen=%d\n", nbytes, dlen);
					// I know it's ugly. :(
					usleep(USLEEP_EAGAIN);
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

	if (FD_ISSET(serial_fd, &wset)) {
		//pr_debug("serial_fd write set!!");
		dlen = dequeue(&txq, buffer, WRITE_SIZE);
		while (dlen) {
			nbytes = write(serial_fd, buffer, dlen);
			pr_debug("write returned %d\n", nbytes);
			if (nbytes < 0) {
				pr_err("error = %d dlen=%d\n", nbytes, dlen);
				// I know it's ugly. :(
				usleep(USLEEP_EAGAIN);
			}
			else
				dlen -= nbytes;
		}
		if(isQueueEmpty(&txq))
			FD_CLR(serial_fd, &wset);
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
      pr_err("socket() failed\n");
      exit(-1);
   }

   /*************************************************************/
   /* Allow socket descriptor to be reuseable                   */
   /*************************************************************/
   rc = setsockopt(listen_sd, SOL_SOCKET,  SO_REUSEADDR,
                   (char *)&on, sizeof(on));
   if (rc < 0) {
      pr_err("setsockopt() failed\n");
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
      pr_err("ioctl() failed\n");
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
      pr_err("bind() failed\n");
      close(listen_sd);
      exit(-1);
   }

   /*************************************************************/
   /* Set the listen back log                                   */
   /*************************************************************/
   rc = listen(listen_sd, 32);
   if (rc < 0) {
      pr_err("listen() failed\n");
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

	serial_fd = open_port(dev);
	if (serial_fd < 0)
		return 0;

	init_queue(&rxq, serial_fd);
	init_queue(&txq, serial_fd);

	set_baudrate(serial_fd);

	/* Flush anything already in the serial buffer */
	tcflush(serial_fd, TCIFLUSH);

	printLocalIP();

	init_socket();

	// once stabilzed, let's change from select to epoll system call
	// for I/O multiplexing, which is much more efficient.
	while(osc_alive) {
		FD_ZERO(&rset);
		FD_ZERO(&wset);
		FD_SET(0, &rset);	// or stdin
		FD_SET(serial_fd, &rset);
		// listening socket
		FD_SET(listen_sd, &rset);
		if (new_sd) {
			FD_SET(new_sd, &rset);
		}

		//pr_debug("select: round again\n");
		//ret = select(serial_fd+1, &rset, &wset, NULL, &tv);
		ret = select(max_sd+1, &rset, &wset, NULL, NULL);
		//pr_debug("select: returned %d\n", ret);

		switch (ret) {
			case -1:
				pr_err("select() with error = %d\n", errno);
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

		//pr_debug("rxq = %d, txq = %d\n", getQueueSize(&rxq), getQueueSize(&txq));
	}

	close(listen_sd);
	close(max_sd);
	close(new_sd);
	close(serial_fd);

	return 0;
}
