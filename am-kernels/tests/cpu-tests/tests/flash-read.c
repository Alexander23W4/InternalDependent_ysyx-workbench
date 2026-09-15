#include <stdint.h>

/*
通过 SPI master 从 flash 颗粒里读数据, 检查读出来的内容是否正确。

既然 flash 已经完全取代了 MROM(程序本身就住在 flash 里从 0x3000_0000 开始执行),
就用两条互相独立的通路对拍:
      via_spi  = flash_read(addr)   -> 软件写 SPI master 寄存器, 真的跑一遍 SPI 时序
      via_bus  = *(0x3000_0000+..)  -> CPU 直接按总线读 flash 快路径(取指走的也是这条)
两者底层是同一颗 flash, 但一条经过 SPI 移位/字节序转换, 一条不经过, 对得上才说明
SPI 那条路的命令、地址、位序、字节序全对。

注意: 这里的 flash_read() 是 AM 里的软件版本(am/src/riscv/ysyxsoc/trm.c),
和仿真环境 csrc/flash.c 里那个同名的 DPI-C 函数是两回事。
*/
extern uint32_t flash_read(uint32_t addr);

int main() {
  volatile uint32_t *via_bus = (volatile uint32_t *)0x30000000;

  for (int i = 0; i < 0x100; i++) {
    uint32_t a = flash_read(0x30000000 + i * 4);
    uint32_t b = via_bus[i];
    if (a != b) return i + 1;   /* 返回出错的下标+1, 方便定位 */
  }

  return 0;
}
