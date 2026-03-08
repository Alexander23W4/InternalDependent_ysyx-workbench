#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "Vtop.h"

static Vtop dut;   // Device Under Test

void nvboard_bind_all_pins(Vtop* top);

// 记录cycle数量
static uint64_t cycle_cnt = 0;

// 一个时钟周期
static void single_cycle() {

    // clk = 0
    dut.clk = 0;
    dut.eval();
    nvboard_update();

    // clk = 1  (posedge)
    dut.clk = 1;
    dut.eval();
    nvboard_update();

    cycle_cnt++;

    // 调试信息
    printf("cycle = %ld\n", cycle_cnt);
    // printf("PC    = %d\n", dut.PC);
    printf("----------------------\n");
}


// reset CPU
static void reset(int n) {

    dut.rst = 1;

    while (n -- > 0) {
        single_cycle();
    }

    dut.rst = 0;
}


int main() {

    // 绑定引脚
    nvboard_bind_all_pins(&dut);

    // 初始化NVBoard
    nvboard_init();

    // 初始化信号
    dut.clk = 0;
    dut.rst = 0;

    // reset CPU
    reset(10);

    printf("===== CPU Start Running =====\n");

    while (1) {

        // 更新输入（开关）
        nvboard_update();

        // 执行一个时钟周期
        single_cycle();

        // 放慢速度，方便观察数码管
        usleep(100000);   // 100ms
    }

    nvboard_quit();
}

