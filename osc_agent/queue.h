/*
 * queue.h:
 *
 *  queue include file
 */

#ifndef __QUEUE_H
#define __QUEUE_H

#define MAX_QUEUE BUFF_SIZE
#define QUEUE_INCR (x) (((x)+1) % MAX_QUEUE)
#define QUEUE_INCRBY (x,y) (((x)+(y)) % MAX_QUEUE)

typedef struct _queue {
	int fd;
	int head, tail;
	char buff[MAX_QUEUE];
} queue;

void init_queue(queue *q, int fd);
int isQueueEmpty(queue *q);
int isQueueFull(queue *q);
void enqueue(queue *q, char *buff, int len);
int dequeue(queue *q, char *buff, int len);
int getQueueSize(queue *q);
#endif /* __QUEUE_H */
