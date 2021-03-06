/*
 * process_packet.c:
 *
 * Initial draft version: Charlie Park (chul2.park@gmail.com)
 *
 */

//#define DEBUG

#include <stdarg.h>
#include <string.h>
#include <alloca.h>
#include <math.h>
#include "common.h"

//#define FAKE_WAVEFORM

#define SYNC_STR        "WOSC"
#define SYNC_STR_SIZE   (sizeof(SYNC_STR) - 1)
#define EOP_STR			"\n"

#define BUFFER_LEN 2048

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
#define	PKT_DEBUG_LOG			0xde

#define send(x, y) TerminalOutputBufferWrite(INDEX_DATA, x, y)

void nullfunc(char *buff, int len);
void testfunc(char *buff, int len);
void setTriggerLevel(char *buff, int len);
void setTriggerType(char *buff, int len);
void setSampleRate(char *buff, int len);
void send_sample_buff(char *buff, int len);

char debug[BUFFER_LEN];
char input[BUFFER_LEN];
char output[BUFFER_LEN];

/* Size of array ADC_samples[] */
extern volatile uint16_t samples[SCOPE_SAMPLES_BUFFSIZE];
extern volatile uint16_t ADC_samples[ADC_SAMPLES_BUFFSIZE];
extern volatile uint16_t triggerLevel;
extern volatile uint16_t triggerType;
extern volatile uint16_t sampleRate;
volatile char transmissionInProgress = 0;

#if 1
static void send_log(char *fmt, ...)
{
	int size = 0;
    va_list ap;

	/* Determine required size */
	va_start(ap, fmt);
	size = vsnprintf(debug, size, fmt, ap);
	va_end(ap);

	if (size < 0)
		return;

	size++;

	sprintf(debug, SYNC_STR"%04x%02x", size, PKT_DEBUG_LOG);
	send(debug, strlen(debug));

	va_start(ap, fmt);
	size = vsnprintf(debug, size, fmt, ap);
	if (size < 0)
		return;
	va_end(ap);

	// send payload
	send(debug, size);
	send(EOP_STR, 1);
}
#else
static void send_log(char *format, ...) {}
#endif

struct {
	char type;
	void (*func)(char *buff, int len);
} pkt_handler[] = {
	{ PKT_SET_SAMPLERATE,		setSampleRate},
	{ PKT_READ_SAMPLERATE,		nullfunc},
	{ PKT_READ_SAMPLEBUFFER,	send_sample_buff },
	{ PKT_START_SAMPLING,		nullfunc},
	{ PKT_STOP_SAMPLING,		nullfunc},
	{ PKT_SET_TRIGGER_LEVEL,	setTriggerLevel},
	{ PKT_READ_TRIGGER_LEVEL,	nullfunc},
	{ PKT_SET_TRIGGER_TYPE,		setTriggerType},
	{ PKT_READ_TRIGGER_TYPE,	nullfunc},
	{ PKT_READ_TRIGGER_TYPE,	nullfunc},
	{ PKT_TEST,					testfunc},
	{ 0x00,	NULL }
};

void nullfunc(char *buff, int len)
{
	// add your own debug routine
}

/*
  long int getDataFromString(char *buf, char size)

  Converts a hexadecimal string into an 8 or 16-bit integer

  input:    char *buffer - the string with the data we want to convert
            char size - 2 for bytes and 4 for words
  returns:  long int - converted value or -1 if error  
*/
long int getDataFromString(char *buf, char size)
{
  unsigned char digit;
  char index = 0;
  long int result = 0;
  if (size!=2 && size !=4) return -1;
  while (index<size) {
    digit = -1;
    if (*buf>='0' && *buf<='9') digit = *buf - '0';
    if (*buf>='A' && *buf<='F') digit = *buf - 'A' + 10; 
    digit &= 0x0f;
    if (digit<0) return -1;
    result <<= 4;
    result |= digit;
    buf++;
    index++;
  }
  return result;  
}

