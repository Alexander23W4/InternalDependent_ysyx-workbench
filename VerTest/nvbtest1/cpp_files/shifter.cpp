#include <unistd.h>
#include <nvboard.h>
#include "VShifter.h"
/*
top=Shifter

mode (SW15, SW14, SW13)
in SW0
value (SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0)
out (LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0)
*/
static VShifter dut;

void nvboard_bind_all_pins(VShifter* top);

static void single_cycle() {
    dut.clk = 0;
    dut.eval();
    nvboard_update();

    dut.clk = 1;
    dut.eval();
    nvboard_update();
}

int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while (1) {

        single_cycle();

        sleep(1);  

    }

    nvboard_quit();
    return 0;
}