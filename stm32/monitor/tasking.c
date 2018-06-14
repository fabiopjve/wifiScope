/* tasking.c:
 *
 *   Simple task driver.  Uses a list stored in the 'tasklist' section
 * to call tasks one at a time. To add a task to the list, use the
 * ADD_TASK() macro.  This will add a new task onto the task list.
 * Each task is implemented with a void function that should take a
 * void pointer argument to user data. This task driver is simply a
 * task executive, and because of that, it expects every task to
 * return when it completes its functionality.  Do not put busy waits
 * inside of tasks as this will slow down the whole system.
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "common.h"

/* Task list */
extern const TaskingTable_t _tasktable_start[];


/* Initialize the task system, call all the init functions */
void TaskingInit(void)
{
  const TaskingTable_t *p;

  p = _tasktable_start;
  while(p->name != NULL) {
    if(p->initFunc != NULL) {
      /* Call function */
      p->initFunc(p->data);
    }
    p++;
  }
}


/* Run all the tasks once. */
void TaskingRun(void)
{
  const TaskingTable_t *p;

  p = _tasktable_start;
  while(p->name != NULL) {
    if(p->func != NULL) {
      /* Call function */
      p->func(p->data);
    }
    p++;
  }
}

ParserReturnVal_t CmdTasks(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  const TaskingTable_t *p;
  uint32_t i;

  printf("Currently defined tasks:\n");
  p = _tasktable_start;
  i = 0;
  while(p->name != NULL) {
    printf("%2ld: %20s -- %s\n",
	   i, p->name, p->desc);
    p++;
    i++;
  }
  return CmdReturnOk;
}

ADD_CMD("tasks",CmdTasks,"                Dump task list")


#ifdef TEST_TASK
static void TestTask(void *data)
{
}
static void TestTaskInit(void *data)
{
}
ADD_TASK(TestTask,TestTaskInit,NULL,"Test task from tasking.c")
#endif
