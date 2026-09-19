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

# make perf 要自己去编 AM 那边的 benchmark, 需要一个交叉编译器前缀
CROSS_COMPILE ?= riscv64-linux-gnu-

# ------------------------------------------------------------------------------------------------------
# ⭐ 波形(make trace)相关
#    WAVE_FILE  : 输出文件名(vcd)
#    WAVE_START : 从第几个 CPU 周期开始 dump
#    WAVE_END   : 到第几个 CPU 周期为止; 0 = 不限制
#    这个 SoC 顶层信号非常多, 一个跑几十万拍的程序全 dump 出来是 GB 级的 vcd,
#    gtkwave 根本打不开, 所以默认只留前 20000 拍.
#    WAVE_HALF_PERIOD: 半个 CPU 周期占几个时间单位. verilator 5.008 写出来的 vcd
#    头固定是 $timescale 1ps, 所以默认 500 -> 波形上 CPU 周期 = 1000ps,
#    正好和 apb_delayer.v 里的 CPU_PERIOD 对上.
WAVE_FILE  ?= wave.vcd
WAVE_START ?= 0
WAVE_END   ?= 20000
WAVE_HALF_PERIOD ?= 500

# ⭐ 从 npc/ 目录里直接敲 make trace 时, 没有 AM 那边传过来的 IMAGE,
#    给一个默认的、会自己 ebreak 结束的程序(rt-thread 那种 shell 不会退出).
#    用 ?= 所以 AM 那边定义了 IMAGE 时不受影响.
IMAGE ?= ../am-kernels/kernels/hello/build/hello-riscv32e-ysyxsoc

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
# ------------------------------------------------------------------------------------------------------
# 1. --binary -j 0 -Wall
binary:
	$(VERILATOR) $(BINARY_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(SOURCES)

# 2. 波形: --cc --exe --build -Wall --trace  ->  跑仿真产生 WAVE_FILE  ->  gtkwave 打开
#    ⭐ 必须先 clean_obj: --trace 会改 verilator 生成的文件, 而生成的 .o 不依赖编译选项,
#       不清就会拿 fasts 那套"没有 trace 代码"的目标文件去链接 -> 波形永远是空的.
#    ⭐ 这里直接用 ./obj_dir/Vtop, 不用 $(NPC_EXE): NPC_HOME 是 AM 那边才有的变量,
#       在 npc/ 目录里单独 make 时它是空的.

ifeq ($(origin AM_SRCS), undefined)
trace: clean_obj
	@echo "================================= TRACE (NPC) ====================================="
	@echo "[TRACE] IMAGE = $(IMAGE)"
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) $(WAVE_GEN_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) \
	-CFLAGS "-DWAVE_TRACE=1 -I./include -I./include/sub" \
	--LDFLAGS "-lcapstone -lreadline -lSDL2"
	WAVE_FILE=$(WAVE_FILE) WAVE_START=$(WAVE_START) WAVE_END=$(WAVE_END) WAVE_HALF_PERIOD=$(WAVE_HALF_PERIOD) \
	$(OBJ_DIR)/Vtop $(ARGS)
	$(WAVE_GEN) $(WAVE_FILE)
endif

# 3. --cc --exe --build -j 0 -Wall
fasts:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) $(INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"

# ======================================================================================================
# ⭐ make perf : 复现"NPC性能评估结果"表里一行数据
#
#   用法就是  git checkout <commit> && make perf
#   它会做三件事, 保证和 commit 一一对应、可复现:
#     1) 从源码重新编 benchmark —— 不用仓库里现成的 .bin, 免得那个 .bin 不是这个 commit 编的
#     2) clean_obj 后全量重编 NPC —— verilator 生成的 .o 不依赖编译选项, 不清会复用旧目标文件
#     3) 跑一遍仿真, 把 周期数/指令数/IPC 和所有性能计数器 打成一行 TSV
# ======================================================================================================
PERF_BENCH    ?= ../am-kernels/benchmarks/microbench
PERF_MAINARGS ?= test
PERF_NAME     ?= $(notdir $(PERF_BENCH))
PERF_IMAGE    ?= $(PERF_BENCH)/build/$(PERF_NAME)-riscv32e-ysyxsoc
PERF_DESC     ?= $(PERF_NAME)(mainargs=$(if $(PERF_MAINARGS),$(PERF_MAINARGS),空))

ifeq ($(origin AM_SRCS), undefined)
perf: clean_obj
	@echo "==================== NPC PERF ===================="
	$(MAKE) -C $(PERF_BENCH) ARCH=riscv32e-ysyxsoc CROSS_COMPILE=$(CROSS_COMPILE) \
		mainargs=$(PERF_MAINARGS) insert-arg
	$(MAKE) fasts -B
	./obj_dir/Vtop $(PERF_IMAGE).bin -b > $(OBJ_DIR)/perf.log 2>&1 || true
	@python3 scripts/perf-report.py $(OBJ_DIR)/perf.log \
		"$$(git -C .. rev-parse --short HEAD)$$(test -n "$$(git -C .. status --porcelain -uno)" && echo '+dirty')" \
		"$(PERF_DESC)"
endif

npc-gdb:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) $(GDB_INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"


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

clean_obj:
	rm -rf $(OBJ_DIR)

.PHONY: all binary trace perf fast clean run top clean_obj

# make fasts for getting Vtop
# compile guest program & AM, nemu for difftest...  run 

# ⭐: find ./vsrc -type f \( -name "*.v" -o -name "*.sv" \) -print