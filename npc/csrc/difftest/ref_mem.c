#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

// 如果启用difftest, 则其存储空间全部定义在这里, ref通过dpi-C接口来访存 (ref访存时先判断addr的范围, 然后调用不同的function)

/*
现有最新版本ysyxsoc的不含io访问的程序, 最多访问这三个内存, 这是链接脚本决定的:

SRAM	              0x0f00_0000~0x0fff_ffff     0x0f000000~0x0f001fff (8KB)
Flash	              0x3000_0000~0x3fff_ffff     0x3000_0000 ~ 0x30ff_ffff (16MB)
SDRAM	              0xa000_0000~0xbfff_ffff

*/
#if DIFFTEST

uint8_t ref_flash[FLASH_SIZE];
uint8_t ref_sdram[SDRAM_SIZE];
uint8_t ref_sram[SRAM_SIZE];

void ref_load_flash(const char *path){

}

extern "C" void flash_read(int32_t addr, int32_t *data) {

}

extern "C" void sdram_read(int32_t addr, int32_t *data) {

}

extern "C" void sdram_write(int32_t addr, int32_t *data) {

}

extern "C" void sram_read(int32_t addr, int32_t *data) {

}

extern "C" void sram_write(int32_t addr, int32_t *data) {

}



#endif