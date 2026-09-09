AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c \
		   riscv/ysyxsoc/gpu.c \

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0    # ⭐$$ 物理内存从 0x80000000 开始,  程序入口相对于内存起始地址的偏移是 0
LDFLAGS   += --gc-sections -e _start             # cpu 入口是 _start, 而非 main

# 以下是为了传递 mainargs 给 argv, argc
MAINARGS_MAX_LEN = 64        
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)


-include $(NPC_HOME)/Makefile

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

# 作用: 在用户环境下产生 .bin .elf .txt三个build文件
image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

# 
run: insert-arg update-npc 
	@echo "================================= RUN NPC SIMULATION ====================================="
	$(NPC_EXE) $(ARGS)

gdb: insert-arg update-npc 
	@echo "================================= Build NPC (debug) ====================================="
	$(MAKE) -C $(NPC_HOME) npc-gdb
	@echo "================================= GDB ====================================="
	gdb --args $(NPC_EXE) $(ARGS)


.PHONY: insert-arg
