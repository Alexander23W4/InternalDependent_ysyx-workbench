CC     ?= gcc
CFLAGS ?= -O2 -Wall -Wextra

BUILD_DIR = ./build
TARGET    = $(BUILD_DIR)/bs
SRC       = bs.c

# 结果文件路径: 直接从 bs.c 的 BS_RESULT_FILE 里抓出来, 免得两处各写一份对不上
RESULT_FILE = $(shell sed -n 's/.*define[[:space:]]*BS_RESULT_FILE[[:space:]]*"\(.*\)".*/\1/p' $(SRC))

$(TARGET): $(SRC)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

build: $(TARGET)

# 每次 run 都先把结果文件清空(程序只负责往里追加), 所以每次都是一份全新的结果
run: build
	@rm -f "$(RESULT_FILE)"
	@mkdir -p $(dir $(RESULT_FILE))
	./$(TARGET)

run-one: run

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build run run-one clean $(TARGET)
