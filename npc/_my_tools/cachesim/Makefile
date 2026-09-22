
CC     ?= gcc
CFLAGS ?= -O2 -Wall -Wextra

BUILD_DIR = ./build

# ==========================================================================================
# 要扫的两个序列(空格分隔, 每一项都必须是 2 的幂)
#   make run 会把 "块大小(字节) x 块数" 的**所有组合**一次性跑完
#   想换要扫的值就改下面两行, 或者命令行覆盖:
#       make run CACHE_LINE_BYTES_SEQ="4 16 64" CACHE_LINE_AMT_SEQ="8 32 128"
# ==========================================================================================
CACHE_LINE_BYTES_SEQ ?= 4 8 16 32 64 128
CACHE_LINE_AMT_SEQ   ?= 4 8 16 32 64 128

# 单个配置(只想编/只跑一个时用: make run-one CACHE_LINE_BYTES=16 CACHE_LINE_AMT=32)
CACHE_LINE_BYTES ?= 128
CACHE_LINE_AMT   ?= 16

CPPFLAGS += -DCACHE_LINE_BYTES=$(CACHE_LINE_BYTES) -DCACHE_LINE_AMT=$(CACHE_LINE_AMT)

TARGET = $(BUILD_DIR)/dm_cachesim
SRC    = dm_cachesim.c

# ------------------------------------------------------------------------------------------
# 默认目标: 把两个序列的所有组合都仿真一遍
#   每换一个组合都重新编译一次(编一次只要几十毫秒), 所以不存在"拿旧二进制跑新参数"的问题;
#   某个组合失败(比如参数不是 2 的幂)只打一行提示, 不中断整个扫描。
# ------------------------------------------------------------------------------------------
run:
	@echo "扫 CACHE_LINE_BYTES=[$(CACHE_LINE_BYTES_SEQ)]  x  CACHE_LINE_AMT=[$(CACHE_LINE_AMT_SEQ)]"
	@for b in $(CACHE_LINE_BYTES_SEQ); do \
	  for n in $(CACHE_LINE_AMT_SEQ); do \
	    echo "======== CACHE_LINE_BYTES=$$b  CACHE_LINE_AMT=$$n ========"; \
	    $(CC) $(CFLAGS) -DCACHE_LINE_BYTES=$$b -DCACHE_LINE_AMT=$$n $(SRC) -o $(TARGET) \
	      && ./$(TARGET) \
	      || echo "!! 组合 CACHE_LINE_BYTES=$$b CACHE_LINE_AMT=$$n 失败(已跳过)"; \
	  done; \
	done

# 只编一个配置
build:
	$(CC) $(CFLAGS) $(CPPFLAGS) $(SRC) -o $(TARGET)

# 只编 + 跑一个配置
run-one: build
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run build run-one clean $(TARGET)
