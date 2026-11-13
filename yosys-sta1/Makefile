# PROJ_PATH = $(shell pwd)
# SHELL := /bin/bash

# O ?= $(PROJ_PATH)/result
# DESIGN ?= ysyx_26040135
# SDC_FILE ?= $(PROJ_PATH)/scripts/default.sdc
# RTL_FILES ?= $(shell find $(PROJ_PATH)/example -type f \( -name "*.v" -o -name "*.sv" \) | sort)
# export CLK_FREQ_MHZ ?= 500
# export CLK_PORT_NAME ?= clock
# PDK ?= icsprout55

# RESULT_DIR = $(O)/$(DESIGN)-$(CLK_FREQ_MHZ)MHz
# SCRIPT_DIR = $(PROJ_PATH)/scripts
# NETLIST_SYN_V   = $(RESULT_DIR)/$(DESIGN).netlist.v
# NETLIST_SANITIZED_V = $(RESULT_DIR)/$(DESIGN).netlist.clean.v
# TIMING_RPT = $(RESULT_DIR)/$(DESIGN).rpt

# init:
# 	bash -c "$$(wget -O - https://ysyx.oscc.cc/slides/resources/scripts/init-yosys-sta.sh)"
# 	mkdir -p pdk
# 	cd pdk && git clone --depth 1 https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts.git || true
# 	cd pdk && git clone --depth 1 https://github.com/RTimothyEdwards/open_pdks.git || true
# 	cd pdk && git clone --depth 1 https://github.com/efabless/skywater-pdk.git || true
# 	cd pdk && git clone --depth 1 https://github.com/eda-org/nangate45.git nangate45 || true

# syn: $(NETLIST_SYN_V)
# $(NETLIST_SYN_V): $(RTL_FILES) $(SCRIPT_DIR)/yosys.tcl
# 	mkdir -p $(@D)
# 	echo tcl $(SCRIPT_DIR)/yosys.tcl $(DESIGN) $(PDK) \"$(RTL_FILES)\" $@ | $(YOSYS) -g -l $(@D)/yosys.log -s -

# sanitized: $(NETLIST_SANITIZED_V)
# $(NETLIST_SANITIZED_V): $(NETLIST_SYN_V) $(SCRIPT_DIR)/sanitize_netlist.py
# 	mkdir -p $(@D)
# 	python3 $(SCRIPT_DIR)/sanitize_netlist.py $(NETLIST_SYN_V) $@

# sta: $(TIMING_RPT)
# $(TIMING_RPT): $(SCRIPT_DIR)/sta.tcl $(SDC_FILE) $(NETLIST_SANITIZED_V)
# 	set -o pipefail && ./bin/iEDA -script $^ $(DESIGN) $(PDK) 2>&1 | tee $(RESULT_DIR)/sta.log

# clean:
# 	-rm -rf result/

# .PHONY: init syn sta sanitized clean




PROJ_PATH = $(shell pwd)
SHELL := /bin/bash

# 必须用 oss-cad-suite 的 yosys(>=0.48); 系统自带 0.9 不支持 dfflibmap -dont_use / clockgate
YOSYS ?= $(shell if [ -x /home/wang/oss-cad-suite/bin/yosys ]; then echo /home/wang/oss-cad-suite/bin/yosys; else command -v yosys; fi)

O ?= $(PROJ_PATH)/result
DESIGN ?= ysyx_26040135
SDC_FILE ?= $(PROJ_PATH)/scripts/default.sdc
RTL_FILES ?= $(shell find $(PROJ_PATH)/example -type f \( -name "*.v" -o -name "*.sv" \) | sort)
export CLK_FREQ_MHZ ?= 500
export CLK_PORT_NAME ?= clock
PDK ?= nangate45

RESULT_DIR = $(O)/$(DESIGN)-$(CLK_FREQ_MHZ)MHz
SCRIPT_DIR = $(PROJ_PATH)/scripts
NETLIST_SYN_V   = $(RESULT_DIR)/$(DESIGN).netlist.v
TIMING_RPT = $(RESULT_DIR)/$(DESIGN).rpt

init:
	bash -c "$$(wget -O - https://ysyx.oscc.cc/slides/resources/scripts/init-yosys-sta.sh)"
	mkdir -p pdk
	[ -d pdk/icsprout55 ] || (cd pdk && git clone -b ysyx --depth 1 git@github.com:openecos-projects/icsprout55-pdk.git icsprout55)

syn: $(NETLIST_SYN_V)
$(NETLIST_SYN_V): $(RTL_FILES) $(SCRIPT_DIR)/yosys.tcl
	mkdir -p $(@D)
	echo tcl $(SCRIPT_DIR)/yosys.tcl $(DESIGN) $(PDK) \"$(RTL_FILES)\" $@ | $(YOSYS) -g -l $(@D)/yosys.log -s -

sta: $(TIMING_RPT)
$(TIMING_RPT): $(SCRIPT_DIR)/sta.tcl $(SDC_FILE) $(NETLIST_SYN_V)
	set -o pipefail && ./bin/iEDA -script $^ $(DESIGN) $(PDK) 2>&1 | tee $(RESULT_DIR)/sta.log

clean:
	-rm -rf result/

.PHONY: init syn sta clean
