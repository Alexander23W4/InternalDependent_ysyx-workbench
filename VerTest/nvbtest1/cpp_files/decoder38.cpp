#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "VDecoder38.h"
/*
top=Decoder38

y (LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0)
x (SW2, SW1, SW0)
en SW7

*/

static VDecoder38 dut;

void nvboard_bind_all_pins(VDecoder38* top);

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