# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

V_FILE ?= test2.v
CPP_FILE ?= test.cpp
V_SRC = ./vercode/$(V_FILE)
CPP_FILE = ./Cppcode/$(CPP_FILE)
TOP_MODULE = $(basename $(notdir $(V_SRC)))
OBJ_DIR = obj_dir
EXE = $(OBJ_DIR)/V$(TOP_MODULE)

# Verilator basic setup
VERILATOR =verilator
CPP_FLAGS =--cc --exe --build
BINARY_FLAGS =--binary
DEFAULT_FLAGS =-Wall -j 0

.PHONY: all binary trace fast clean

# 1. --binary -j 0 -Wall
binary:
	$(VERILATOR) $(BINARY_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(CPP_SRC)

# 2. --cc --exe --build -Wall --trace
trace:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) --trace $(V_SRC) $(CPP_SRC)

# 3. --cc --exe --build -j 0 -Wall
fast:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(CPP_SRC)

clean:
	rm -rf $(OBJ_DIR) *.vcd