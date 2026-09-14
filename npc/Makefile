# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

# riscv32-nemu-interpreter-so

# ⭐: 这里的引用文件名都要改

V_SRC=../ysyxSoC/build/ysyxSoCFull.v

AXI_SOURCES = \
	./vsrc/axi/axi4.sv \
	./vsrc/axi/axi_ifu.sv \
	./vsrc/axi/axi_lsu.sv \
	./vsrc/axi/axi4_xbar.sv

RTL_SOURCES = \
	./vsrc/ysyx_26040135.sv \
	$(shell find ./vsrc/compo -type f -name "*.v")

# ⭐ dpi-f.sv 是被 vsrc/ysyx_26040135.sv 用 `include "vsrc/dpi-f.sv" 包含进 CPU 模块内部的
#    (它要访问 ebreak/dbg_reg/_pc 等 CPU 内部信号), 所以不能再单独作为顶层源文件列出来,
#    否则 verilator 会在文件作用域再解析一遍 -> Can't find definition of variable: 'ebreak'
SOURCES = $(AXI_SOURCES) $(RTL_SOURCES)
SOURCES += $(shell find ../ysyxSoC/perip -name "*.v" -o -name "*.sv") 
# SOURCES += ../ysyxSoC/build/ysyxSoCFull.v


ALL_SOURCES := $(shell find ./vsrc -type f \( -name "*.sv" -o -name "*.v" \) -print)


# 这里是用find递归搜索 ./csrc 下面所有的.c和.cpp文件
CPP_SRC = $(shell find ./csrc -type f \( -name "*.c" -o -name "*.cpp" \) -print)

TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir

EXE=$(OBJ_DIR)/V$(TOP_MODULE)


# 需要的头文件路径写在这里
INC_SOURCES=-CFLAGS "-I./include -I./include/sub"
GDB_INC_SOURCES=-CFLAGS "-g -I./include -I./include/sub"

# ⭐ verilator 的 -I 要求目录名紧跟在 -I 后面(-I<dir>); 写成 "-I <dir>" 的话
#    verilator 会把那个目录当成源文件去读 -> Cannot find file containing module
PERIP_SRC = -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl


# ------------------------------------------------------------------------------------------------------
# Verilator basic setup
# for WARNING_IGNORE_FLAG : -Wno-xxx
VERILATOR=verilator
WAVE_GEN=gtkwave
CPP_FLAGS=--cc --exe --build
BINARY_FLAGS=--binary
DEFAULT_FLAGS=-Wall -j --timescale "1ns/1ns" --no-timing --autoflush
WARNING_IGNORE_FLAG=-Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-VARHIDDEN -Wno-fatal -Wno-TIMESCALEMOD -Wno-MULTITOP
STATIC_CHECK_FLAG=--lint-only
WAVE_GEN_FLAG=--trace
TOP_FLAG=--top-module
# ⭐ 仿真的顶层是 ysyxSoC/build/ysyxSoCFull.v 里的 ysyxSoCFull, 但 C++ 侧(csrc/include)
#    和 NPC_EXE 都是按 Vtop 写的, 所以用 --prefix 把 verilator 生成的顶层类强制叫 Vtop
#    (生成 class Vtop + obj_dir/Vtop)
TOP_PREFIX=--prefix Vtop
# ⭐ ysyxSoCFull.v 里同时存在 ysyxSoCTop / ysyxSoCFull 等好几个"没被别人实例化"的候选顶层,
#    verilator 会误选 ysyxSoCTop(它的 io 是空 Bundle, 展开出一堆 ysyxSoCTop.xxx 端口),
#    必须显式指定 --top-module ysyxSoCFull, 才能得到 clock/reset/externalPins_* 这组顶层端口
TOP_SEL=$(TOP_FLAG) $(TOP_MODULE)

# Include search paths for verilator (vsrc and perip RTL includes)
INCLUDE_PATHS=-I./vsrc -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl

# ------------------------------------------------------------------------------------------------------

DIFF_TEST_ENABLE=0
TRACE_ENABLE=1

# ------------------------------------------------------------------------------------------------------


NPC_EXE=$(NPC_HOME)/obj_dir/Vtop
ARGS=$(IMAGE).bin

# ------------------------------------------------------------------------------------------------------

# Features
# config macro generation
-include $(NPC_HOME)/scripts/config.mk 

# difftest 
ifeq ($(DIFF_TEST_ENABLE),1)
DIFF_REF_SO=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so
ARGS+=-d $(DIFF_REF_SO)
endif

# other args dilivery
ARGS+=-b

# ------------------------------------------------------------------------------------------------------
runtrace:
	$(EXE)
	$(WAVE_GEN) $(TOP_MODULE).vcd


# 1. --binary -j 0 -Wall
binary:
	$(VERILATOR) $(BINARY_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(SOURCES)
# 2. --cc --exe --build -Wall --trace
trace:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WAVE_GEN_FLAG) $(V_SRC) $(CPP_SRC)

# 3. --cc --exe --build -j 0 -Wall
fasts:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) $(INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"

npc-gdb:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) $(V_SRC) $(SOURCES) $(CPP_SRC) $(GDB_INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"

fast:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(CPP_SRC) 

# 4. lint only:
static:
	$(VERILATOR) $(STATIC_CHECK_FLAG) $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) \
		$(INCLUDE_PATHS) \
		$(filter-out ./vsrc/dpi-f.sv,$(SOURCES)) \
		$(V_SRC)

lintall:
	@$(VERILATOR) $(STATIC_CHECK_FLAG) $(ALL_SOURCES) -Wno-MULTITOP

# 5. make top:
top:
	make clean
	$(VERILATOR) $(TOP_FLAG) $(TOP_MODULE) $(V_SRC) $(ALL_SOURCES) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(CPP_SRC)

clean_npc:
	rm -rf $(OBJ_DIR) 
	rm -rf $(NPC_HOME)/build_rsrc/*

.PHONY: all binary trace fast clean run top

# make fasts for getting Vtop
# compile guest program & AM, nemu for difftest...  run 

# ⭐: find ./vsrc -type f \( -name "*.v" -o -name "*.sv" \) -print