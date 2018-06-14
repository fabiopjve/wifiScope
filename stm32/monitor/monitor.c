/* Simple monitor commands */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "common.h"



ParserReturnVal_t CmdR(int mode)
{
  uint32_t addr, data,i;

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  fetch_uint32_arg(&addr);

  data = *((uint32_t *)addr);
  
  printf("0x%08lX: 0x%08lX\n",addr, data);
  printf("            3322 2222 2222 1111 1111 1100 0000 0000\n"
	 "            1098 7654 3210 9876 5432 1098 7654 3210\n"
	 "            ==== ==== ==== ==== ==== ==== ==== ====\n"
	 "           ");
  for(i=0; i<32; i++) {
    printf("%s%c",
	   i % 4 ? "" : " ",
	   data & 0x80000000 ? '1' : '0');
    data <<= 1;
  }
  printf("\n");
  return CmdReturnOk;
}


ParserReturnVal_t CmdW(int mode)
{
  uint32_t addr,data;

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  fetch_uint32_arg(&addr);
  fetch_uint32_arg(&data);

  *((uint32_t *)addr) = data;
  return CmdReturnOk;
}


ADD_CMD("r",CmdR,    "<ADDR>          Read Memory")
ADD_CMD("w",CmdW,    "<ADDR> <DATA>   Write Memory")

