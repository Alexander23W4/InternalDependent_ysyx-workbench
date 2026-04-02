#include <unistd.h>
#include <nvboard.h>
#include "VEncoder42_2.h"
/*
top=Encoder42_2

in (SW3, SW2, SW1, SW0)
en SW7
out (LD1, LD0)
*/
static VEncoder42_2 dut;

void nvboard_bind_all_pins(VEncoder42_2* top);

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