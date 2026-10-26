AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trap.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/gpu.c \
           riscv/ysyxsoc/uart.c \
		   riscv/ysyxsoc/timer.c

# 让编译器把 不同的数据对象 和 每个函数 放进独立的 section
CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker-ysyxsoc.ld   # 使用ysyxsoc专属 linker.ld

# ⭐$$ 这几个符号给 linker-ysyxsoc.ld 用:
#   _pmem_start : 程序镜像起始地址, 必须与 NPC 复位后的 PC 一致
#   _sram_start : 可写区(SRAM)基址, 栈和堆摆在这里
LDFLAGS   += --defsym=_pmem_start=0x30000000 --defsym=_sram_start=0x0f000000 --defsym=_entry_offset=0x0

LDFLAGS   += --gc-sections -e _fsbl              # cpu 入口

# 以下是为了传递 mainargs 给 argv, argc
MAINARGS_MAX_LEN = 64        
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)


NVBOARD_ENABLE ?= 0

# 把 ysyxSoC 接进 NVBoard 的那个仿真工程(顶层 ysyxSoCFull)
NVBOARD_SIM_HOME ?= $(AM_HOME)/../VerTest/nvbtest_soc
NVBOARD_TOP      ?= ysyxSoCFull
NVBOARD_EXE       = $(NVBOARD_SIM_HOME)/build/$(NVBOARD_TOP)

-include $(NPC_HOME)/Makefile
-include $(NVBOARD_HOME)/Makefile

# CFLAGS += -falign-loops=$(ICACHE_LINE_BYTES)

update-nvboard:
	@echo "===================================== Update NVBoard ====================================="
	$(MAKE) -C $(NVBOARD_SIM_HOME) $(if $(IMAGE),IMAGE=$(abspath $(IMAGE).bin))

# update 仿真 npc -> C++
update-npc:
	@echo "===================================== Update NPC ====================================="
	$(MAKE) -C $(NPC_HOME) clean_npc 
	$(MAKE) -C $(NPC_HOME) fasts -B
	cp $(IMAGE).txt $(NPC_HOME)/build_rsrc/
ifeq ($(DIFF_TEST_ENABLE),1)
	$(MAKE) -C $(NEMU_HOME)
endif



# 作用: 传递mainargs (传参给argv, argc)
insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"


image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S -O binary $(IMAGE).elf $(IMAGE).bin


# ⭐⭐ run: 按 NVBOARD_ENABLE 走两条路
#     两条路都是"先把仿真器更新好, 再把 AM 生成的 $(IMAGE).bin 喂给它"。
ifeq ($(NVBOARD_ENABLE),1)
run: insert-arg update-nvboard
	@echo "================================= RUN NVBOARD SIMULATION ====================================="
	$(NVBOARD_EXE) $(IMAGE).bin
else
run: insert-arg update-npc
	@echo "================================= RUN NPC SIMULATION ====================================="
	$(NPC_EXE) $(ARGS)
endif


trace: insert-arg 
	@echo "================================= RUN GTKWAVE SIMULATION ====================================="
	$(MAKE) -C $(NPC_HOME) trace IMAGE=$(abspath $(IMAGE))

GDB_SRC_DIRS = -ex "directory $(NPC_HOME)/csrc" \
               -ex "directory $(NPC_HOME)/include" \
               -ex "directory $(NPC_HOME)/obj_dir"

gdb: insert-arg
	@echo "================================= Build NPC (debug) ====================================="
	$(MAKE) -C $(NPC_HOME) clean_obj
	$(MAKE) -C $(NPC_HOME) npc-gdb
	@echo "================================= GDB ====================================="
	gdb $(GDB_SRC_DIRS) --args $(NPC_EXE) $(ARGS)


.PHONY: insert-arg trace
