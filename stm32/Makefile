#
# Makefile for TDM V2 code
#

# C source files for the project
PROJ_NAME = simple_monitor
SRCS  = my_main.c mycode.s mytest.c process_packet.c
BUILD = build


###################################################
# Location of the linker scripts
LDSCRIPT_INC = ld
LDSCRIPT = STM32F303RETx_FLASH.ld

# monitor sources
SRCS += syscall.c

MONITOR = monitor
SRCS += $(MONITOR)/monitor.c $(MONITOR)/parser.c $(MONITOR)/dump.c \
	$(MONITOR)/terminal.c $(MONITOR)/dfu.c $(MONITOR)/wdog.c \
	$(MONITOR)/tasking.c $(MONITOR)/default.c \
	$(MONITOR)/decoder/STM32F303xE.c $(MONITOR)/decoder/decoder.c


# CubeMx generated files
CUBEMX     = cubemx
CUBEMX_SRC = $(CUBEMX)/Src
CUBEMX_INC = $(CUBEMX)/Inc
SRCS      += $(CUBEMX_SRC)/main.c \
             $(CUBEMX_SRC)/stm32f3xx_it.c \
             $(CUBEMX_SRC)/stm32f3xx_hal_msp.c \
             $(CUBEMX_SRC)/system_stm32f3xx.c

# startup file
SRCS += $(CUBEMX)/startup_stm32f303xe.s

# Location of CMSIS files for our device
CMSIS     = $(CUBEMX)/Drivers/CMSIS
CMSIS_INC = $(CMSIS)/Include
CMSIS_DEV = $(CMSIS)/Device/ST/STM32F3xx
CMSIS_DEV_INC = $(CMSIS_DEV)/Include
CMSIS_DEV_SRC = $(CMSIS_DEV)/Source/Templates

# Location of HAL drivers
HAL     = $(CUBEMX)/Drivers/STM32F3xx_HAL_Driver
HAL_INC = $(HAL)/Inc
HAL_SRC = $(HAL)/Src
SRCS   += $(HAL_SRC)/stm32f3xx_hal_rcc.c \
	  $(HAL_SRC)/stm32f3xx_hal_rcc_ex.c \
      $(HAL_SRC)/stm32f3xx_hal.c \
      $(HAL_SRC)/stm32f3xx_hal_cortex.c \
      $(HAL_SRC)/stm32f3xx_hal_uart.c \
      $(HAL_SRC)/stm32f3xx_hal_uart_ex.c \
      $(HAL_SRC)/stm32f3xx_hal_gpio.c \
	  $(HAL_SRC)/stm32f3xx_hal_iwdg.c \
	  $(HAL_SRC)/stm32f3xx_hal_rtc.c \
	  $(HAL_SRC)/stm32f3xx_hal_rtc_ex.c \
	  $(HAL_SRC)/stm32f3xx_hal_pwr.c \
	  $(HAL_SRC)/stm32f3xx_hal_pwr_ex.c

PREFIX	=	arm-none-eabi-
CC=$(PREFIX)gcc
AR=$(PREFIX)ar
AS=$(PREFIX)as
GDB=$(PREFIX)gdb
OBJCOPY=$(PREFIX)objcopy
OBJDUMP=$(PREFIX)objdump
SIZE=$(PREFIX)size

#FLOAT = -mfpu=fpv4-sp-d16 -mfloat-abi=softfp
FLOAT = -mfpu=fpv4-sp-d16 -mfloat-abi=hard
#FLOAT = -mfpu=fpv4-sp-d16 -mfloat-abi=soft


CFLAGS  = -Wall -g -std=gnu99
CFLAGS += -Os
CFLAGS += -Werror
CFLAGS += -mlittle-endian -mcpu=cortex-m4
CFLAGS += -mthumb
CFLAGS += $(FLOAT)
CFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -DSTM32F303xE
CFLAGS += -I .
CFLAGS += -I $(MONITOR)
CFLAGS += -I $(CMSIS_INC)
CFLAGS += -I $(CMSIS_DEV_INC)
CFLAGS += -I $(CUBEMX_INC)
CFLAGS += -I $(HAL_INC)
CFLAGS += -I $(MONITOR)
CFLAGS += -I $(MONITOR)/decoder
CFLAGS += --specs=nano.specs -u _printf_float
#CFLAGS += -flto

