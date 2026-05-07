# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

# riscv32-nemu-interpreter-so

V_SRC=./vsrc/top.v
CPP_SRC = $(shell find ./csrc -type f -name "*.c" -o -name "*.cpp")
TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir
EXE=$(OBJ_DIR)/V$(TOP_MODULE)
ALL_SOURCES=$(shell find ./vsrc -name "*.v")
SOURCES=./vsrc/dbg_register.v ./vsrc/decode.v

INC_SOURCES=-CFLAGS "-I./csrc -I./csrc/difftest"

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
DIFF_TEST=1
LOG_FILE=./record.txt

NPC_EXE=$(NPC_HOME)/obj_dir/Vtop
ARGS=$(EXE_ARGV)

# difftest 
ifneq ($(DIFF_TEST),)
DIFF_REF_SO=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so
ARGS+=-diff $(DIFF_REF_SO)
endif




$(LOG_FILE):
	touch $(LOG_FILE)


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

# clean:
# 	rm -rf $(OBJ_DIR) 

.PHONY: all binary trace fast clean run top

# make fasts for getting Vtop
# compile guest program & AM, nemu for difftest...  run 