/* memory.c:
 *
 *  Functions for dealing with the on board memory 
 */

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#include "common.h"

#define BYTES_PER_LINE        16
#define BYTES_PER_BINARY_LINE  8

/* Dump a buffer in HEX with the address as given */
void DumpBuffer(uint8_t *buffer, uint32_t count, uint32_t address)
{
  uint32_t i;
  uint8_t buf[BYTES_PER_LINE+1],*bufp;   /* Buffer to assemble printed chars */
  uint8_t *p,c;

  if(count == 0) return;

  p = buffer;
  bufp = buf;
  /* dump the requested number of bytes in hex. */
  for(i=0; i<count; i++) {
    if((i% BYTES_PER_LINE) == 0) {
      printf("%08x: ",(unsigned int)address);
      bufp = buf;
    }
    /* Read the value to print */
    c = *p++;
    address++;

    /* Stash the appropriate chacter to print at EOL */
    if(isprint(c)) {
      *bufp++ = c; /* Stick in the character */
    } else {
      *bufp++ = '.';
    }

    printf(" %02x",((unsigned int)c) & 0xff);
    
    /* At end of line ? */
    if((i % BYTES_PER_LINE) == (BYTES_PER_LINE-1)) {
      *bufp = '\0';  /* NULL terminate buffer */

      /* Yes, print buffer */
      printf("  |%s|\n",buf);
    }

  }

  /* dump out to EOL */
  *bufp='\0';
  if(count % BYTES_PER_LINE) {
    for(i=0; i<(BYTES_PER_LINE - (count % BYTES_PER_LINE)); i++) {
      printf("   ");
    }
    /* Yes, print buffer */
    printf("  |%s|\n",buf);
  }
}

/* Dump a buffer in binary with the address as given */
void DumpBufferBinary(uint8_t *buffer, uint32_t count, uint32_t address)
{
  uint32_t i,j;
  uint8_t *p,c;

  p = buffer;
  for(i=0; i<count; i++) {
    if((i% BYTES_PER_BINARY_LINE) == 0) {
      printf("%08x:",(unsigned int)address);
    }
    /* Read the value to print */
    c = *p++;
    address++;

    for(j=0; j<8; j++) {
      printf("%c",c & 0x80 ? '1' : '0');
      c <<= 1;
    }
    printf(" ");
  
    if((i% BYTES_PER_BINARY_LINE) == (BYTES_PER_BINARY_LINE - 1)) {
      printf("\n");
    }
  }
  /* Print the final trailing NL if we didn't just print it */
  if((count % BYTES_PER_LINE) !=  (BYTES_PER_BINARY_LINE - 1)) {
    printf("\n");
  }
}

ParserReturnVal_t CmdDump(int action)
{
  int rc;
  static uint32_t address=0, count=0x100;

  if(action==CMD_SHORT_HELP) return CmdReturnOk;
  if(action==CMD_LONG_HELP) {
    printf("dump {<address> {<count>}}\n\n"
	   "This command dumps the contents of local memory to the terminal.\n"
	   "\n"
	   "<address> can be any value from 0x00000000 to 0xFFFFFFFF.\n"
	   "Invalid accesses will be trapped.  If address is unspecified,\n"
	   "continues from last printed address. Default value is 0.\n"
	   "\n"
	   "<count> is the number of bytes to dump to the terminal.\n"
	   "If the count is unspecified uses last count. The default\n"
	   "count is 0x100 bytes.\n\n");

    printf("Current address is 0x%08x, current count is 0x%x\n",
	   (unsigned int)address, (unsigned int)count);
    return CmdReturnOk;
  }

  /* Fetch address, defaut to last address if missing */
  rc = fetch_uint32_arg(&address);
  if(rc == 0) {
    /* Fetch count, default to last count if missing */
    fetch_uint32_arg(&count);
  }

  DumpBuffer((uint8_t *)address, count, address);
  /* Update parameters for next time */
  address = address+count;
  return CmdReturnOk;
}

ADD_CMD("d",CmdDump,"<addr> <count>  Dump memory")
