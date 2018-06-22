/* default.c:
 *
 *  Default IRQ handler.
 *
 */
#include <stdio.h>
#include <stdint.h>

#include "common.h"

extern char *InterruptNames[];

/* Provide some diagnostics in the event that an unexpected interrupt
 * occurs */
void Default_IRQHandler(void)
{
  uint32_t irq, irqIndex;
  uint32_t icsr;

  icsr = SCB->ICSR;
  irqIndex = (icsr & 0x3f);
  irq  = irqIndex-16;
  
  PolledPrintf("%s() entered, this has probably occurred because an \r\n",
	       __FUNCTION__);
  PolledPrintf("interrupt without a handler was triggered.  The interrupt\r\n");
  PolledPrintf("that has occurred has an index of %ld.\r\n", irq);
  PolledPrintf("This is the %s interrupt\r\n",InterruptNames[irqIndex]);
  PolledPrintf("The watchdog will now reset the system.\r\n");

  /* Eventually the watchdog will reset us */
  while(1) {}

}
