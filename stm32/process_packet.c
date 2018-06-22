/*
 * process_packet.c:
 *
 * Initial draft version: Charlie Park (chul2.park@gmail.com)
 *
 */

//#define DEBUG

#include <stdarg.h>
#include <string.h>
#include "common.h"

#define SYNC_STR        "WOSC"
#define SYNC_STR_SIZE   (sizeof(SYNC_STR) - 1)
#define EOP_STR			"\r"

#define BUFFER_LEN 1024

#define	PKT_SET_SAMPLERATE		0x11
#define	PKT_READ_SAMPLERATE		0x12
#define	PKT_READ_SAMPLEBUFFER	0x22
#define	PKT_START_SAMPLING		0x33
#define	PKT_STOP_SAMPLING		0x44
#define	PKT_SET_TRIGGER_LEVEL	0x55
#define	PKT_READ_TRIGGER_LEVEL	0x66
#define	PKT_SET_TRIGGER_TYPE	0x67
#define	PKT_READ_TRIGGER_TYPE	0x68
#define	PKT_TEST				0xcc

void nullfunc(char *buff, int len);
void testfunc(char *buff, int len);

char debug[BUFFER_LEN];
char input[BUFFER_LEN];
char output[BUFFER_LEN];

#ifdef DEBUG
static void send_debug(char *format, ...)
{
    va_list args;

    va_start(args, format);

	vsprintf(debug, format, args);

	TerminalOutputBufferWrite(INDEX_DATA, debug, strlen(debug));
	TerminalOutputBufferWrite(INDEX_DATA, EOP_STR, 1);

    va_end(args);
}
#else
static void send_debug(char *format, ...) {}
#endif

struct {
	char type;
	void (*func)(char *buff, int len);
} pkt_handler[] = {
	{ PKT_SET_SAMPLERATE,		nullfunc},
	{ PKT_READ_SAMPLERATE,		nullfunc},
	{ PKT_READ_SAMPLEBUFFER,	nullfunc},
	{ PKT_START_SAMPLING,		nullfunc},
	{ PKT_STOP_SAMPLING,		nullfunc},
	{ PKT_SET_TRIGGER_LEVEL,	nullfunc},
	{ PKT_READ_TRIGGER_LEVEL,	nullfunc},
	{ PKT_SET_TRIGGER_TYPE,		nullfunc},
	{ PKT_READ_TRIGGER_TYPE,	nullfunc},
	{ PKT_READ_TRIGGER_TYPE,	nullfunc},
	{ PKT_TEST,					testfunc},
	{ 0x00,	NULL }
};

void nullfunc(char *buff, int len)
{
	// add your own debug routine
	send_debug("test");
}

void testfunc(char *buff, int len)
{
	sprintf(output, SYNC_STR"%04x%02x", len, 0xcc);
	strncat(output, buff, len);
	strcat(output, EOP_STR);
	TerminalOutputBufferWrite(INDEX_DATA, output, strlen(output));
}

#if 1
void TaskProcessPacket(void *data)
{
	char c;
	static unsigned int count = 0;
	int rc;
	int psize, ptype;
	char *ptr;

	/* Get the next character */
	rc = TerminalRead(INDEX_DATA, (uint8_t*)&c, 1);
	if(rc) goto ProcessCharacter;

	/* No characters were found, just return */
	return;

ProcessCharacter:
	/* We have a character to process */
	//printf("Got:'%c' %d\n",c,c);

	input[count++] = c;

	// reached at the end of incoming packet
	if (c == '\r') {
		ptr = input;
		if (!strncmp(input, SYNC_STR, SYNC_STR_SIZE)) {
			//send_debug("proper packet");
			ptr += SYNC_STR_SIZE;
			sscanf(ptr, "%04x", &psize);
			//send_debug("size=%04x", psize);
			ptr += 4;
			sscanf(ptr, "%02x", &ptype);
			//send_debug("type=%02x", ptype);
			ptr += 2;
			// find proper packet handler function and run
			for (int i=0; pkt_handler[i].type ;i++)
				if (pkt_handler[i].type == ptype) {
					(*(pkt_handler[i].func))(ptr, psize);
				}
		} else {
			//send_debug("wrong packet");
		}
		count = 0;
	}
}
#else
void TaskProcessPacket(void *data)
{
	//TerminalOutputBufferWrite(INDEX_DATA, "0123", 4);
	//TerminalOutputBufferWrite(INDEX_DATA, "\r", 1);
	TerminalOutputBufferWrite(INDEX_DATA, "0123456789abcdef", 16);

	//TerminalOutputBufferWrite(INDEX_DATA, debug, strlen(debug));
	//TerminalOutputBufferWrite(INDEX_DATA, EOP_STR, 1);

	HAL_Delay(1000);
}
#endif

ADD_TASK(TaskProcessPacket, NULL, NULL, "Packet Processing task")
