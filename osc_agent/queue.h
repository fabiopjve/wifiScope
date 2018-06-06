#ifndef __QUEUE_H
#define __QUEUE_H

#define MAX_QUEUE 128

typedef struct _queue {
	int front;
	int rear;
	void* data[MAX_QUEUE + 1];
} queue;

void init_queue(queue *q);
void clear_queue(queue *q);
void* dequeue(queue *q);
int enqueue(queue *q, void* data);
int isQueueEmpty(queue *q);
#endif /* __QUEUE_H */
