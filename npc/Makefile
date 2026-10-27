
V_SRC=../ysyxSoC/build/ysyxSoCFull.v


SOURCES = \
		$(shell find ./vsrc/pipeline -type f \( -name "*.v" -o -name "*.sv" \)) \
		./vsrc/ysyx_26040135.sv \
		./vsrc/dbg_register.v \
		$(shell find ./vsrc/compo -type f \( -name "*.v" -o -name "*.sv" \)) 

SOURCES_M = \
	./vsrc_m/axi/axi4.sv \
	./vsrc_m/axi/axi_ifu.sv \
	./vsrc_m/axi/axi_lsu.sv \
	./vsrc_m/axi/axi4_xbar.sv \
	./vsrc_m/axi/axi_clint.sv \
	./vsrc_m/axi/axi_icache.sv \
	./vsrc_m/ysyx_26040135.sv \
	$(shell find ./vsrc_m/compo -type f -name "*.v")

SOURCES += $(shell find ../ysyxSoC/perip -name "*.v" -o -name "*.sv") 
SOURCES_M += $(shell find ../ysyxSoC/perip -name "*.v" -o -name "*.sv") 

ALL_SOURCES := $(shell find ./vsrc -type f \( -name "*.sv" -o -name "*.v" \) -print)


# 这里是用find递归搜索 ./csrc 下面所有的.c和.cpp文件
CPP_SRC = $(shell find ./csrc -type f \( -name "*.c" -o -name "*.cpp" \) -print)

TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir

EXE=$(OBJ_DIR)/V$(TOP_MODULE)


# 需要的头文件路径写在这里
INC_SOURCES=-CFLAGS "-I./include -I./include/sub"
GDB_INC_SOURCES=-CFLAGS "-g -I./include -I./include/sub"
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
ICACHE_LINE_AMT   ?= 16

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

IMAGE ?= ../am-kernels/kernels/hello/build/hello-riscv32e-ysyxsoc

# ------------------------------------------------------------------------------------------------------

# Features
# 选择用多周期cpu还是架构cpu
USE_M=1

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
	$(WAVE_GEN) $(WAVE_FILE) $(if $(wildcard $(GTKW_FILE)),$(GTKW_FILE),)
endif


fasts:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) $(INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"



npc-gdb:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(TOP_SEL) $(TOP_PREFIX) $(WARNING_IGNORE_FLAG) \
	$(PERIP_SRC) $(V_SRC) $(SOURCES) $(CPP_SRC) $(GDB_INC_SOURCES) --LDFLAGS "-lcapstone -lreadline -lSDL2"


static:
	$(VERILATOR) $(STATIC_CHECK_FLAG) $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) \
		$(INCLUDE_PATHS) \
		$(filter-out ./vsrc/dpi-f.sv,$(SOURCES)) \
		$(V_SRC)

lintall:
	@$(VERILATOR) $(STATIC_CHECK_FLAG) $(ALL_SOURCES) -Wno-MULTITOP


clean_npc:
	rm -rf $(OBJ_DIR) 
	rm -rf $(NPC_HOME)/build_rsrc/*

clean_obj:
	rm -rf $(OBJ_DIR)

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

