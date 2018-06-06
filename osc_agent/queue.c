#include <stdlib.h>
#include <stdio.h>
#include "common.h"
#include "queue.h"

int isQueueEmpty(queue *q)
{
	return q->front == q->rear;
}

int isQueueFull(queue *q)
{
	return q->front == (q->rear + 1) % MAX_QUEUE;
}

void init_queue(queue *q)
{
	q->front = q->rear = 0;

	for(int i=0; i < MAX_QUEUE + 1; i++)
		q->data[i] = NULL;
}

void clear_queue(queue *q)
{
	q->front = q->rear;

	for(int i=0; i < MAX_QUEUE + 1; i++) {
		if (q->data[i])
			free(q->data[i]);
	}
}

void* dequeue(queue *q)
{
	void* data;

	// if Queue is empty,
	if (q->front == q->rear) {
		printf("Queue underflow\r\n");
		return NULL;
	}

	data = q->data[q->front];
	q->data[q->front] = NULL;

	q->front++;
	q->front %= MAX_QUEUE;

	return data;
}

int enqueue(queue *q, void* data)
{
	if (isQueueFull(q)) {
		printf("Queue overflow\r\n");
		return -1;
	}

	q->data[q->rear] = data;

	q->rear++;
	q->rear %= MAX_QUEUE;

	return 0;
}