LDFLAGS  = -Wall -g -std=c99 -Os
LDFLAGS += -mlittle-endian -mcpu=cortex-m4
LDFLAGS += -Wl,--gc-sections -Wl,-Map=$(PROJ_NAME).map
LDFLAGS += -mthumb
LDFLAGS += --specs=nano.specs -u _printf_float
LDFLAGS += $(FLOAT)
LDFLAGS += -ffunction-sections -fdata-sections
#LDFLAGS += -flto

ASFLAGS =  -g -mlittle-endian -mcpu=cortex-m4
#ASFLAGS += -march=armv7e-m
ASFLAGS += -mthumb
ASFLAGS += $(FLOAT)
#ASFLAGS += -mfpu=fpv4-sp-d16 -mfloat-abi=soft
###################################################




OBJS = $(addprefix $(BUILD)/,$(addsuffix .o,$(basename $(SRCS))))
OBJS += $(BUILD)/version.o
FILES = $(notdir $(SRCS))
DEPS = $(addprefix deps/,$(addsuffix .d,$(basename $FILES)))

###################################################

.PHONY: all program debug clean reallyclean

all: $(BUILD) $(PROJ_NAME).elf $(PROJ_NAME).dfu

-include $(DEPS)

$(BUILD):
	mkdir -p $(sort $(dir $(OBJS)))

.depsdir: 
	mkdir -p deps
	touch .depsdir

$(BUILD)/%.o : %.c .depsdir
	$(CC) $(CFLAGS) -c -o $@ $< -MMD -MF deps/$(*F).d

$(BUILD)/%.o : %.s .depsdir
	$(AS) $(ASFLAGS) -c -o $@ $<

%.dfu: %.elf
	$(OBJCOPY) -O binary $< $@
#	dfu-suffix -v 0x0483 -p 0x0000 -d 0x0000 -S 0x011A -a $@
	dfu-suffix -v 0x0483 -a $@

$(PROJ_NAME).elf: $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@ -L$(LDSCRIPT_INC) -T$(LDSCRIPT)
	$(OBJCOPY) -O ihex $(PROJ_NAME).elf $(PROJ_NAME).hex
	$(OBJDUMP) -St $(PROJ_NAME).elf >$(PROJ_NAME).lst
	$(SIZE) $(PROJ_NAME).elf

program: all
#	-openocd -f board/st_nucleo_f0.cfg -c "init" -c "reset init" -c "halt" -c "flash write_image erase $(PROJ_NAME).elf" -c "reset run" -c shutdown
	-openocd -f board/st_nucleo_f3.cfg -c "init" -c "reset init" -c "halt" -c "flash write_image erase $(PROJ_NAME).elf" -c "reset run" -c shutdown

dfu: $(PROJ_NAME).dfu
	dfu-util -a 0 --dfuse-address 0x08000000:leave -D $(PROJ_NAME).dfu

debug: program
	$(GDB) --tui -x gdb/gdb_cmds $(PROJ_NAME).elf

ddddebug: program
	ddd --gdb --debugger "$(GDB) -x gdb/gdb_cmds" $(PROJ_NAME).elf

$(BUILD)/version.c: make_version $(SRCS)
	./make_version > $@

make_version: make_version.c
	cc -o $@ $^

clean:
	rm -r $(BUILD)
	find ./ -name '*~' | xargs rm -f
	find ./ -name '*.o' | xargs rm -f
	rm -f deps/*.d
	rm -f .depsdir
	rm -f $(PROJ_NAME).elf
	rm -f $(PROJ_NAME).hex
	rm -f $(PROJ_NAME).bin
	rm -f $(PROJ_NAME).map
	rm -f $(PROJ_NAME).lst
	rm -f $(PROJ_NAME).dfu
	rm -f openocd.log
	rm -f make_version
	-rmdir deps
