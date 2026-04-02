#include <unistd.h>
#include <nvboard.h>
#include "VALU4.h"

/*
top=ALU4

a (SW7, SW6, SW5, SW4)
b (SW3, SW2, SW1, SW0)
opcode (SW10, SW9, SW8)
out (LD3, LD2, LD1, LD0)
carry LD4
overflow LD5
zero LD6
*/

static VALU4 dut;

void nvboard_bind_all_pins(VALU4* top);

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