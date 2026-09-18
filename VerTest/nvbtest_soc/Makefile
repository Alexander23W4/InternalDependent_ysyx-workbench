# ysyxSoC + NVBoard
#
# 顶层用的是 ysyxSoC/build/ysyxSoCFull.v 里的 ysyxSoCFull,
# CPU 是 NPC 的 ysyx_26040135, 外设(UART16550/PS2/VGA/GPIO/SPI flash/PSRAM/SDRAM)
# 都在 ysyxSoC/perip 下面。源文件都不拷贝, 直接用相对路径引用。
#
#   make            # 编译
#   make run        # 跑 (默认跑 am-tests, 可以用 IMAGE=... 换)
#
# NVBOARD_HOME: NVBoard 源码目录(提供 nvboard.a / nvboard.h)。
#   独立用这个工程时不用手动设置(下面会给默认值); 从 AM 那边 make run 进来时由外面传。
NVBOARD_HOME ?= $(abspath ../../nvboard)
export NVBOARD_HOME

TOPNAME = ysyxSoCFull
NXDC_FILES = constr/top.nxdc

ROOT    = $(abspath ../..)
YSYXSOC = $(ROOT)/ysyxSoC
NPC     = $(ROOT)/npc

# 要跑的程序镜像(.bin 的完整路径)。
# ⭐ 从 AM 那边 `make ... run NVBOARD_ENABLE=1` 进来时, 外面的 update-nvboard 会把它传下来;
#    独立用这个工程时就用默认值, 或者自己指定: make run IMAGE=/path/to/xxx.bin
IMAGE ?= $(ROOT)/am-kernels/tests/am-tests/build/amtest-riscv32e-ysyxsoc.bin

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
				-O3 --x-assign fast --x-initial fast --noassert \
				--timescale "1ns/1ns" --no-timing --autoflush \
				-Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-VARHIDDEN \
				-Wno-TIMESCALEMOD -Wno-MULTITOP -Wno-fatal

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# ---- 约束文件 -> auto_bind.cpp ----
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# ---- RTL: ysyxSoCFull(顶层) + NPC CPU + ysyxSoC 的各个外设 ----
#   ⭐ dpi-f.sv 是被 vsrc/ysyx_26040135.sv 用 `include 包含进去的, 不能再单独列出来
VSRCS  = $(YSYXSOC)/build/ysyxSoCFull.v
VSRCS += $(NPC)/vsrc/ysyx_26040135.sv
VSRCS += $(NPC)/vsrc/axi/axi4.sv \
         $(NPC)/vsrc/axi/axi_ifu.sv \
         $(NPC)/vsrc/axi/axi_lsu.sv \
         $(NPC)/vsrc/axi/axi4_xbar.sv
VSRCS += $(shell find $(NPC)/vsrc/compo -type f -name "*.v")
VSRCS += $(shell find $(YSYXSOC)/perip -type f \( -name "*.v" -o -name "*.sv" \))

# ---- C++: 自己的仿真主程序 + auto_bind (+ NVBoard 的库) ----
CSRCS  = $(abspath ./csrc/main.cpp)
CSRCS += $(abspath ./csrc/mem.cpp)
CSRCS += $(SRC_AUTO_BIND)

# NVBoard 的编译规则 / 链接参数
include $(NVBOARD_HOME)/scripts/nvboard.mk

# verilator 的 include 路径:
#   $(INC_PATH) 里已经有 NVBOARD_USR_INC(nvboard.h 在 nvboard/usr/include)
#   -I$(NPC)                              -> ysyx_26040135.sv 里的 `include "vsrc/dpi-f.sv"
#   -I.../uart16550/rtl, .../spi/rtl      -> 两个外设自己的 `include "xxx_defines.v"
INCFLAGS = $(addprefix -I, $(INC_PATH)) \
           -I$(NPC) \
           -I$(YSYXSOC)/perip/uart16550/rtl \
           -I$(YSYXSOC)/perip/spi/rtl
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) \
		$(INCFLAGS) \
		$(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@test -f "$(IMAGE)" || { \
		echo "找不到程序镜像: $(IMAGE)"; \
		echo "先构建一个, 例如:"; \
		echo "  cd $(ROOT)/am-kernels/tests/am-tests && make ARCH=riscv32e-ysyxsoc mainargs=k insert-arg"; \
		exit 1; }
	$^ $(IMAGE)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
