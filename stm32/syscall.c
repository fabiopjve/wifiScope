/* Replacements for C-syscalls that newlib will make.  since we don't
 * actually have a standard I/O library, these syscalls will use the
 * UARTS/USB to read and write.  It is possible here to add addional
 * code to handle multiple file descriptors, as described by the
 * newlib manual.  Here we will just follow the rule that writing to
 * any fd means we want output to the terminal.
 */
#include <stdint.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <sys/times.h>
#include <reent.h>
#include <fcntl.h>
#include "common.h"

register char *stack_ptr asm("sp");

void *_sbrk_r(struct _reent *ptr, int incr)
{
  extern char end asm("end");
  static char *heap_end;
  char *prev_heap_end;
  
  if (heap_end == 0)
    heap_end = &end;
  
  prev_heap_end = heap_end;
  if (heap_end + incr > stack_ptr)
    {
      _Error_Handler(__FILE__, __LINE__);
      //              write(1, "Heap and stack collision\n", 25);
      //              abort();
      errno = ENOMEM;
      return (caddr_t) -1;
    }
  
  heap_end += incr;
  
  return (caddr_t) prev_heap_end;
}

int _close_r(struct _reent *ptr, int fd)
{
  return 0;
}

int _fstat_r(struct _reent *ptr, int fd, struct stat *st) __attribute__((used));

int _fstat_r(struct _reent *ptr, int fd, struct stat *st)
{

  /* Pretend everything is a character special file, so that we don't
   * allocate buffers. 
   */
   st->st_mode = S_IFCHR;
   return 0;
}

int _isatty_r(struct _reent *ptr, int file) __attribute__((used));

int _isatty_r(struct _reent *ptr, int file)
{
        return 1;
}
_off_t _lseek_r(struct _reent *ptr, int fd, off_t offset, int whence)
{
  return 0;
}
ssize_t _read_r(struct _reent *r, int fd, void *ptr, size_t len )
{
  uint32_t count;
  count = TerminalRead(0, (uint8_t *)ptr, len);
  return count;
}
ssize_t _write_r(struct _reent *r, int fd, const void *ptr, size_t len)
{
  const char *p;
  uint32_t count;

  /* Frob buffer to add appropriate carriage returns and newlines */
  count = len;
  p = ptr;
  while(count != 0) {
    if(*p == '\n') {
      /* XXX handle buffer overflow */
      TerminalOutputBufferWrite(INDEX_CONSOLE,"\r",1);
      //TerminalWritePolled(INDEX_CONSOLE,"\r",1);
    }
    TerminalOutputBufferWrite(INDEX_CONSOLE,p,1);
    //TerminalWritePolled(INDEX_CONSOLE,p,1);
    p++;
    count--;
  }
    
#if 0
  /* Transmit Terminal buffer... */
  if (HAL_USART_Transmit(&UartHandle, outputBuffer,
			 i, HAL_MAX_DELAY) != HAL_OK)
    {
      /* Transfer error in transmission process */
      Error_Handler();
    }
#endif

  return len;
}
int _open_r (struct _reent *ptr, const char *name,
	     int         flags,
	     int         mode)
{
  return -1;
}
