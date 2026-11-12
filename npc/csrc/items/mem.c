#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

uint8_t flash[FLASH_SIZE];
uint8_t sram [SRAM_SIZE];
uint8_t sdram[SDRAM_SIZE];

// dut和ref共用同一份flash
void load_flash(const char *path) {
    if (path == NULL) {
        printf("[load_flash] no image given, flash stays empty\n");
        return;
    }

    FILE *fp = fopen(path, "rb");
    if (fp == NULL) {
        printf("[load_flash] cannot open image: %s\n", path);
        assert(0);
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (size > (long)FLASH_SIZE) {
        printf("[load_flash] warning: image is %ld byte(s), larger than %d B flash, truncated\n",
               size, FLASH_SIZE);
    }

    size_t n = fread(flash, 1, FLASH_SIZE, fp);
    fclose(fp);
    printf("[load_flash] loaded %zu byte(s) from %s\n", n, path);
}


static uint8_t *mem_region(uint32_t addr, uint32_t *off, int *writable) {
    if (addr - (uint32_t)FLASH_BASE < (uint32_t)FLASH_SIZE) {
        *off = addr - (uint32_t)FLASH_BASE; *writable = 0; return flash;
    }
    if (addr - (uint32_t)SRAM_BASE < (uint32_t)SRAM_SIZE) {
        *off = addr - (uint32_t)SRAM_BASE;  *writable = 1; return sram;
    }
    if (addr - (uint32_t)SDRAM_BASE < (uint32_t)SDRAM_SIZE) {
        *off = addr - (uint32_t)SDRAM_BASE; *writable = 1; return sdram;
    }
    return NULL;
}

extern "C" int32_t mem_read(int32_t addr) {
    uint32_t a = (uint32_t)addr, off = 0;
    int wr = 0;
    uint8_t *base = mem_region(a, &off, &wr);
    if (base == NULL) {
        printf("[REF] mem_read: bad addr 0x%08x\n", a);
        // assert(0);
        return 0;
    }

    uint32_t v = 0;   // addr 起的 4 个字节, 小端拼成一个字
    for (uint32_t i = 0; i < 4; i++) v |= (uint32_t)base[off + i] << (8 * i);
    return (int32_t)v;
}

extern "C" void mem_write(int32_t addr, int32_t data, int32_t write_type) {
    uint32_t a = (uint32_t)addr, off = 0;
    int wr = 0;
    uint8_t *base = mem_region(a, &off, &wr);
    if (base == NULL) {
        printf("[REF] mem_write: bad addr 0x%08x\n", a);
        assert(0);
    }
    if (!wr) {
        printf("[REF] mem_write: flash is read-only, addr 0x%08x\n", a);
        assert(0);
    }

    for (int i = 0; i < write_type; i++) base[off + i] = (uint8_t)(((uint32_t)data) >> (8 * i));
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