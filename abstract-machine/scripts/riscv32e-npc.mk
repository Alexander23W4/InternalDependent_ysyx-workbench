include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # 影响 .c->.o
LDFLAGS       += -melf32lriscv                    # 影响 .o->.elf    32-bit Little Endian RISC-V ELF

AM_SRCS += riscv/npc/libgcc/div.S \
           riscv/npc/libgcc/muldi3.S \
           riscv/npc/libgcc/multi3.c \
           riscv/npc/libgcc/ashldi3.c \
           riscv/npc/libgcc/unused.c

# AM_SRCS
#    │
#    ├── div.S
#    │     软件除法
#    │
#    ├── muldi3.S
#    │     宽整数软件乘法
#    │
#    ├── multi3.c
#    │     更宽整数乘法辅助
#    │
#    ├── ashldi3.c
#    │     宽整数左移
#    │
#    └── unused.c
#          GCC/runtime 符号占位或辅助