AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)


-include $(NPC_HOME)/Makefile

# ⭐: 我为npc加的编译配置主要在此
# update 仿真 npc -> C++
update-npc:
	@echo "===================================== Update NPC ====================================="
	$(MAKE) -C $(NPC_HOME) clean_npc 
	$(MAKE) -C $(NPC_HOME) fasts -B
	cp $(IMAGE).elf $(IMAGE).txt $(NPC_HOME)/build_rsrc/
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
