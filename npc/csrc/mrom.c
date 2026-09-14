#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
ysyxSoC 的 MROM 内容 + 装载逻辑。

⭐ MROM 在 RTL 里没有存储体, 它是 MROMHelper.v 通过 DPI-C 反过来问仿真环境要数据的:
      import "DPI-C" function void mrom_read(input int raddr, output int rdata);
   所以"把程序装进 MROM"这件事只能在这里做:
     1. AM 生成 .bin (镜像第 0 字节 = 0x2000_0000)
     2. load_mrom() 把 .bin 读进 mrom[]
     3. mrom_read() 按 addr - MROM_BASE 返回对应字
   SRAM 不需要在这里装: 它是 SoC 里真正的 RTL 存储器(mem_2048x32), 上电内容无意义,
   只由 CPU 通过 AXI 自己写(栈/堆) —— 这也是"程序不能写全局变量"的原因。
*/

uint8_t mrom[MROM_SIZE];

void load_mrom(const char *path) {
    if (path == NULL) {
        printf("[MROM] no image given, MROM stays empty\n");
        return;
    }

    FILE *fp = fopen(path, "rb");
    if (fp == NULL) {
        printf("[MROM] cannot open image: %s\n", path);
        assert(0);
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (size > (long)MROM_SIZE) {
        printf("[MROM] warning: image is %ld byte(s), larger than 4KB MROM, truncated\n", size);
    }

    size_t n = fread(mrom, 1, MROM_SIZE, fp);
    fclose(fp);
    printf("[MROM] loaded %zu byte(s) from %s\n", n, path);
}

// 按字节地址读一个 32bit 字 (小端), 与 AXI4MROM 的行为一致
extern "C" void mrom_read(int32_t addr, int32_t *data) {
    uint32_t off = (uint32_t)addr - (uint32_t)MROM_BASE;
    if (off + 4 <= MROM_SIZE) {
        memcpy(data, &mrom[off], 4);
    } else {
        *data = 0;   // 越界读(比如 _bss 之外)返回 0, 不要回 ebreak, 否则会掩盖真正的错误
    }
}

// flash 这一步还没用上, 但 flash.v 里 import 了这个 DPI-C 函数, 链接时需要它存在
extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
