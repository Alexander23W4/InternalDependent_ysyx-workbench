#include "VBarrelShifter.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>

#define ENABLE 1

/*
"""
    input LR,           // 1=左移 0=右移
    input AL,           // 1=算术移位 0=逻辑移位
    input [7: 0] din,
    input [2: 0] shamt,
    output [7: 0] dout
"""
*/

void _verification(uint8_t* num, int LR, int AL, int amount){
    if (LR) {
        // left shift
        *num = (uint8_t)(*num << amount);
    }
    else {
        if (AL) {
            // arithmetic right shift (sign extend manually)
            uint8_t original = *num;
            uint8_t shifted  = original >> amount;

            // if MSB was 1, fill high bits with 1
            if (original & 0x80) {
                uint8_t mask = 0xFF << (8 - amount);
                shifted |= mask;
            }

            *num = shifted;
        }
        else {
            // logical right shift
            *num = (uint8_t)(*num >> amount);
        }
    }
}

void print_bin8(uint8_t x) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
}

int mismatch = 0;
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VBarrelShifter* top = new VBarrelShifter{contextp};

    for (int i = 0; i < 100; i++) {

        contextp->timeInc(1);

        // Random inputs
        top->LR    = rand() % 2;    // 1: left, 0: right
        top->AL    = rand() % 2;    // 1: arithmetic, 0: logical
        top->din   = rand() % 256;  // 8-bit input
        top->shamt = rand() % 8;    // shift amount

        top->eval();

        // Print info
        printf("LR:%d AL:%d shamt:%d\n", top->LR, top->AL, top->shamt);

        printf("din : ");
        print_bin8(top->din);
        printf(" (%3d)\n", top->din);

        printf("dout: ");
        print_bin8(top->dout);
        printf(" (%3d)\n\n", top->dout);

        uint8_t ver_ret = (uint8_t)top->din;
        _verification(&ver_ret, top->LR, top->AL, top->shamt);
        if(ver_ret == (uint8_t)top->dout){
            printf("match success. verification result: %u\n", ver_ret);
            print_bin8(ver_ret);
            printf("\n");
        }
        else{
            printf("mismatch.verification result: %u\n", ver_ret);
            print_bin8(ver_ret);
            printf("\n");
            mismatch++;
        }
    }
    printf("Total mismatch: %d\n", mismatch);

    delete top;
    delete contextp;
    return 0;
}