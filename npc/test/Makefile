# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

# riscv32-nemu-interpreter-so

V_SRC=./test_v/top.v
CPP_SRC = $(wildcard ./test_c/*.c ./test_c/difftest/*.c)
TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir
EXE=$(OBJ_DIR)/V$(TOP_MODULE)
ALL_SOURCES=$(shell find ./test_v -name "*.v")
SOURCES=./test_v/dbg_register.v ./test_v/decode.v

INC_SOURCES=-CFLAGS "-I./test_c -I./test_c/difftest"

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


# difftest 
ifneq ($(DIFF_TEST),)
DIFF_REF_SO=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so
endif


# SRC_BASE=$(notdir $(basename $(V_SRC)))

# # write something into file, should use echo
# $(CONFIG_FILE):
# 	@echo "#define __VFILE \"$(SRC_BASE)\"" > $(CONFIG_FILE)


$(LOG_FILE):
	touch $(LOG_FILE)

# run:
# 	@echo "RUN SIMULATION:"
# 	$(EXE) $(ARGV)



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
