include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
# -march=rv32e_zicsr	可以生成哪些指令
# -mabi=ilp32e	函数如何调用、数据如何按 ABI 传递
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # 影响 .c->.o
LDFLAGS       += -melf32lriscv                    # 影响 .o->.elf    32-bit Little Endian RISC-V ELF

AM_SRCS += riscv/ysyxsoc/libgcc/div.S \
           riscv/ysyxsoc/libgcc/muldi3.S \
           riscv/ysyxsoc/libgcc/multi3.c \
           riscv/ysyxsoc/libgcc/ashldi3.c \
           riscv/ysyxsoc/libgcc/unused.c