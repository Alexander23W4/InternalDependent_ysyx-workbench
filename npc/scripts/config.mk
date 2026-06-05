CONFIG_FILE=$(NPC_HOME)/config.h
FILE=$(NPC_HOME)/build_rsrc/$(notdir $(IMAGE))

# 创建头文件
generate_config:
	@echo "Generating $(CONFIG_FILE)..."
	@echo "#ifndef CONFIG_H" > $(CONFIG_FILE)
	@echo "#define CONFIG_H" >> $(CONFIG_FILE)
	@echo "#define DIFF_TEST_ENABLE $(DIFF_TEST_ENABLE)" >> $(CONFIG_FILE)
	@echo "#define TRACE_ENABLE $(TRACE_ENABLE)" >> $(CONFIG_FILE)
	@echo "#define IMAGETXT $(FILE).txt" >> $(CONFIG_FILE)
	@echo "#define IMAGEELF $(FILE).elf" >> $(CONFIG_FILE)
	@echo "#endif" >> $(CONFIG_FILE)



