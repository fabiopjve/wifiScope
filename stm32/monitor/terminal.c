/* Terminal I/O services for STM32F3 discovery board.
 *
 *  Implement the low-level _write_r and _read_r functions needed for
 *  newlib. Use the underlying HAL calls to communicate with
 *  peripheral drivers.
 */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "common.h"
#include "terminal.inc"

//#define READ_POLLED     1

typedef struct TerminalInfo_s {
  char *name;               /* Name of the port */
  char *desc;               /* Description of port */
  USART_TypeDef *instance;  /* USART to use */
  IRQn_Type IRQn;           /* IRQ index */
} TerminalInfo_t;

/* Create map for UART to terminal buffer mapping */
static const TerminalInfo_t TerminalInfo[] = {
#define TERMINAL(name,periph,irq,desc)	\
  {#name, desc, periph, irq ## _IRQn },
#include "terminal.inc"
};

#define TERMINALBUFFERSIZE 1024
#define TERMINALINCR(x) (((x)+1) % TERMINALBUFFERSIZE)
#define TERMINALINCRBY(x,y) (((x)+(y)) % TERMINALBUFFERSIZE)
#define TERMINALXOFF       (0.90*TERMINALBUFFERSIZE)
#define TERMINALXON        (0.50*TERMINALBUFFERSIZE)

typedef struct _TerminalStats_s {
  /* Statistics counters */
  uint32_t  writeTooBig;
  uint32_t  writeBlocked;
  uint32_t  written;
  uint32_t  receiveTooBig;
  uint32_t  received;
  uint32_t  overrunError;
  uint32_t  noiseError;
  uint32_t  framingError;
  uint32_t  parityError;
} TerminalStats_t;  

typedef struct _TerminalState_s {
  char      inBuffer[TERMINALBUFFERSIZE];
  volatile uint16_t  inHead, inTail, inCount;  /* Head and tail indexes */
  char      outBuffer[TERMINALBUFFERSIZE];
  volatile uint16_t  outHead, outTail, outCount;
  volatile uint16_t  outSending;
  
  TerminalStats_t stats;
} TerminalState_t;

/* allocate Terminal State structures */
static TerminalState_t TerminalState[INDEX_MAX];

void TerminalInit(void)
{
  USART_TypeDef *uart;
  uint32_t i;
  
  /* Set all stream I/O to non-buffered */
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  for(i=0; i<INDEX_MAX; i++) {
    /* Figure out which UART to deal with */
    uart = TerminalInfo[i].instance;

#ifndef READ_POLLED    
    /* We will ignore the HAL interrupt capabilities... Manually
     * enable the Rx Interrupt and the other error interrupts */
    uart->CR1 |= USART_CR1_RXNEIE | USART_CR1_PEIE;
    uart->CR3 |= USART_CR3_EIE;
#endif
    uart->RQR = USART_RQR_TXFRQ; /* Clear transmit done */
  }
}

void TerminalTask(void)
{


  
}
/* Attempt to read a block of data from the Terminal buffer
 * return the actual number of bytes read.
 */
uint32_t TerminalRead(PortIndex_e index, uint8_t *ptr, uint32_t len)
{
#ifndef READ_POLLED
  uint32_t count, tail;

  /* try to read len characters from the input buffer */

  /* Crticial section begin */
  __disable_irq();
  count = 0;
  while(TerminalState[index].inCount && (count < len)) {
    tail   = TerminalState[index].inTail;
    *ptr++ = TerminalState[index].inBuffer[tail];
    TerminalState[index].inTail = TERMINALINCR(tail);
    TerminalState[index].inCount--;
    count++;
  }

  /* Critical section end */
  __enable_irq();
  return count;
#else
  /* Polled reading */
  USART_TypeDef *uart;
  uart=TerminalInfo[index].instance;

  if(uart->ISR & USART_ISR_RXNE) {
    *ptr = uart->RDR;
    return 1;
  }
  return 0;
#endif

}

/* Write a block to the given terminal buffer, assume interrupts can
 * be disabled.
 */
uint32_t TerminalOutputBufferWrite(PortIndex_e index,
				   const char *p, uint32_t len)
{
  USART_TypeDef *uart;
  uint32_t head, sent;


  /* Check that our block will ever fit, if not, reduce it to a length
     that will */
  if(len >= TERMINALBUFFERSIZE) {
    /* Keep track of how many times this happens */
    TerminalState[index].stats.writeTooBig++;
    len = TERMINALBUFFERSIZE/2;
  }

  if((TerminalState[index].outCount+len) >= TERMINALBUFFERSIZE) {
    /* Keep track of how many times we block */
    TerminalState[index].stats.writeBlocked++;

    /* Block till we have space */
    while((TerminalState[index].outCount+len) >= TERMINALBUFFERSIZE) {
      asm volatile ("nop");
    }

  }

  /* Critical section begin */
  __disable_irq();
  /* Copy characters into the buffer */
  sent = 0;
  while((len != 0) 
	&& (TerminalState[index].outCount<TERMINALBUFFERSIZE)) {
    head = TerminalState[index].outHead;
    TerminalState[index].outBuffer[head] = *p++;
    TerminalState[index].outHead = TERMINALINCR(head);
    TerminalState[index].outCount++;
    len--;
    sent++;
  }
  TerminalState[index].stats.written += sent;  /* gather statistics */

  /* Enable the transmit interrupt, our ISR will fire, and start
   * sending characters. */
  uart=TerminalInfo[index].instance;
  uart->CR1 |= USART_CR1_TXEIE;
  uart->RQR = USART_RQR_TXFRQ; /* Clear transmit done */

  /* Critical section end */
  __enable_irq();
  return sent;
}

/* Output data to the buffer in a polled mode.  Usefull when we have
 * taken an exception, and the main code is no longer running. 
 */

uint32_t TerminalWritePolled(PortIndex_e index,const char *p, uint32_t len)
{
  USART_TypeDef *uart;
  uint32_t sent;

  sent = 0;
  uart = TerminalInfo[index].instance;
  while(len) {
    /* Wait for buffer empty */
    while(!(uart->ISR & USART_ISR_TXE)) {
      asm volatile ("nop");
    }
    /* Send character */
    uart->TDR = *p;
    /* Go to next character */
    p++;
    len--;
    sent++;
  }
  return sent;
}

void PolledPrintf(const char * restrict fmt, ...)
{
  va_list ap;
  int len;
  char buf[80];
  
  len = 0;
  /* Format message into buffer */
  va_start(ap,fmt);
  len = vsnprintf(buf,sizeof(buf),fmt, ap);
  TerminalWritePolled(INDEX_CONSOLE,buf,len);  
}


uint32_t TerminalInputBufferWrite(PortIndex_e index, char *p, uint32_t len)
{
  uint32_t head;

  /* Critical Section begin */
  //__disable_irq();
  /* Check that our block will fit, if not, return fail */
  if((TerminalState[index].inCount + len) >= TERMINALBUFFERSIZE) {
    //__enable_irq();
    TerminalState[index].stats.receiveTooBig++;
    return 1;
  }
  /* Copy characters into the buffer */
  TerminalState[index].stats.received += len;
  while(len != 0) {
    head = TerminalState[index].inHead;
    TerminalState[index].inBuffer[head] = *p++;
    TerminalState[index].inHead = TERMINALINCR(head);
    TerminalState[index].inCount++;
    len--;
  }
  
  /* Critical section end */
  //__enable_irq();
  return 0;
}

void TerminalISR(PortIndex_e index)
{
  char c;
  USART_TypeDef *uart;

  uint32_t tail;
  uint32_t isr;

  uint32_t icr = 0;

  /* Figure out which UART to deal with */
  uart = TerminalInfo[index].instance;

  isr = uart->ISR;

  /* UART in mode Receiver ---------------------------------------------------*/
  if(isr & USART_ISR_RXNE) { 
    /* Read RDR, and place into input buffer */
    c = uart->RDR;
    TerminalInputBufferWrite(index,&c,1);
  }


  /* UART in mode Transmitter ------------------------------------------------*/
  if(isr & USART_ISR_TXE) {
    /* Take a character from the TX buffer, if it is the last one,
     * disable the Tx Interrupt. */
    if(TerminalState[index].outCount == 0) {
      /* Disable Tx Interrupt */
      uart->CR1 &= ~(USART_CR1_TXEIE);
    }  else {
      /* There is something to transmit */
      tail = TerminalState[index].outTail;
      c = TerminalState[index].outBuffer[tail];
      uart->TDR = c;

      /* Clear transmission complete bit... */
      uart->ICR = USART_ICR_TCCF;

      tail = TERMINALINCR(tail);
      TerminalState[index].outCount--;
      TerminalState[index].outTail = tail;
    }
  }

  /* End of transmit from shift register */
  if(isr & USART_ISR_TC) {
    /* Clear interupt */
    uart->CR1 &= ~(USART_CR1_TCIE);
    icr |= USART_ICR_TCCF;
   }

  
  /* Clean up and count any errors that may be set */
  if(isr & USART_ISR_PE) {
    TerminalState[index].stats.parityError++;
    icr |= USART_ICR_PECF;
  }
  if(isr & USART_ISR_FE) {
    TerminalState[index].stats.framingError++;
    icr |= USART_ICR_FECF;
  }
  if(isr & USART_ISR_NE) {
    TerminalState[index].stats.noiseError++;
    icr |= USART_ICR_NCF;
  }
  if(isr & USART_ISR_ORE) {
    TerminalState[index].stats.overrunError++;
    icr |= USART_ICR_ORECF;
  }
  
  uart->ICR = icr;

}


uint32_t TerminalReadCount(PortIndex_e index)
{
    return TerminalState[index].inCount;
}

/* IRQ trampolines */
#define TERMINAL(name,periph,irq,desc)	\
  void irq ## _IRQHandler(void) {				\
    TerminalISR(INDEX_ ## name);					\
  }
#include "terminal.inc"

/* Dump the terminal statistics */
ParserReturnVal_t CmdStats(int mode)
{
  uint32_t i;
  TerminalStats_t s[INDEX_MAX];

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  /* Copy terminal stats to local storage, and reset counters atomically */
  __disable_irq();
  for(i=0; i<INDEX_MAX; i++) {
    s[i] = TerminalState[i].stats;
    bzero(&TerminalState[i].stats, sizeof(TerminalState[i].stats));
#ifdef USE_USB
    if(i == INDEX_USB) {
      /* We need to fool the USB driver into printing... */
      TerminalState[i].stats.received = 1;
    }
#endif
  }
  __enable_irq();

  /* Display stats for the user */
  for(i=0; i<INDEX_MAX; i++) {
    printf("Terminal #%lu, %s: %s\n"
	   "   writeTooBig:   %lu\n"
	   "   writeBlocked:  %lu\n"
	   "   written:       %lu\n"
	   "   receiveTooBig: %lu\n"
	   "   received:      %lu\n"
	   "   overruns:      %lu\n"
	   "   noise:         %lu\n"
	   "   framing:       %lu\n"
	   "   parity:        %lu\n",
	   i,
	   TerminalInfo[i].name,
	   TerminalInfo[i].desc,
	   s[i].writeTooBig,
	   s[i].writeBlocked,
	   s[i].written,
	   s[i].receiveTooBig,
	   s[i].received,
	   s[i].overrunError,
	   s[i].noiseError,
	   s[i].framingError,
	   s[i].parityError);
  }

  return CmdReturnOk;
}

ADD_CMD("termstat", CmdStats, "                Dump terminal statistics");

/* Command to send something arbitrary to a terminal */
ParserReturnVal_t CmdSend(int mode)
{
  uint32_t index,rc,len;
  char *s;
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  index = 0;
  rc = fetch_uint32_arg(&index);
  if(rc) {
    printf("Must specify terminal index between 0 and %d\n",
	   INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  if(index >= INDEX_MAX) {
    printf("Terminal index of %lu is larger than max index of %d\n",
	   index,INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  s = NULL;
  fetch_cmd_args(&s);
  len = strlen(s);
  if(len==0) {
    printf("You need to specify what you want to send\n");
    return CmdReturnBadParameter2;
  }
  TerminalOutputBufferWrite(index,s,len);
  /* Append a CR/LF just in case */
  TerminalOutputBufferWrite(index,"\r\n",2);
  return CmdReturnOk;
}

ADD_CMD("send", CmdSend, "<index> <str>   Send arbitrary string to terminal");

/* Command to send something arbitrary to a terminal */
ParserReturnVal_t CmdReceive(int mode)
{
  uint32_t index,rc;
  char c;
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  index = 0;
  rc = fetch_uint32_arg(&index);
  if(rc) {
    printf("Must specify terminal index between 0 and %d\n",
	   INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  if(index >= INDEX_MAX) {
    printf("Terminal index of %lu is larger than max index of %d\n",
	   index,INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  printf("Reading from terminal %lu\n",index);

  while(TerminalRead(index, (uint8_t *)&c, 1)) {
    printf("%c",c);
  }
  return CmdReturnOk;
}

ADD_CMD("receive", CmdReceive, "<index>         Dump whatever is in the Rx buffer");

/* Make a transparent terminal to the desired port */
ParserReturnVal_t CmdTransparent(int mode)
{
  uint32_t index,rc;
  char c,o;
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  index = 0;
  rc = fetch_uint32_arg(&index);
  if(rc) {
    printf("Must specify terminal index between 0 and %d\n",
	   INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  if(index >= INDEX_MAX) {
    printf("Terminal index of %lu is larger than max index of %d\n",
	   index,INDEX_MAX-1);
    return CmdReturnBadParameter1;
  }

  if(index == INDEX_CONSOLE) {
    printf("Terminal index cannot be the console\n");
    return CmdReturnBadParameter1;
  }
  
  printf("Reading from terminal %lu\n",index);

  o = '\0';
  while(o != '\003') {
    if(TerminalRead(index, (uint8_t *)&c, 1)) {
      printf("%c",c);
      //printf("%02x",c);
    }
    if(TerminalRead(INDEX_CONSOLE, (uint8_t *)&o, 1)) {
      TerminalOutputBufferWrite(index,&o,1);
    }
    WDTFeed();
  }
    return CmdReturnOk;
}

ADD_CMD("transparent", CmdTransparent,
	"<index>         Make a terminal with index");
  
