CROSS_COMPILE := riscv64-linux-gnu-
# 这里没有要求生成位置无关代码    这里允许全部riscv指令扩展I、M、A、F、D、Zicsr、Zifencei   
# 不要求编译器固定绝对地址，但有地址范围限制2GB  不能生成非对齐的访存指令
# -mrelax / -mno-relax
COMMON_CFLAGS := -fno-pic -march=rv64g -mcmodel=medany -mstrict-align
CFLAGS        += $(COMMON_CFLAGS) -static
ASFLAGS       += $(COMMON_CFLAGS) -O0
LDFLAGS       += -melf64lriscv

# overwrite ARCH_H defined in $(AM_HOME)/Makefile
ARCH_H := arch/riscv.h


