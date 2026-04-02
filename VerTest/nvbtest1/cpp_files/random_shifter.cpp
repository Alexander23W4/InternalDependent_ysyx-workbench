#include <unistd.h>
#include <nvboard.h>
#include "VRandomShifter.h"
/*
top=RandomShifter
rst BTNC
clk SW0
out (LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0)
*/

static VRandomShifter dut;

void nvboard_bind_all_pins(VRandomShifter* top);

int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while (1) {
        nvboard_update();

        dut.eval();

        usleep(1000);
    }

    nvboard_quit();
    return 0;
}

