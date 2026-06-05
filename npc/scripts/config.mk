CONFIG_FILE = $(NPC_HOME)/config.h

# 创建头文件
generate_config:
	@echo "Generating $(CONFIG_FILE)..."
	@echo "#ifndef CONFIG_H" > $(CONFIG_FILE)
	@echo "#define CONFIG_H" >> $(CONFIG_FILE)
	@echo "#define DIFF_TEST_ENABLE $(DIFF_TEST_ENABLE)" >> $(CONFIG_FILE)
	@echo "#define TRACE_ENABLE $(TRACE_ENABLE)" >> $(CONFIG_FILE)
	@echo "#define IMAGE $(IMAGE)" >> $(CONFIG_FILE)
	@echo "#endif" >> $(CONFIG_FILE)

