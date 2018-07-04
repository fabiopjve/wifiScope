#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include <ctype.h>
#include <termios.h> /* POSIX terminal control definitions */
#include "common.h"

#if 0
void hex_dump(char *buff, int size)
{
	char str[16+1];

	for (int i=0;i<=size;i++) {
		if (i && i%16 == 0) {
			str[16] = '\0';
			puts(str);
		}
		if (i >= size) break;
		printf("%02x ", buff[i]);
		str[i%16] = isprint(buff[i]) ? buff[i] : '.';
	}
	puts("\n");
}
#endif

/*
 * open_port - Open serial port
 *
 * Returns the file descriptor on success or -1 on error.
 */
int open_port(const char *dev)
{
	int fd;

	fd = open(dev, O_RDWR | O_NOCTTY | O_NDELAY);
	if (fd == -1) {
		/* Could not open the port. */
		printf("open_port: Unable to open %s\n", dev);
	}
	else
		fcntl(fd, F_SETFL, 0);

	return fd;
}

void set_baudrate(int fd)
{
	struct termios options;

	/* Get the current options for the port */
	tcgetattr(fd, &options);

	/* Set the baud rates to 19200 */
	cfsetispeed(&options, B115200);
	cfsetospeed(&options, B115200);

	/*Enable the receiver and set local mode */
	options.c_cflag |= (CLOCAL | CREAD);

	/* make terminal raw mode */
	cfmakeraw(&options);

	/* Set the new options for the port */
	tcsetattr(fd, TCSANOW, &options);
}

/*
Makes the given file descriptor non-blocking.
Returns 1 on success, 0 on failure.
*/
int make_blocking(int fd)
{
	int flags;

	flags = fcntl(fd, F_GETFL, 0);
	if(flags == -1)
		return 0;

	/* Clear the blocking flag. */
	flags &= ~O_NONBLOCK;

	return fcntl(fd, F_SETFL, flags) != -1;
}
