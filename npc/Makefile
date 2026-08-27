# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

# riscv32-nemu-interpreter-so

V_SRC=./vsrc/top.v
SOURCES=./vsrc/dbg_register.v ./vsrc/decode.v
ALL_SOURCES=$(shell find ./vsrc -name "*.v")

# 这里是用find递归搜索 ./csrc 下面所有的.c和.cpp文件
CPP_SRC = $(shell find ./csrc -type f -name "*.c" -o -name "*.cpp")

TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir

EXE=$(OBJ_DIR)/V$(TOP_MODULE)



# 需要的头文件路径写在这里
INC_SOURCES=-CFLAGS "-I./csrc -I./csrc/difftest -I./csrc/trace -I./utils -I./tools"
GDB_INC_SOURCES=-CFLAGS "-g -I./csrc -I./csrc/difftest -I./csrc/trace -I./utils -I./tools -I./tools/sub"

# ------------------------------------------------------------------------------------------------------
# Verilator basic setup
# for WARNING_IGNORE_FLAG : -Wno-xxx
VERILATOR=verilator
WAVE_GEN=gtkwave
CPP_FLAGS=--cc --exe --build
BINARY_FLAGS=--binary
DEFAULT_FLAGS=-Wall -j 
WARNING_IGNORE_FLAG=-Wno-UNUSEDSIGNAL
STATIC_CHECK_FLAG=--lint-only
WAVE_GEN_FLAG=--trace
TOP_FLAG=--top-module

# ------------------------------------------------------------------------------------------------------

DIFF_TEST_ENABLE=0
TRACE_ENABLE=1

# ------------------------------------------------------------------------------------------------------

# Features
# config macro generation
-include $(NPC_HOME)/scripts/config.mk 

# difftest 
ifeq ($(DIFF_TEST_ENABLE),1)
DIFF_REF_SO=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so
ARGS+=-d $(DIFF_REF_SO)
endif

# ------------------------------------------------------------------------------------------------------

NPC_EXE=$(NPC_HOME)/obj_dir/Vtop
ARGS=$(IMAGE).bin

# ------------------------------------------------------------------------------------------------------

runtrace:
	$(EXE)
	$(WAVE_GEN) $(TOP_MODULE).vcd


# 1. --binary -j 0 -Wall
binary:
	$(VERILATOR) $(BINARY_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(SOURCES)
# 2. --cc --exe --build -Wall --trace
trace:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(WAVE_GEN_FLAG) $(V_SRC) $(CPP_SRC)

# 3. --cc --exe --build -j 0 -Wall
fasts:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) $(V_SRC) $(SOURCES) $(CPP_SRC) $(INC_SOURCES)

npc-gdb:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) $(V_SRC) $(SOURCES) $(CPP_SRC) $(GDB_INC_SOURCES)

fast:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(CPP_SRC) 

# 4. lint only:
static:
	@$(VERILATOR) -cc $(DEFAULT_FLAGS) $(STATIC_CHECK_FLAG) $(V_SRC) $(SOURCES)

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