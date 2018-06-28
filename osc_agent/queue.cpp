#include "common.h"
#include "queue.h"

void init_queue(queue *q, int fd)
{
	q->head = q->tail = 0;
	q->fd = fd;
}

int isQueueEmpty(queue *q)
{
	return q->head == q->tail;
}

int isQueueFull(queue *q)
{
	return q->head == (q->tail + 1) % MAX_QUEUE;
}

// make sure len is bigger than available room in the queue
// before calling this function!!
void enqueue(queue *q, char *buff, int len)
{
#if 1
	// simplified version
	while (len) {
		q->buff[q->tail] = *buff++;
		q->tail++;
		q->tail %= MAX_QUEUE;
		len--;
	}
#else
	int freeroom;

	// memcpy version (would be faster thanks to the memory DMA)
	if (q->head <= q->tail) {
		freeroom = BUFF_SIZE - q->tail - 1;
		if (freeroom >= len) {
			memcpy(q->buff + q->tail, buff, len);
			q->tail += freeroom;
		} else {
			memcpy(q->buff, buff, len - freeroom);
		}
	}
#endif

	pr_debug("====== txq after enqueue (%d:%d)=====\n", q->head, q->tail);
	hex_dump(q->buff, MAX_QUEUE);
}

// If available data is less than len, just return the smaller size.
int dequeue(queue *q, char *buff, int len)
{
	int i;
#if 1
	for (i=0; i < len ;i++) {
		if (isQueueEmpty(q))
			break;
		buff[i] = q->buff[q->head];
		q->head++;
		q->head %= MAX_QUEUE;
	}
#else
	//int nbytes, cp_len;

	if (q->tail > q->head) {
		nbytes = write(q->fd, q->buffer, nbytes);
	} else {

	}
#endif

	pr_debug("====== txq after dequeue (%d:%d)=====\n", q->head, q->tail);
	hex_dump(q->buff, MAX_QUEUE);

	return i;
}
