deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	src/isa/riscv32/Kconfig \
	/home/wang/My_ysyx-workbench/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
