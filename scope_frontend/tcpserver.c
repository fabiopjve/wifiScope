/* 
 * tcpserver.c - A simple TCP echo server 
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
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>

#define BUFSIZE 1024

#define CMD_SET_SAMPLE_RATE     0x11
#define CMD_READ_SAMPLE_RATE    0x12
#define CMD_READ_SAMPLES        0x22
#define CMD_START_SAMPLING      0x33
#define CMD_STOP_SAMPLING       0x44
#define CMD_SET_TRIGGER_LVL     0x55
#define CMD_READ_TRIGGER_LVL    0x66
#define CMD_SET_TRIGGER_TYPE    0x67
#define CMD_READ_TRIGGER_TYPE   0x68

/*
 * error - wrapper for perror
 */
void error(char *msg) {
  perror(msg);
  exit(1);
}

int sampleRate = 0;
int triggerLevel = 0;
int triggerMode = 0;
int isSampling = 0;

int main(int argc, char **argv) {
  int parentfd; /* parent socket */
  int childfd; /* child socket */
  int portno; /* port to listen on */
  int clientlen; /* byte size of client's address */
  struct sockaddr_in serveraddr; /* server's addr */
  struct sockaddr_in clientaddr; /* client addr */
  struct hostent *hostp; /* client host info */
  char buf[BUFSIZE]; /* message buffer */
  char *hostaddrp; /* dotted decimal host addr string */
  int optval; /* flag value for setsockopt */
  int size; /* message byte size */

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
      //printf("server received %d bytes: %s\n", size, buf);

      // check if the packet meets our standard
      if (size) {
        int packetLength = 0;
        int packetType = 0;
        int index = 0;
        int packetError = 0;
        int tempValue = 0;
        int digit = 0;
        while (buf[index]!='\n' && buf[index]!='\0') {
          digit = -1;
          if (buf[index]>='0' && buf[index]<='9') digit = buf[index] - '0';
          if (buf[index]>='A' && buf[index]<='F') digit = buf[index] - 'A' + 10;
          digit &= 0x0f;
          if (digit<0) {
            printf("Error: unkown digit %c\n",buf[index]);
            packetError = -1;
            break;
          }
          if(index<4) {
            // read packet Length
            packetLength <<= 4;
            packetLength |= digit;
          } else if (index<6) {
            // read packet Type
            packetType <<= 4;
            packetType |= digit;
          } else {
            // read payload
            switch (packetType) {
              case CMD_SET_SAMPLE_RATE:
              case CMD_SET_TRIGGER_LVL:
              case CMD_START_SAMPLING:
              case CMD_SET_TRIGGER_TYPE:
                if (index<10) {
                  tempValue <<= 4;
                  tempValue |= digit;
                }
                break;
              case CMD_READ_SAMPLE_RATE:
              case CMD_READ_SAMPLES:
              
              case CMD_STOP_SAMPLING:
              
              case CMD_READ_TRIGGER_LVL:
              
              case CMD_READ_TRIGGER_TYPE:
              default:
                printf("Error: unkown command %i\n",packetType);
                packetError = -1;                        
                break;
            }
          }
          index++;
          if (packetError<0) break;
        }
        if (packetError>=0) {
          // packet successfully decoded
          switch (packetType) {
            case CMD_SET_SAMPLE_RATE:
              sampleRate = tempValue;
              printf("Set sample rate to %i\n",sampleRate);
              break;
            case CMD_READ_SAMPLE_RATE:
            case CMD_READ_SAMPLES:
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
            case CMD_READ_TRIGGER_LVL:
            case CMD_SET_TRIGGER_TYPE:
              triggerMode = tempValue;
              printf("Set trigger mode to %i\n",triggerMode);
              break;            
            case CMD_READ_TRIGGER_TYPE:
            default:
              printf("Error: unkown command %i\n",packetType);
              packetError = -1;                        
              break;
          }        
        }
      } else {
        printf("Client disconnected\n");
        close(childfd);
        break;
      }
    }
    

   
    /* 
     * write: echo the input string back to the client 
     */
    //size = write(childfd, buf, strlen(buf));
    //if (size < 0) error("ERROR writing to socket");
    //close(childfd);
  }
}
