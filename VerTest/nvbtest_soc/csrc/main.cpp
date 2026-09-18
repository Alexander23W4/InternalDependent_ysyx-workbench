// ysyxSoC + NVBoard 的仿真主程序
//
// 顶层 = ysyxSoC/build/ysyxSoCFull.v 里的 ysyxSoCFull (里面已经含了 CPU、UART16550、
// PS/2、VGA、GPIO、SPI flash 模型、PSRAM/SDRAM 颗粒模型)。
// 我们只做三件事: 把程序烧进 flash、每个时钟周期喂一次 NVBoard、翻转时钟。

#include <nvboard.h>
#include <verilated.h>

#include "VysyxSoCFull.h"

#include <cstdio>
#include <cstdlib>

// csrc/mem.cpp 提供 (DPI-C)
void load_flash(const char *path);

// build/auto_bind.cpp 由 constr/top.nxdc 生成
void nvboard_bind_all_pins(VysyxSoCFull *top);

// 顶层对象必须是长期存在的: NVBoard 会记住各个信号的地址, 每周期直接读写
static VysyxSoCFull dut;

static void single_cycle() {
  dut.clock = 0;
  dut.eval();
  dut.clock = 1;
  dut.eval();
}

static void do_reset(int n) {
  dut.reset = 1;
  while (n-- > 0) single_cycle();
  dut.reset = 0;
}

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  if (argc < 2) {
    printf("用法: %s <程序镜像.bin>\n", argv[0]);
    printf("  例如: %s ../../am-kernels/tests/am-tests/build/amtest-riscv32e-ysyxsoc.bin\n", argv[0]);
    return 1;
  }
  load_flash(argv[1]);

  nvboard_bind_all_pins(&dut);   // 按 constr/top.nxdc 把引脚接上
  nvboard_init();

  do_reset(20);

  while (!Verilated::gotFinish()) {
    // ⭐ 一个时钟周期调一次 nvboard_update(), 顺序和 nvboard/example/csrc/main.cpp 一致。
    //    NVBoard 的 VGA 模型在 VGA_BLANK_N(vga_valid) 为高时才取一个像素,
    //    PS/2 键盘按 CLK_NUM 翻转 ps2_clk, 串口终端的收发也都在这里面。
    nvboard_update();
    single_cycle();
  }

  dut.final();
  return 0;
}
