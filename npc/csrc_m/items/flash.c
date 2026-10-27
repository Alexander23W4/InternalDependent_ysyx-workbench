#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
ysyxSoC 的 Flash 内容 + 装载逻辑。

⭐ Flash 和 MROM 一样在 RTL 里没有真正的存储体 —— 内容是反过来问仿真环境要的:
      flash.v: import "DPI-C" function void flash_read(input int addr, output int data);
   所以"把程序烧进 flash"只能在这里做。

⭐ 关键: flash_read() 拿到的 addr 是【相对 flash 基址的字节偏移】, 不是绝对地址。
   两条 RTL 路径都是这么给的:
     1) FAST_FLASH 分支 (spi_top_apb.v, CPU 直接读 0x3000_0000):
            flash_cmd(.addr({8'b0, in_paddr[23:2], 2'b0}), ...)
        0x3000_0000 的低 24 位是 0, 所以 in_paddr[23:2] == 字节偏移 >> 2,
        拼回 32 位就是字节偏移(低 2 位补 0).
     2) 真实 SPI 路径 (flash.v):
            wire [31:0] raddr = {8'b0, addr[22:0], mosi};
        也是 24 位颗粒内地址 -> 字节偏移.
   因此 flash[] 的下标就是字节偏移, flash[i] 对应地址 0x3000_0000 + i。

   和 MROM 一样返回"对齐字"(小端); 窄访问该取哪几个字节由 CPU 自己按 addr[1:0] 抽。
*/

uint8_t flash[FLASH_SIZE];

void load_flash(const char *path) {
    if (path == NULL) {
        printf("[FLASH] no image given, flash stays empty\n");
        return;
    }

    FILE *fp = fopen(path, "rb");
    if (fp == NULL) {
        printf("[FLASH] cannot open image: %s\n", path);
        assert(0);
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (size > (long)FLASH_SIZE) {
        printf("[FLASH] warning: image is %ld byte(s), larger than %d MB flash, truncated\n",
               size, FLASH_SIZE / 1024 / 1024);
    }

    size_t n = fread(flash, 1, FLASH_SIZE, fp);
    fclose(fp);
    printf("[FLASH] loaded %zu byte(s) from %s\n", n, path);
}

// 这个是给 ysyxsoc 的 仿真flash 用的
extern "C" void flash_read(int32_t addr, int32_t *data) {
    uint32_t off = (uint32_t)addr & ~3u;
    if (off + 4 <= FLASH_SIZE) {
        memcpy(data, &flash[off], 4);
    } else {
        *data = 0;
    }
}
