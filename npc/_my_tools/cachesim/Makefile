
CC     ?= gcc
CFLAGS ?= -O2 -Wall -Wextra

# 两个旋钮: 块大小(字节) / 块数
CACHE_LINE_BYTES ?= 4
CACHE_LINE_AMT   ?= 16

CPPFLAGS += -DCACHE_LINE_BYTES=$(CACHE_LINE_BYTES) -DCACHE_LINE_AMT=$(CACHE_LINE_AMT)

TARGET = cachesim
SRC    = dm_cachesim.c

# 默认目标: 编好就顺手跑一遍
run: $(TARGET)
	./$(TARGET)

build: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(TARGET)

.PHONY: run build clean
