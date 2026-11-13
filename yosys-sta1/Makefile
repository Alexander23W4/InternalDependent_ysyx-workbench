
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




WARNING_IGNORE_FLAG=-Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-VARHIDDEN -Wno-fatal -Wno-TIMESCALEMOD -Wno-MULTITOP
STATIC_CHECK_FLAG=--lint-only
DEFAULT_FLAGS=-Wall -j --timescale "1ns/1ns" --no-timing --autoflush

SOURCES=$(shell find ./dut ./ref -type f \( -name "*.v" -o -name "*.sv" \) | sort) \
		./formal_top.sv

TEST_NAME=pipeline_test
GTKW_FILE=./pipeline.gtkw
RC_FILE=./trace.rc     # 让波形窗口字体大 4pt + 线更粗(行高更够, 数字看得清)

run:
	$(OSS_HOME)/bin/sby -f pipeline_test.sby

# 加上--top-module之后，Verilator 只从 formal_top 往下走：只有真正被实例化到的模块才参与检查
static:
	verilator $(STATIC_CHECK_FLAG) --top-module formal_top $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) $(SOURCES)
