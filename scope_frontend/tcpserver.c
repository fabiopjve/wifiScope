/* 
 * tcpserver.c
 *
 * This code will listen on the specified TCP port and wait for a connection. Once connected, it
 * will process oscilloscope commands and send fake data to test the graphic frontend.
 * 
 * usage: tcpserver <port>
 * Modified from https://www.cs.cmu.edu/afs/cs/academic/class/15213-f99/www/class26/tcpserver.c
 *   by Fabio Pereira
 * Date: June, 10th, 2018
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <math.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>

#define BUFSIZE 2048

#define CMD_SET_SAMPLE_RATE     0x11
#define CMD_READ_SAMPLE_RATE    0x12
#define CMD_READ_SAMPLES        0x22
#define CMD_START_SAMPLING      0x33
#define CMD_STOP_SAMPLING       0x44
#define CMD_SET_TRIGGER_LVL     0x55
#define CMD_READ_TRIGGER_LVL    0x66
#define CMD_SET_TRIGGER_TYPE    0x67
#define CMD_READ_TRIGGER_TYPE   0x68
#define CMD_DEBUG_MESSAGE       0xDE

int parentfd;       /* parent socket */
int childfd;        /* child socket */
int portno;         /* port to listen on */
int clientlen;      /* byte size of client's address */
struct sockaddr_in serveraddr; /* server's addr */
struct sockaddr_in clientaddr; /* client addr */
struct hostent *hostp; /* client host info */
char buf[BUFSIZE];  /* message buffer */
char *hostaddrp;    /* dotted decimal host addr string */
int optval;         /* flag value for setsockopt */
int size;           /* message byte size */
int sampleRate = 17;
int triggerLevel = 0;
int triggerMode = 0;
int isSampling = 0;

/*
 * error - wrapper for perror
 */
