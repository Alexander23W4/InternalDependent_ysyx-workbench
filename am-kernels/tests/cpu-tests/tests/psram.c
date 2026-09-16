#include <stdint.h>

/*
PSRAM 读写测试。PSRAM 映射在 0x8000_0000~0x9fff_ffff。

通路: CPU LSU -> AXI -> APB -> psram_top_apb -> EF_PSRAM_CTRL_wb -> QSPI(EBh/38h) -> psram 颗粒模型

PSRAM 不是非易失存储器, 仿真开始时内容无意义, 所以这里先写后读: 写的值必须能原样读回来。
*/
#define PSRAM_BASE 0x80000000u

int main() {
  volatile uint32_t *p = (volatile uint32_t *)PSRAM_BASE;

  /* 1. 整字写 + 整字读 */
  for (int i = 0; i < 64; i++) {
    p[i] = 0xA5A50000u + i;
  }
  for (int i = 0; i < 64; i++) {
    if (p[i] != (0xA5A50000u + i)) return i + 1;
  }

  /* 2. 字节写 + 字节读(覆盖 PSRAM 控制器里 byte0..byte3 的 lane 选择) */
  *(volatile uint8_t *)(PSRAM_BASE + 0x400 + 0) = 0x11;
  *(volatile uint8_t *)(PSRAM_BASE + 0x400 + 1) = 0x22;
  *(volatile uint8_t *)(PSRAM_BASE + 0x400 + 2) = 0x33;
  *(volatile uint8_t *)(PSRAM_BASE + 0x400 + 3) = 0x44;
  if (*(volatile uint32_t *)(PSRAM_BASE + 0x400) != 0x44332211u) return 0x100;

  /* 3. 半字写 + 半字读 */
  *(volatile uint16_t *)(PSRAM_BASE + 0x500) = 0xBEAD;
  *(volatile uint16_t *)(PSRAM_BASE + 0x502) = 0xFEED;
  if (*(volatile uint32_t *)(PSRAM_BASE + 0x500) != 0xFEEDBEADu) return 0x200;

  /* 4. 不同地址不能串(验证地址线) */
  p[0x100] = 0x12345678u;
  p[0x200] = 0x87654321u;
  if (p[0x100] != 0x12345678u) return 0x300;
  if (p[0x200] != 0x87654321u) return 0x301;

  return 0;
}
