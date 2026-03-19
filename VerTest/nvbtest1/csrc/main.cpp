#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "Vtop.h"

static Vtop dut;

void nvboard_bind_all_pins(Vtop* top);

static uint64_t cycle_cnt = 0;

// One clock cycle
static void single_cycle() {
    dut.clk = 0;
    dut.eval();
    nvboard_update();

    dut.clk = 1;
    dut.eval();
    nvboard_update();

    cycle_cnt++;
}

// Reset
static void reset(int n) {
    dut.rst = 1;
    while (n-- > 0) {
        single_cycle();
    }
    dut.rst = 0;
}

// Generate pixel color based on coordinates
static uint32_t gen_pixel(uint16_t x, uint16_t y) {
    uint8_t r = x & 0xFF;
    uint8_t g = y & 0xFF;
    uint8_t b = (x ^ y) & 0xFF;
    return (r << 16) | (g << 8) | b;
}

int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.clk = 0;
    dut.rst = 0;
    // dut.clken = 1;

    reset(10);

    while (1) {

        // if (dut.valid) {
        //     dut.vga_data = gen_pixel(dut.h_addr, dut.v_addr);
        // } else {
        //     dut.vga_data = 0;
        // }
        dut.vga_data = 0xFF0000;
        printf("x=%d y=%d valid=%d\n", dut.h_addr, dut.v_addr, dut.valid);
        printf("valid=%d rgb=%x\n", dut.valid, dut.vga_data);

        nvboard_update();
        single_cycle();

        usleep(1000);
    }

    nvboard_quit();
}