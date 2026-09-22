
CC     ?= gcc
CFLAGS ?= -O2 -Wall -Wextra

BUILD_DIR = ./build


CACHE_LINE_BYTES_SEQ ?= 4 8 16 32 64 128
CACHE_LINE_AMT_SEQ   ?= 4 8 16 32 64 128

# 单个配置 
CACHE_LINE_BYTES ?= 128
CACHE_LINE_AMT   ?= 16

CPPFLAGS += -DCACHE_LINE_BYTES=$(CACHE_LINE_BYTES) -DCACHE_LINE_AMT=$(CACHE_LINE_AMT)

TARGET = $(BUILD_DIR)/dm_cachesim
SRC    = dm_cachesim.c

# 结果文件路径: 直接从 dm_cachesim.c 的 DM_RESULT_FILE 里抓出来, 免得两处各写一份对不上
RESULT_FILE = $(shell sed -n 's/.*define[[:space:]]*DM_RESULT_FILE[[:space:]]*"\(.*\)".*/\1/p' $(SRC))



# 每次 make run / make run-one 都先把结果文件清空(程序只负责往里追加), 所以每次都是一张全新的表
run:
	@rm -f "$(RESULT_FILE)"
	@echo "扫 CACHE_LINE_AMT=[$(CACHE_LINE_AMT_SEQ)]  x  CACHE_LINE_BYTES=[$(CACHE_LINE_BYTES_SEQ)]"
	@for n in $(CACHE_LINE_AMT_SEQ); do \
	  for b in $(CACHE_LINE_BYTES_SEQ); do \
	    echo "======== CACHE_LINE_AMT=$$n  CACHE_LINE_BYTES=$$b ========"; \
	    $(CC) $(CFLAGS) -DCACHE_LINE_BYTES=$$b -DCACHE_LINE_AMT=$$n $(SRC) -o $(TARGET) \
	      && ./$(TARGET) \
	      || echo "!! 组合 CACHE_LINE_AMT=$$n CACHE_LINE_BYTES=$$b 失败(已跳过)"; \
	  done; \
	done



build:
	$(CC) $(CFLAGS) $(CPPFLAGS) $(SRC) -o $(TARGET)

run-one: build
	@rm -f "$(RESULT_FILE)"
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run build run-one clean $(TARGET)
