
# pipeline处理器为了兼容difftest, 固定设置difftest_top.v为顶层

V_SRC   = ./vsrc/difftest_top.v
SOC_SRC = ../ysyxSoC/build/ysyxSoCFull.v

V_SRC_M = $(SOC_SRC)

SOURCES = $(filter-out ./vsrc/dpi-f.sv ./vsrc/difftest_top.v, \
            $(shell find ./vsrc -type f \( -name "*.v" -o -name "*.sv" \) | sort))

SOURCES_M = $(filter-out ./vsrc_m/dpi-f.sv, \
              $(shell find ./vsrc_m -type f \( -name "*.v" -o -name "*.sv" \) | sort))

SOURCES += $(shell find ../ysyxSoC/perip -name "*.v" -o -name "*.sv") 
SOURCES_M += $(shell find ../ysyxSoC/perip -name "*.v" -o -name "*.sv") 

ALL_SOURCES := $(shell find ./vsrc -type f \( -name "*.sv" -o -name "*.v" \) -print)


# 这里是用find递归搜索 ./csrc 下面所有的.c和.cpp文件
CPP_SRC = $(shell find ./csrc -type f \( -name "*.c" -o -name "*.cpp" \) -print)
CPP_SRC_M = $(shell find ./csrc_m -type f \( -name "*.c" -o -name "*.cpp" \) -print)


TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir

EXE=$(OBJ_DIR)/V$(TOP_MODULE)


# 需要的头文件路径写在这里
# 注意: -CFLAGS 的内容不能再拼进另一个 -CFLAGS 里(会变成 g++ 的非法参数),
#       所以把"头文件目录"和"-CFLAGS"分开, trace 目标只拼目录
INC_DIRS   =-I./include -I./include/sub
INC_DIRS_M =-I./include_m -I./include_m/sub

INC_SOURCES=-CFLAGS "$(INC_DIRS)"
GDB_INC_SOURCES=-CFLAGS "-g $(INC_DIRS)"
INC_SOURCES_M=-CFLAGS "$(INC_DIRS_M)"
GDB_INC_SOURCES_M=-CFLAGS "-g $(INC_DIRS_M)"

PERIP_SRC = -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl


# ------------------------------------------------------------------------------------------------------
# Verilator basic setup
# for WARNING_IGNORE_FLAG : -Wno-xxx
VERILATOR=verilator
WAVE_GEN=gtkwave
CPP_FLAGS=--cc --exe --build
DEFAULT_FLAGS=-Wall -j --timescale "1ns/1ns" --no-timing --autoflush
WARNING_IGNORE_FLAG=-Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-VARHIDDEN -Wno-fatal -Wno-TIMESCALEMOD -Wno-MULTITOP
STATIC_CHECK_FLAG=--lint-only
WAVE_GEN_FLAG=--trace
TOP_FLAG=--top-module
TOP_PREFIX=--prefix Vtop
TOP_SEL=$(TOP_FLAG) $(TOP_MODULE)

# Include search paths for verilator (vsrc and perip RTL includes)
INCLUDE_PATHS=-I./vsrc -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl

# ------------------------------------------------------------------------------------------------------

ICACHE_LINE_BYTES ?= 16
ICACHE_LINE_AMT   ?= 4

# 传进verilator
DEFAULT_FLAGS += -DICACHE_LINE_BYTES=$(ICACHE_LINE_BYTES) -DICACHE_LINE_AMT=$(ICACHE_LINE_AMT)


# ------------------------------------------------------------------------------------------------------

DIFF_TEST_ENABLE=0
TRACE_ENABLE=0

# ------------------------------------------------------------------------------------------------------


NPC_EXE=$(NPC_HOME)/obj_dir/Vtop
ARGS=$(IMAGE).bin

# make perf 要自己去编 AM 那边的 benchmark, 需要一个交叉编译器前缀
CROSS_COMPILE ?= riscv64-linux-gnu-

# ------------------------------------------------------------------------------------------------------
# ⭐ 波形(make trace)相关

