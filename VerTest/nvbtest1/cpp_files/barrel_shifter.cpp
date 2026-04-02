#include <unistd.h>
#include <nvboard.h>
#include "VBarrelShifter.h"
/*
top=BarrelShifter

LR SW14
AL SW15
shamt (SW13, SW12, SW11)
din (SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0)
dout (LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0)

*/
static VBarrelShifter dut;

void nvboard_bind_all_pins(VBarrelShifter* top);

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