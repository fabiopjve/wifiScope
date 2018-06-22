/* my_main.c: main file for monitor */
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#include "common.h"

/* This include will give us the CubeMX generated defines */
#include "main.h"

/* This function is called from the CubeMX generated main.c, after all
 * the HAL peripherals have been initialized. */
void my_init(void)
{
  /* Initialize the terminal system */
  TerminalInit();

  /* Initialize the task system */
  TaskingInit();

  my_Init();

}

/* This function is called from inside the CubeMX generated main.c,
 * inside the while(1) loop. */
void my_main(void)
{

  TaskingRun();  /* Run all registered tasks */
  my_Loop();

  WDTFeed();
}

ParserReturnVal_t CmdLed(int mode)
{
  uint32_t val,rc;
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  rc = fetch_uint32_arg(&val);
  if(rc) {
    printf("Please supply 1 | 0 to turn on or off the LED\n");
    return CmdReturnBadParameter1;
  }

  val = val ? 1 : 0;
  HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin,val);
  
  return CmdReturnOk;
}

ADD_CMD("led",CmdLed,"0 | 1           Control LED")

ParserReturnVal_t CmdButton(int mode)
{
  uint32_t val;
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  val = HAL_GPIO_ReadPin(B1_GPIO_Port,B1_Pin);

  printf("Button is %s\n",val ? "released" : "pressed");
  
  return CmdReturnOk;
}

ADD_CMD("button",CmdButton,"                Read Button")

