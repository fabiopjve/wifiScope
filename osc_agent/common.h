/*
 * common.h:
 *
 *  Common include file
 */
#ifndef __COMMON_H
#define __COMMON_H

#define TRUE	1
#define FALSE	0

#define TTY_DEV	"/dev/ttyACM0"

// below pr_debug macro is used only for verbose debugging
#ifdef DEBUG
#define pr_debug(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define pr_debug(fmt, ...)
#endif

#define pr_info(fmt, ...) printf("%18s:%3d\t" fmt, __func__, __LINE__, ##__VA_ARGS__)

// just for code readability
#define lock(x)		pthread_mutex_lock(x);
#define unlock(x)	pthread_mutex_unlock(x);

#if !defined(container_of)
/* given a pointer @ptr to the field @member embedded into type (usually
 * struct) @type, return pointer to the embedding instance of @type. */
#define container_of(ptr, type, member) \
   ((type *)((char *)(ptr)-(char *)(&((type *)0)->member)))
#endif

void dump_buff(char *buff, int size);
void hex_dump(char *buff, int size);

int open_port(const char *dev);
void set_baudrate(int fd);
int make_blocking(int fd);

#endif /* __COMMON_H */
