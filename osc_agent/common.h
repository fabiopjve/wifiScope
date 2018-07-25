/*
 * common.h:
 *
 *  Common include file
 */
#ifndef __COMMON_H
#define __COMMON_H

#include <time.h>

#define TRUE	1
#define FALSE	0

#define BUFF_SIZE 1024

#define TTY_DEV	"/dev/ttyACM0"

#ifdef DEBUG_TIMESTAMP
#define pr_info(fmt, ...) do {			\
	char str[32];						\
	time_t clk = time(NULL);			\
	strncpy(str, ctime(&clk) + 11, 8);	\
	str[8] = 0;							\
	printf("[%s] ", str);				\
	printf(fmt, ##__VA_ARGS__);			\
} while (0)
#else
#define pr_info(fmt, ...) printf(fmt, ##__VA_ARGS__);
#endif

// below pr_debug macro is used only for verbose debugging
#ifdef DEBUG
#define pr_debug pr_info
#else
#define pr_debug(fmt, ...)
#endif

#define pr_err(fmt, ...) printf("%s:%3d: " fmt, __func__, __LINE__, ##__VA_ARGS__)

// just for code readability
#define lock(x)		pthread_mutex_lock(x);
#define unlock(x)	pthread_mutex_unlock(x);

#if !defined(container_of)
/* given a pointer @ptr to the field @member embedded into type (usually
 * struct) @type, return pointer to the embedding instance of @type. */
#define container_of(ptr, type, member) \
   ((type *)((char *)(ptr)-(char *)(&((type *)0)->member)))
#endif

#ifdef DEBUG_DUMP
#define hex_dump(label, buff, size) do {	\
	printf("\n======================== ");		\
	printf("%s", label);					\
	printf(" ========================\n");		\
	char str[16+1];							\
	for (int i=0;i<=size;i++) {				\
		if (i && i%16 == 0) {				\
			str[16] = '\0';					\
			puts(str);						\
		}									\
		if (i >= size) break;				\
		printf("%02x ", buff[i]);			\
		str[i%16] = isprint(buff[i]) ? buff[i] : '.'; \
	}	\
} while (0)
#else
#define hex_dump(label, buff, size)
#endif

int open_port(const char *dev);
void set_baudrate(int fd);
int make_blocking(int fd);

#endif /* __COMMON_H */
