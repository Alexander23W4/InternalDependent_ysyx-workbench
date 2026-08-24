.PHONY: all run gdb clean latest $(ALL)
# make ARCH=minirv-npc ALL=bit run
# make ARCH=minirv-npc run     (barch)

# make ARCH=riscv32e-npc ALL=bit run
# make ARCH=riscv32e-npc run

# 这个就是组织起来一个make命令发给am的makefile, 给 AM-Makefile 递送 SRC

# 生成的 Makefile.dummy 内容：
# make
# NAME = dummy
# SRCS = tests/dummy.c
# include ${AM_HOME}/Makefile

# run 
#   → all 
#     → $(ALL) 
#       → 对每个测试: % → Makefile.%

# Makefile.dummy
#   → 生成 Makefile.dummy 文件
#   → make -f Makefile.dummy ARCH=minirv-npc run
#     → 这个子 make 会：
#       1. 使用 Makefile.dummy（定义了 NAME 和 SRCS）
#       2. 包含 AM_HOME/Makefile
#       3. AM Makefile 看到 SRCS = tests/dummy.c
#       4. 编译 tests/dummy.c
#       5. 生成 build/dummy-minirv-npc.elf 和 .bin
#       6. 运行（如果是 run 目标）
#   → 记录结果（PASS/FAIL）
#   → 删除 Makefile.dummy

RESULT = .result
$(shell > $(RESULT))

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

ALL = $(basename $(notdir $(shell find tests/. -name "*.c")))

# dependency: Makefile.*
all: $(addprefix Makefile., $(ALL))
	@echo "test list [$(words $(ALL)) item(s)]:" $(ALL)

$(ALL): %: Makefile.%

# *** Makefile.* 
# %@(Make.dummy)  %*(dummy)  %^(tests/dummy.c)  %<(...)

# Make.dummy:
# NAME = dummy
# SRCS = tests/dummy.c
# include /home/wang/xxx/abstract-machine/Makefile

# make -s -f Make.dummy ARCH=$(ARCH) $(MAKECMDGOALS)  (make -s -f Make.dummy ARCH=minirv-npc run)

# rm -f Makefile.dummy
Makefile.%: tests/%.c latest
	@/bin/echo -e "NAME = $*\nSRCS = $<\ninclude $${AM_HOME}/Makefile" > $@
	@if make -f $@ ARCH=$(ARCH) $(MAKECMDGOALS); then \
		printf "[%14s] $(COLOR_GREEN)PASS$(COLOR_NONE)\n" $* >> $(RESULT); \
	else \
		printf "[%14s] $(COLOR_RED)***FAIL***$(COLOR_NONE)\n" $* >> $(RESULT); \
	fi
	-@rm -f Makefile.$*


run: all
	@cat $(RESULT)
	@rm $(RESULT)

	
gdb: all

clean:
	rm -rf Makefile.* build/

latest:


