#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include "common.h"
#include "packet.h"

int fd; /* File descriptor for the port */
char buffer[255];

/*
 * open_port - Open serial port
 *
 * Returns the file descriptor on success or -1 on error.
 */
int open_port(const char *dev)
{
	fd = open(dev, O_RDWR | O_NOCTTY | O_NDELAY);
	if (fd == -1) {
		/* Could not open the port. */
		perror("open_port: Unable to open %s ");
	}
	else
		fcntl(fd, F_SETFL, 0);

	return (fd);
}

int set_baudrate()
{
	struct termios options;

	/* Get the current options for the port */
	tcgetattr(fd, &options);

	/* Set the baud rates to 19200 */
	cfsetispeed(&options, B115200);
	cfsetospeed(&options, B115200);

	/*Enable the receiver and set local mode */
	options.c_cflag |= (CLOCAL | CREAD);

	/* Set the new options for the port */
	tcsetattr(fd, TCSANOW, &options);
}

void dump_buff(char *buff, int size)
{
	printf("<< ");
	for (int i=0;i<0x20;i++) {
		if (i > size)
			break;
		printf("%c", buff[i]);
	}
	printf(" >>\n");
}

/*
need to define constant
- packet size (identifier)
*/
int FSM()
{
	int nbytes;
	int size, type;

#if 1
	// read packet size in ascii format
	nbytes = read(fd, buffer, 4);
	dump_buff(buffer, nbytes);
	sscanf(buffer, "%04x", &size);
	printf("size (%d) ==> %04x\n", nbytes, size);

	// read packet type in ascii format
	nbytes = read(fd, buffer, 2);
	dump_buff(buffer, nbytes);
	sscanf(buffer, "%02x", &type);
	printf("type (%d) ==> %02x\n", nbytes, type);

	// read payload
	nbytes = read(fd, buffer, 4);
	dump_buff(buffer, nbytes);

	// read \r
	nbytes = read(fd, buffer, 1);
#else
	//nbytes = read(fd, buffer, 2);
	nbytes = read(fd, buffer, 12);
	dump_buff(buffer, nbytes);
#endif
}

int main(int argc, char *argv[])
{
	int nbytes;
    const char *dev;

	if (argc >= 2)
		dev = argv[1];
	else
		dev = TTY_DEV;

	if (open_port(dev) < 0)
		return 0;

	set_baudrate();

	while(1) {
		nbytes = read(fd, buffer, SYNC_STR_SIZE);
		printf("got %d bytes\r\n", nbytes);
		if (!strncmp(buffer, SYNC_STR, SYNC_STR_SIZE)) {
			printf("proper packet!!\n");
			FSM();
		}
		else {
			printf("unknown packet!!\n");
			dump_buff(buffer, nbytes);
		}
	}

	close(fd);

	return 0;
}
