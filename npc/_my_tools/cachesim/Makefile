
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



run:
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
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run build run-one clean $(TARGET)
