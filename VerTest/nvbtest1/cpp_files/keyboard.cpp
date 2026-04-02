/*
top=keyboard_top

ready LD0
clrn BTNC
ps2_clk PS2_CLK
ps2_data PS2_DAT
*/
#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "Vkeyboard_top.h"

static Vkeyboard_top dut;

void nvboard_bind_all_pins(Vkeyboard_top* top);

// 
static void single_cycle() {
    dut.clk = 0;
    dut.eval();
    nvboard_update();

    dut.clk = 1;
    dut.eval();
    nvboard_update();
}

// Reset
static void reset(int n) {
    dut.clrn = 1;
    while (n-- > 0) {
        single_cycle();
    }
    dut.clrn = 0;
}


int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.clk = 0;
    dut.clrn = 0;

    reset(10);

    while (1) {
        if (dut.ready) {
            printf("Key value: %c\n", dut.ascii);
        }

        nvboard_update();
        single_cycle();
    }

    nvboard_quit();
}