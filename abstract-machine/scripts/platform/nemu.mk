AM_SRCS := platform/nemu/trm.c \
           platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS    += -I$(AM_HOME)/am/src/platform/nemu/include
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)

# 解释insert-arg里面这句python:
# 在 NEMU 模拟器环境中，程序运行时不支持像真实系统那样通过 argc/argv 传递命令行参数。所以需要在编译后，将参数直接写入二进制文件的特定位置
# 编译时，代码中会有一个占位符字符串：

# c
# // 在 AM 的初始化代码中
# char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER;
# 这样编译出的二进制文件中，在 .data 或 .bss 段会有这 64 字节的空间，内容就是那个占位符字符串。

# 2. 运行时替换
# insert-arg.py 脚本做的事情：

# 1. 打开 $(IMAGE).bin 二进制文件
# 2. 搜索 MAINARGS_PLACEHOLDER 字符串
# 3. 用 "$(mainargs)" 的实际内容替换它
# 4. 保存修改后的二进制文件

# make run mainargs="arg1 arg2 arg3", 之后就能这样传运行时参数argv了
insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

# image-dep的定义见 总makefile的 +> image-dep: $(IMAGE).elf, image-dep在AM的makefile里面将所有相关文件编译链接打包生成$(IMAGE).elf
# 后面几句的作用是: 反汇编生成.txt  把.elf转化为可以让nemu运行的纯二进制文件$(IMAGE).bin
image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

# call nemu, run  ARGS  IMG   可以看到AM的makefile就是给nemu编译打包了一个$(IMAGE).bin拿给nemu运行就行了, 所有的编译配置都是根据nemu和对应的指令集生成的.
# make -C /home/wang/InternalDependent_ysyx-workbench/nemu ISA=riscv32 run 
# ARGS="-l /home/wang/InternalDependent_ysyx-workbench/am-kernels/tests/cpu-tests/build/nemu-log.txt" 
# IMG=/home/wang/InternalDependent_ysyx-workbench/am-kernels/tests/cpu-tests/build/add-longlong-riscv32-nemu.bin   
run: insert-arg  elf-parse
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

gdb: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

.PHONY: insert-arg
