/* terminal.inc: -*-c-*-
 *
 *   Definitiions for the terminal interfaces.
 *
 */

#ifndef TERMINAL
#define TERMINAL(name,periph,irq,desc)
#endif
TERMINAL(CONSOLE, USART3, USART3,"Console")
TERMINAL(DATA, USART2, USART2,"Data")

#undef TERMINAL
  
