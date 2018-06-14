/* wdog.c:
 *
 *    Watchdog functions.
 *
 */
#include "common.h"
#if defined(HAL_IWDG_MODULE_ENABLED)
extern IWDG_HandleTypeDef hiwdg;
#endif

/* Feed the watchdog */
void WDTFeed(void)
{
#if defined(HAL_IWDG_MODULE_ENABLED)
  HAL_IWDG_Refresh(&hiwdg); /* Feed it */
#endif
}
#if defined(HAL_IWDG_MODULE_ENABLED)
void IWDG_IRQHandler(void) {
  register char *stack_ptr asm("sp");
  uint32_t *tos;
  uint32_t i;
  
  tos = (uint32_t *)stack_ptr;
 
  PolledPrintf("%s(): Dumping stack frame\r\n",__FUNCTION__);
  for(i=0; i<16; i++) {
    PolledPrintf("\t%08lx: %08lx\r\n",
		 (uint32_t)tos, *tos);
    tos++;
  }

}
#endif

