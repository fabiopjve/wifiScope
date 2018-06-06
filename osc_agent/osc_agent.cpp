#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

int fd; /* File descriptor for the port */
char buffer[255];

/*
 * 'open_port()' - Open serial port 1.
 *
 * Returns the file descriptor on success or -1 on error.
 */
int open_port(void)
{
	fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY | O_NDELAY);
	if (fd == -1) {
		/* Could not open the port. */
		perror("open_port: Unable to open /dev/ttyACM0 - ");
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

int main()
{
	int nbytes;

	if (open_port() < 0)
		return 0;

	set_baudrate();

	while(1) {
		nbytes = read(fd, buffer, 255);
		printf("got %d bytes: %x%x%x%x(%c%c%c%c)\r\n", nbytes,
				buffer[0], buffer[1], buffer[2], buffer[3],
				buffer[0], buffer[1], buffer[2], buffer[3]);
	}

	close(fd);

	return 0;
}
