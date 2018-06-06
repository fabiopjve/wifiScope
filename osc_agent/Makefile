CFLAGS=-I.

PREFIX	=	mipsel-openwrt-linux-
CC=$(PREFIX)gcc
AR=$(PREFIX)ar
AS=$(PREFIX)as
GDB=$(PREFIX)gdb
OBJCOPY=$(PREFIX)objcopy
OBJDUMP=$(PREFIX)objdump

osc_agent: osc_agent.o
	$(CC) -o osc_agent osc_agent.o

clean:
	rm -f *.o osc_agent .*~