void error(char *msg) {
  perror(msg);
  exit(1);
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

/*
  char hasHeader(char * buf)

  Checks if the string starts with WOSC

  input:    char *buffer - the string we are going to write the result
  returns:  char - 0 if header not found, 1 if found
*/
char hasHeader(char * buf)
{
  if (*buf!='W') return 0;
  buf++;
  if (*buf!='O') return 0;
  buf++;
  if (*buf!='S') return 0;
  buf++;
  if (*buf!='C') return 0;
  return 1;
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
  char ch;
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
  void sendData(char command)

  Sends a command and its implicit payload over the TCP connection

  input:    char command - one of the known commands
            char size - 2 for bytes and 4 for words  
*/
void sendData(char command)
{
  char *buffer;
  unsigned int value = 0;
  unsigned int compareValue = 4096;
  char index = 0;
  buffer = alloca(4);
  if (buffer==NULL) {
    printf("sendData error: could not allocate memory\n");
    return;
  }
  switch (command) {
    case CMD_READ_SAMPLE_RATE :   value = sampleRate;     break;
    case CMD_READ_TRIGGER_LVL :   value = triggerLevel;   break;
    case CMD_READ_TRIGGER_TYPE :  value = triggerMode;    break;
  }
  send(childfd, "WOSC0004FF", 10, MSG_DONTWAIT);
  dataToHexString(command,2,buffer);
  send(childfd, buffer, 4, MSG_DONTWAIT);
  dataToHexString(value,4,buffer);
  printf("Value=%i, String=%s\n",value,buffer);
  send(childfd, buffer, 4, MSG_DONTWAIT);
  send(childfd, "\n", 1, MSG_DONTWAIT);
}

/*
  void sendData(char command)

  Sends all samples on TCP connection
*/
void sendBuffer(void)
{
  static int offset;
  char *buffer, *tempBuffer;
  unsigned int value = 0;
  int bufferSize = 64;
  buffer = alloca(bufferSize*4+11);
  if (buffer==NULL) {
    printf("sendData error: could not allocate memory\n");
    return;
  }
  // we increase the wave offset gradually so we can see some movement on screen!
  offset++;
  if (offset>30) offset=0;
  // now let's start working on the buffer
  tempBuffer = buffer;  // we keep a copy of the start of the buffer
  strcpy(buffer,"WOSC");
  buffer += 4;  // move the string pointer to the next available position
  // converts the payload size to hexadecimal and write into the buffer
  buffer = dataToHexString(bufferSize*4,4,buffer);
  // command = 22
  *buffer++ = '2';
  *buffer++ = '2';
  // now we create a sine wave and populate the buffer
  int x = 0;
  do {
    float sinRes = sin((3.141592*2/bufferSize)*(x+offset));
    float val = (sinRes+1)*2047;
    //printf("Val=%f %i\n",sinRes,(int)val);
    buffer = dataToHexString((int)val,4,buffer);
    x++;
  } while (x<bufferSize);
  *buffer++ = '\n'; // add a new line to the end of the buffer
  *buffer = '\0'; // this is needed only because we want to print the string on console
  printf("-> %s\n",tempBuffer); // print out the string
  send(childfd, tempBuffer, bufferSize*4+11, MSG_DONTWAIT); // send the string to client
  // we also send a debug message (just for testing)
  //send(childfd, "WOSC0005DEDebug\n", 16, MSG_DONTWAIT);
}

/*
  void performCommand(int cmd, int tempValue)

  Process a received command and its payload

  input:    char cmd - command we are trying to process
            int tempValue - payload received with command  
*/
void performCommand(char cmd, int tempValue)
{
  switch (cmd) {
    case CMD_SET_SAMPLE_RATE:
      sampleRate = tempValue;
      printf("Set sample rate to %i\n",sampleRate);
      break;
    case CMD_READ_SAMPLES:
      sendBuffer();
      break;
    case CMD_START_SAMPLING:
      printf("Sampling started\n");
      isSampling = 1;
      break;
    case CMD_STOP_SAMPLING:
      printf("Sampling stopped\n");
      isSampling = 0;
      break;            
    case CMD_SET_TRIGGER_LVL:
      triggerLevel = tempValue;
      printf("Set trigger level to %i\n",triggerLevel);
      break;              
    case CMD_SET_TRIGGER_TYPE:
      triggerMode = tempValue;
      printf("Set trigger mode to %i\n",triggerMode);
      break;    
    case CMD_READ_SAMPLE_RATE:        
    case CMD_READ_TRIGGER_LVL:
    case CMD_READ_TRIGGER_TYPE:
      sendData(cmd);
      break;   
    default:
      printf("Error: unkown command %i\n",cmd);                        
      break;
  } 
}

int main(int argc, char **argv) 
{
  /* 
   * check command line arguments 
   */
  if (argc != 2) {
    fprintf(stderr, "usage: %s <port>\n", argv[0]);
    exit(1);
  }
  portno = atoi(argv[1]);

  /* 
   * socket: create the parent socket 
   */
  int temp = 1;
  parentfd = socket(AF_INET, SOCK_STREAM, 0);
  if (parentfd < 0) error("ERROR opening socket");

  if (ioctl(parentfd, FIONBIO, &temp) < 0) {
    perror("ioctl F_SETFL, FNDELAY");
    exit(1);
  }  

  /* setsockopt: Handy debugging trick that lets 
   * us rerun the server immediately after we kill it; 
   * otherwise we have to wait about 20 secs. 
   * Eliminates "ERROR on binding: Address already in use" error. 
   */
  optval = 1;
  setsockopt(parentfd, SOL_SOCKET, SO_REUSEADDR, (const void *)&optval , sizeof(int));

  /*
   * build the server's Internet address
   */
  bzero((char *) &serveraddr, sizeof(serveraddr));

  /* this is an Internet address */
  serveraddr.sin_family = AF_INET;

  /* let the system figure out our IP address */
  serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);

  /* this is the port we will listen on */
  serveraddr.sin_port = htons((unsigned short)portno);

  /* 
   * bind: associate the parent socket with a port 
   */
  if (bind(parentfd, (struct sockaddr *) &serveraddr, sizeof(serveraddr)) < 0) error("ERROR on binding");

  /* 
   * listen: make this socket ready to accept connection requests 
   */
  if (listen(parentfd, 5) < 0) error("ERROR on listen"); /* allow 5 requests to queue up */

  /* 
   * main loop: wait for a connection request, echo input line, 
   * then close connection.
   */
  clientlen = sizeof(clientaddr);
  while (1) {

    /* 
     * accept: wait for a connection request 
     */
    printf("Waiting\n");
    childfd = -1;
    while (childfd<0) childfd = accept(parentfd, (struct sockaddr *) &clientaddr, &clientlen);
    printf("Accept returned: %i \n",childfd);
    if (childfd < 0) error("ERROR on accept\n");
    
    /* 
     * gethostbyaddr: determine who sent the message 
     */
    hostp = gethostbyaddr((const char *)&clientaddr.sin_addr.s_addr, sizeof(clientaddr.sin_addr.s_addr), AF_INET);
    if (hostp == NULL) error("ERROR on gethostbyaddr\n");
    hostaddrp = inet_ntoa(clientaddr.sin_addr);
    if (hostaddrp == NULL) error("ERROR on inet_ntoa\n");
    printf("server established connection with %s (%s)\n", hostp->h_name, hostaddrp);
    
    /* 
     * read: read input string from the client
     */
    while (1) {
      bzero(buf, BUFSIZE);
      size = read(childfd, buf, BUFSIZE);
      if (size < 0)  { 
        error("ERROR reading from socket");
        close(childfd);
        break;
      }
      // check if the packet includes the fields we expect
      if (size) {
        int packetLength = 0;
        int packetType = 0;
        int packetError = 0;
        int tempValue = 0;
        if (hasHeader(buf)) printf("Header found\n"); else packetError = -1;
        if (getDataFromString(buf+4,4)>=0) packetLength = getDataFromString(buf+4,4); else packetError = -1;
        //printf("Packet Length=%i\n",packetLength);
        if (getDataFromString(buf+8,2)>=0) packetType = getDataFromString(buf+8,2); else packetError = -1; 
        //printf("Packet type=%i\n",packetType);
        if (getDataFromString(buf+10,4)>=0) tempValue = getDataFromString(buf+10,4);
        if (packetError>=0) {
          // packet successfully decoded
          performCommand(packetType,tempValue);
        } else printf("Packet error\n");
      } else {
        printf("Client disconnected\n");
        close(childfd);
        break;
      }
    }
  }
}