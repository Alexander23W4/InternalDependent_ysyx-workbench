# --- Default Configuration ---
# You can override these from the command line: make V_SRC=my_rtl.v

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall


V_SRC=./RTL/SCMs/BarrelShifter.v
CPP_SRC=./Tests/T_Decoder.cpp
TOP_MODULE=$(basename $(notdir $(V_SRC)))
OBJ_DIR=./obj_dir
EXE=$(OBJ_DIR)/V$(TOP_MODULE)
ALL_SOURCES=$(shell find ./RTL -name "*.v")
INCLUDE_SOURCE=./RTL/CCMs/Func/Mux.v

# Verilator basic setup
# for WARNING_IGNORE_FLAG : -Wno-xxx
VERILATOR=verilator
WAVE_GEN=gtkwave
CPP_FLAGS=--cc --exe --build
BINARY_FLAGS=--binary
DEFAULT_FLAGS=-Wall -j 
WARNING_IGNORE_FLAG=
STATIC_CHECK_FLAG=--lint-only
WAVE_GEN_FLAG=--trace
TOP_FLAG=--top-module

.PHONY: all binary trace fast clean run top

run: 
	@echo "RUN SIMULATION:"
	$(EXE)

runtrace:
	$(EXE)
	$(WAVE_GEN) $(TOP_MODULE).vcd


# 1. --binary -j 0 -Wall
binary:
	$(VERILATOR) $(BINARY_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) 
# 2. --cc --exe --build -Wall --trace
trace:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(WAVE_GEN_FLAG) $(V_SRC) $(CPP_SRC)

# 3. --cc --exe --build -j 0 -Wall
fast:
	$(VERILATOR) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(V_SRC) $(CPP_SRC)

# 4. lint only:
static:
	@$(VERILATOR) -cc $(DEFAULT_FLAGS) $(STATIC_CHECK_FLAG) $(V_SRC) $(INCLUDE_SOURCE)

lintall:
	@$(VERILATOR) $(STATIC_CHECK_FLAG) $(ALL_SOURCES)

# 5. make top:
top:
	make clean
	$(VERILATOR) $(TOP_FLAG) $(TOP_MODULE) $(V_SRC) $(ALL_SOURCES) $(CPP_FLAGS) $(DEFAULT_FLAGS) $(CPP_SRC) 

clean:
	rm -rf $(OBJ_DIR) 
