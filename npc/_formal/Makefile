
WARNING_IGNORE_FLAG=-Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-VARHIDDEN -Wno-fatal -Wno-TIMESCALEMOD -Wno-MULTITOP
STATIC_CHECK_FLAG=--lint-only
DEFAULT_FLAGS=-Wall -j --timescale "1ns/1ns" --no-timing --autoflush

SOURCES=$(shell find ./dut ./ref -type f \( -name "*.v" -o -name "*.sv" \) | sort) \
		./formal_top.sv

TEST_NAME=pipeline_test

run:
	$(OSS_HOME)/bin/sby -f pipeline_test.sby

# 加上--top-module之后，Verilator 只从 formal_top 往下走：只有真正被实例化到的模块才参与检查
static:
	verilator $(STATIC_CHECK_FLAG) --top-module formal_top $(DEFAULT_FLAGS) $(WARNING_IGNORE_FLAG) $(SOURCES)

trace:
	gtkwave $(TEST_NAME)/engine_0/trace.vcd



# 5aabac4d54cafff4a5b6e9d8ece2c1ac6ee9938d, 给我把从这个commit到现在, vsrc的改动(也就是我仿真用的cpu), 
# 我改了一些架构, 发生的变化都同步到_formal/dut下面, 我要对新版架构进行形式化验证, 针对变化进行改动, 
# 懂我意思吗, 就是dut本身就没有的一些东西, 就是我仿真要用到但是形式化验证用不到的, 这些不要动. 
# 改完就行, 不需要帮我跑形式化验证, 注意, 不需要帮我跑形式化验证


