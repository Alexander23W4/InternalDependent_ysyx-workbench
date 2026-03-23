#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "VDecoder38.h"


static VDecoder38 dut;

void nvboard_bind_all_pins(VDecoder38* top);

int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.en = 0;
    dut.x = 0;
    dut.eval();

    while (1) {

        // Example stimulus: sweep x
        dut.en = 1;

        for (int i = 0; i < 8; i++) {
            dut.x = i;
            dut.eval();

            printf("en=%d x=%d -> y=%02x\n", dut.en, dut.x, dut.y);

            nvboard_update();
            usleep(500000); // 0.5s
        }

        // Disable case
        dut.en = 0;
        dut.eval();

        printf("en=%d x=%d -> y=%02x (disabled)\n", dut.en, dut.x, dut.y);

        nvboard_update();
        usleep(1000000); // 1s
    }

    nvboard_quit();
}