#include <stdint.h>

/*
通过 XIP(eXecute In Place)方式从 flash 存储空间读数据, 检查 CPU 发出的读请求拿到的内容是否正确。

基准从哪来? .data 段天生有两份:
    LMA 在 flash   —— 烧录进去的初值            <- 要走 XIP 才能读到
    VMA 在 SRAM    —— start.S 里 bootloader 搬过去的副本
两份必须一模一样; 而 SRAM 那份是 CPU 直接读 SRAM、完全不经过 flash, 正好当参照物。

注意: 此时程序本身就住在 flash 里靠 XIP 取指执行, CPU 每次取指都要占用 SPI master,
所以这里不能同时再用软件版 flash_read() —— 它也驱动同一个 SPI master, 会被取指打断。
(软件版 flash_read() 要在"程序放在 MROM 里执行"的配置下测, 见 am/src/riscv/ysyxsoc/trm.c)
*/

int pattern[64] = {
  0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
  0x13121110, 0x17161514, 0x1b1a1918, 0x1f1e1d1c,
  0x23222120, 0x27262524, 0x2b2a2928, 0x2f2e2d2c,
  0x33323130, 0x37363534, 0x3b3a3938, 0x3f3e3d3c,
  0x43424140, 0x47464544, 0x4b4a4948, 0x4f4e4d4c,
  0x53525150, 0x57565554, 0x5b5a5958, 0x5f5e5d5c,
  0x63626160, 0x67666564, 0x6b6a6968, 0x6f6e6d6c,
  0x73727170, 0x77767574, 0x7b7a7978, 0x7f7e7d7c,
};

extern char _data_lma, _data_start, _data_end;

int main() {
  /* 把 pattern 的地址用掉, 免得它所在的 .data 被 --gc-sections 当成死代码收掉 */
  __asm__ volatile("" :: "r"(pattern));

  volatile uint32_t *in_flash = (volatile uint32_t *)&_data_lma;    /* flash 里的那份 */
  volatile uint32_t *in_sram  = (volatile uint32_t *)&_data_start;  /* SRAM  里的那份 */

  uint32_t n = (uint32_t)(&_data_end - &_data_start) / 4;
  if (n == 0) return 0xdead;        /* .data 是空的就说明这个测试没意义 */

  for (uint32_t i = 0; i < n; i++) {
    if (in_flash[i] != in_sram[i]) return i + 1;   /* 返回出错的下标+1, 方便定位 */
  }

  return 0;
}
