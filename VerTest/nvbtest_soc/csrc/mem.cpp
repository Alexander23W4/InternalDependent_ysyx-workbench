// ysyxSoC 的 Flash / MROM 内容提供者 (DPI-C)
//
// Flash 和 MROM 在 RTL 里都没有真正的存储体, 它们是反过来问仿真环境要数据的:
//     ysyxSoC/perip/flash/flash.v : import "DPI-C" function void flash_read(input int addr, output int data);
//     ysyxSoC/build/ysyxSoCFull.v : import "DPI-C" function void mrom_read (input int raddr, output int rdata);
// 所以"把程序烧进去"只能在这里做。
//
// 逻辑和 npc/csrc/flash.c、npc/csrc/mrom.c 一致, 只是把那边依赖的 _All.h 去掉, 做成自包含的。
//
// ⭐ 地址语义 (重要):
//   flash_read() 的 addr 是【相对 flash 基址的字节偏移】(不是绝对地址), flash[i] 对应 0x3000_0000+i;
//   mrom_read()  的 addr 是【绝对地址】, 要减掉 MROM_BASE。
//   两者都返回"对齐字"(小端), 窄访问该取哪几个字节由 CPU 自己按 addr[1:0] 抽。

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MROM_BASE  (0x20000000u)
#define MROM_SIZE  (4 * 1024u)
#define FLASH_SIZE (16 * 1024 * 1024u)

// 16MB + 4KB 的静态数组, 放 BSS
static uint8_t flash[FLASH_SIZE];
static uint8_t mrom[MROM_SIZE];

void load_flash(const char *path) {
  if (path == nullptr) {
    printf("[FLASH] no image given, flash stays empty\n");
    return;
  }
  FILE *fp = fopen(path, "rb");
  if (fp == nullptr) {
    printf("[FLASH] cannot open image: %s\n", path);
    exit(1);
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  if (size > (long)FLASH_SIZE) {
    printf("[FLASH] warning: image is %ld byte(s), larger than %u MB, truncated\n",
           size, FLASH_SIZE / 1024 / 1024);
  }
  size_t n = fread(flash, 1, FLASH_SIZE, fp);
  fclose(fp);
  printf("[FLASH] loaded %zu byte(s) from %s\n", n, path);
}

// ysyxSoC 的仿真 flash (perip/flash/flash.v)
extern "C" void flash_read(int addr, int *data) {
  uint32_t off = (uint32_t)addr & ~3u;
  if (off + 4 <= FLASH_SIZE) memcpy(data, &flash[off], 4);
  else                       *data = 0;
}

// MROM (0x2000_0000~0x2000_0fff). 程序放在 flash 里, 这个通常不会被用到,
// 但 RTL 里 import 了它, 链接时必须存在。
extern "C" void mrom_read(int addr, int *data) {
  uint32_t off = ((uint32_t)addr - MROM_BASE) & ~3u;
  if (off + 4 <= MROM_SIZE) memcpy(data, &mrom[off], 4);
  else                      *data = 0;   // 越界读回 0, 不要回 ebreak, 免得掩盖真正的错误
}
