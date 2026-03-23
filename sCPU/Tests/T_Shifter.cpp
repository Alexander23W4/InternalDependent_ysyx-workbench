#include "VShifter.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Generic binary printer
void print_bin(uint32_t val, int width) {
    for (int i = width - 1; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
    }
}

// Golden model
uint8_t _verification(uint8_t prev, uint8_t mode, uint8_t in, uint8_t value) {
    switch(mode) {
        case 0b000: return 0;
        case 0b001: return value;
        case 0b010: return (prev >> 1);
        case 0b011: return (prev << 1);
        case 0b100: return (prev >> 1) | (prev & 0x80);
        case 0b101: return (in << 7) | (prev >> 1);
        case 0b110: return ((prev & 1) << 7) | (prev >> 1);
        case 0b111: return (prev << 1) | (prev >> 7);
    }
    return 0;
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VShifter* top = new VShifter{contextp};

    uint8_t golden_out = 0;
    int mismatch = 0;

    // init
    top->clk = 0;

    for (int cycle = 0; cycle < 200; cycle++) {

        contextp->timeInc(1);

        // Random inputs
        uint8_t mode  = rand() % 8;
        uint8_t in    = rand() % 2;
        uint8_t value = rand() % 256;

        top->mode  = mode;
        top->in    = in;
        top->value = value;

        // clock rising edge
        top->clk = 0;
        top->eval();

        top->clk = 1;
        top->eval();

        // Golden update (based on previous state)
        golden_out = _verification(golden_out, mode, in, value);

        uint8_t dut_out = top->out;

        // -------- Print info --------
        printf("Cycle %3d | mode=", cycle);
        print_bin(mode, 3);
        printf(" in=%d value=%3u\n", in, value);

        printf("Value    : ");
        print_bin(value, 8);
        printf(" (%3u)\n", value);

        printf("DUT    : ");
        print_bin(dut_out, 8);
        printf(" (%3u)\n", dut_out);

        printf("Ver_ret : ");
        print_bin(golden_out, 8);
        printf(" (%3u)\n", golden_out);

        // -------- Check --------
        if (dut_out != golden_out) {
            printf(">>> MISMATCH!\n");
            mismatch++;
        } else {
            printf("match\n");
        }

        printf("--------------------------------------------------\n");
    }

    printf("Total mismatch: %d\n", mismatch);

    delete top;
    delete contextp;
    return 0;
}