/* dfu.c:
 *
 *   Device firmware update entry routines.
 *
 *   This module implements the logic to switch into DFU mode.  When
 *   the DFUStart() routine is called, a cookie is written into the
 *   persistant store. Then a reset of the CPU is triggered.  At
 *   startup, DFUInit() is called before anything is initialized.  If
 *   the cookie matches, then the MSP is set to its reset value, and a
 *   branch is made to the Bootloader start address.  This follows the
 *   example shown by ST.
 *
 */

#include <stdint.h>

#include "common.h"

#define SYSMEM_BASE               ((uint32_t)0x1FFFD800)

#define COOKIE  0xDEADBEEF

void BranchToDFU(void)
{

  uint32_t msp;
  void (*SystemBootJump)(void);
  SystemBootJump=(void (*)(void)) (*(uint32_t *)(SYSMEM_BASE + 4));
  msp = *(uint32_t *)(SYSMEM_BASE);
  /* set up MSP */
  __set_MSP(msp);
  /* Branch to bootloader */
  SystemBootJump();
}  

void DFUInit(void)
{
  /* Cookie match? */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_RCC_RTC_CONFIG(RCC_RTCCLKSOURCE_LSE);
  __HAL_RCC_RTC_ENABLE();
  HAL_PWR_EnableBkUpAccess();

  if(RTC->BKP0R == COOKIE) {
    RTC->BKP0R = ~COOKIE;  /* Kill the cookie */
    BranchToDFU();
  }

}

void DFUStart(void)
{
  /* Set Cookie */
  RTC->BKP0R = COOKIE;

  /* Trigger a reset */
  NVIC_SystemReset();

}

ParserReturnVal_t CmdDFU(int mode)
{
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  DFUStart();

  /* This shouldn't happen! */
  return CmdReturnFailed;
}
ADD_CMD("dfu", CmdDFU, "                Invoke Device Firmware Update");


void ExecuteReset()
{
  printf("System will be reset now\n");
  NVIC_SystemReset();
}

ParserReturnVal_t CmdReset(int mode)
{
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  ExecuteReset();

  return CmdReturnOk;
}
ADD_CMD("reset", CmdReset, "                Reset system into bootloader");
