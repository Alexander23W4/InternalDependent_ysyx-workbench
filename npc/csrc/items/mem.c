#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

uint8_t ref_flash[FLASH_SIZE];
uint8_t ref_sram [SRAM_SIZE];
uint8_t ref_sdram[SDRAM_SIZE];


void load_flash(const char *path) {
    if (path == NULL) {
        printf("[REF] no image given, ref_flash stays empty\n");
        return;
    }

    FILE *fp = fopen(path, "rb");
    if (fp == NULL) {
        printf("[REF] cannot open image: %s\n", path);
        assert(0);
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (size > (long)FLASH_SIZE) {
        printf("[REF] warning: image is %ld byte(s), larger than %d B flash, truncated\n",
               size, FLASH_SIZE);
    }

    size_t n = fread(ref_flash, 1, FLASH_SIZE, fp);
    fclose(fp);
    printf("[REF] loaded %zu byte(s) from %s\n", n, path);
}


extern "C" void mem_read(int32_t addr, int32_t *data) {

}

extern "C" void mem_write(int32_t addr, int32_t data, int type) {

}


// 这个是专门给dut留的
extern "C" void flash_read(int32_t addr, int32_t *data) {
    uint32_t off = (uint32_t)addr & ~3u;
    if (off + 4 <= FLASH_SIZE) {
        memcpy(data, &flash[off], 4);
    } else {
        *data = 0;
    }
}