/*
  char *dataToHexString(unsigned int value, char *buffer)

  Converts an 8 or 16-bit value into a hexadecimal string

  input:  unsigned int value - the word we want to convert to string
          char size - 2 for bytes and 4 for words
          char *buffer - the string we are going to write the result

  returns: a pointer to the end of the string
*/
char *dataToHexString(unsigned int value, char size, char *buffer)
{
  unsigned int compareValue = 4096;
  char index = 0;
  // if size is not 2 or 4, return right away
  if (size!=2 && size !=4) return buffer;
  if (size==2) compareValue = 16;
  while (index<size) {
    if (value>=compareValue) {
      char result = value / compareValue;
      if (result<=9) *buffer = '0'+result; else *buffer = 'A'+result-10;
      value -= (int)result*compareValue;
    } else *buffer = '0';
    index++;
    buffer++;
    compareValue /= 16;
  }
  return buffer;
}

void send_sample_buff(char *buff, int len)
{
	char *buffer, *tempBuffer;
	int bufferSize = SCOPE_SAMPLES_BUFFSIZE;
	buffer = alloca(bufferSize*4+11);
	if (buffer==NULL) return;
	tempBuffer = buffer;  // we keep a copy of the start of the buffer
	strcpy(buffer,SYNC_STR);
	buffer += 4;  // move the string pointer to the next available position	
	buffer = dataToHexString(bufferSize*4,4,buffer);
	// command = 22
	*buffer++ = '2';
	*buffer++ = '2';
	// send the sample buffer
	transmissionInProgress = 1;	// signal we are using the buffer now
	for (int x=0; x<bufferSize; x++) {
#ifdef FAKE_WAVEFORM
		float sinRes = sin((3.141592*2/bufferSize)*(x+offset));
		float val = (sinRes+1)*2047;
		buffer = dataToHexString((int)val,4,buffer);
#else
		buffer = dataToHexString((int)samples[x],4,buffer);
#endif
	}
	transmissionInProgress = 0;	// sample buffer is free for use again
	*buffer++ = EOP_STR[0]; // add end of packet
	send(tempBuffer,bufferSize*4+11);
}

void testfunc(char *buff, int len)
{
#if 1
	sprintf(output, SYNC_STR"%04x%02x", len, 0xde);
	strncat(output, buff, len);
	strcat(output, EOP_STR);
	send(output, strlen(output));
#else
	// just for testing long packet issue
	for (int i=0;i<50;i++) {
		strcat(output, "1234567890123456789012345678901234567890");
		send(output, strlen(output));
	}
	send(INDEX_DATA, EOP_STR, 1);
#endif
}

void setTriggerLevel(char *buff, int len)
{
	triggerLevel = getDataFromString(buff,4);
	send_log("Trigger level = %lu",triggerLevel);
}

void setSampleRate(char *buff, int len)
{
	sampleRate = getDataFromString(buff,4);
	TIM_Config();
	send_log("Sample rate = %lu",sampleRate);
}

void setTriggerType(char *buff, int len)
{
	triggerType = getDataFromString(buff,4);
	send_log("Trigger type = %lu",triggerType);
}

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
	if (c == '\n') {
		ptr = input;
		if (!strncmp(input, SYNC_STR, SYNC_STR_SIZE)) {
			//send_log("proper packet");
			ptr += SYNC_STR_SIZE;
			sscanf(ptr, "%04x", &psize);
			//send_log("size=%04x", psize);
			ptr += 4;
			sscanf(ptr, "%02x", &ptype);
			//send_log("type=%02x", ptype);
			ptr += 2;
			// find proper packet handler function and run
			for (int i=0; pkt_handler[i].type ;i++)
				if (pkt_handler[i].type == ptype) {
					(*(pkt_handler[i].func))(ptr, psize);
				}
		} else {
			//send_log("wrong packet");
		}
		count = 0;
	}
}

static void TaskProcessPacketInit(void *data)
{
	send_log("Hello");
}

ADD_TASK(TaskProcessPacket, TaskProcessPacketInit, NULL, "Packet Processing task")