WAVE_FILE  ?= wave.vcd
WAVE_START ?= 0
WAVE_END   ?= 3000
WAVE_HALF_PERIOD ?= 1

GTKW_FILE  ?= wave.gtkw
RC_FILE=./trace.rc

IMAGE ?= ../am-kernels/kernels/hello/build/hello-riscv32e-ysyxsoc

# ------------------------------------------------------------------------------------------------------

# Features
# 选择用多周期cpu还是架构cpu
USE_M=0

# config macro generation
-include $(NPC_HOME)/scripts/config.mk 


DIFF_DEFINE = -DDIFFTEST=$(DIFF_TEST_ENABLE)

# other args dilivery
ARGS+=-b

ifeq ($(USE_M),1)
MODE_VSRC     = $(V_SRC_M)
MODE_SOURCES  = $(SOURCES_M)
MODE_CPP_SRC  = $(CPP_SRC_M)
MODE_INC      = $(INC_SOURCES_M)
MODE_INC_DIRS = $(INC_DIRS_M)
MODE_GDB_INC  = $(GDB_INC_SOURCES_M)
MODE_VSRC_DIR = ./vsrc_m
TOP_MODULE   := ysyxSoCFull
else
MODE_VSRC     = $(V_SRC) $(SOC_SRC)
MODE_SOURCES  = $(SOURCES)
MODE_CPP_SRC  = $(CPP_SRC)
MODE_INC      = $(INC_SOURCES)
MODE_INC_DIRS = $(INC_DIRS)
MODE_GDB_INC  = $(GDB_INC_SOURCES)
MODE_VSRC_DIR = ./vsrc
TOP_MODULE   := difftest_top
endif

# ------------------------------------------------------------------------------------------------------

ifeq ($(origin AM_SRCS), undefined)
trace: clean_obj
	@echo "================================= TRACE (NPC) ====================================="
	@echo "[TRACE] IMAGE = $(IMAGE)"
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) $(WAVE_GEN_FLAG) \
	$(PERIP_SRC) $(MODE_VSRC) $(MODE_SOURCES) $(MODE_CPP_SRC) \
	-CFLAGS "-DWAVE_TRACE=1 $(DIFF_DEFINE) $(MODE_INC_DIRS)" \
	--LDFLAGS "-lcapstone -lreadline -lSDL2"
	WAVE_FILE=$(WAVE_FILE) WAVE_START=$(WAVE_START) WAVE_END=$(WAVE_END) WAVE_HALF_PERIOD=$(WAVE_HALF_PERIOD) \
	$(OBJ_DIR)/Vtop $(ARGS)
	$(WAVE_GEN) $(WAVE_FILE) $(if $(wildcard $(GTKW_FILE)),$(GTKW_FILE),) $(RC_FILE) -7   
endif


fasts:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(MODE_VSRC) $(MODE_SOURCES) $(MODE_CPP_SRC) $(MODE_INC) -CFLAGS "$(DIFF_DEFINE)" \
	--LDFLAGS "-lcapstone -lreadline -lSDL2"

npc-gdb:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(MODE_VSRC) $(MODE_SOURCES) $(MODE_CPP_SRC) $(MODE_GDB_INC) -CFLAGS "$(DIFF_DEFINE)" \
	--LDFLAGS "-lcapstone -lreadline -lSDL2"

static:
	$(VERILATOR) $(STATIC_CHECK_FLAG) $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) \
		$(INCLUDE_PATHS) \
		$(filter-out $(MODE_VSRC_DIR)/dpi-f.sv,$(MODE_SOURCES)) \
		$(MODE_VSRC)

lintall:
	@$(VERILATOR) $(STATIC_CHECK_FLAG) $(ALL_SOURCES) -Wno-MULTITOP


clean_npc:
	rm -rf $(OBJ_DIR) 
	rm -rf $(NPC_HOME)/build_rsrc/*

clean_obj:
	rm -rf $(OBJ_DIR)


# perf, 仅用于多周期cpu
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

.PHONY: all binary trace perf fast clean run top clean_obj


# ⭐: find ./vsrc -type f \( -name "*.v" -o -name "*.sv" \) -print







