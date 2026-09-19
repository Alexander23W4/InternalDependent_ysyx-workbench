AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trap.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/gpu.c \
           riscv/ysyxsoc/uart.c 

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker-ysyxsoc.ld   # 使用ysyxsoc专属 linker.ld

# ⭐$$ 这几个符号给 linker-ysyxsoc.ld 用:
#   _pmem_start : 程序镜像起始地址 = MROM 基址, 必须与 NPC 复位后的 PC 一致
#   _sram_start : 可写区(SRAM)基址, 栈和堆摆在这里
#   _entry_offset: 入口相对镜像起点的偏移, 为 0 时 _start 正好落在 MROM 首地址
LDFLAGS   += --defsym=_pmem_start=0x30000000 --defsym=_sram_start=0x0f000000 --defsym=_entry_offset=0x0
# ⭐ 入口必须是 _fsbl(FSBL, 第一级引导), 不能是 _start。
#    原因有两层:
#      1) 复位 PC 硬编码在 0x3000_0000, 必须由 .fsbl 段里的 _fsbl 占在那里
#      2) --gc-sections 是拿"entry 符号"当可达性分析的根的。命令行 -e 的优先级
#         高于链接脚本里的 ENTRY(), 如果这里写 -e _start, 根就变成 _start, 没被任何
#         人引用的 _fsbl/fsbl 段会被当成垃圾直接删掉 -> elf 里根本没有 .fsbl
LDFLAGS   += --gc-sections -e _fsbl              # cpu 入口是 _fsbl, 而非 _start/main

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
