#include "VEncoder42_2.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ENABLE 1

int golden_encoder(int in) {
    for (int i = 3; i >= 0; i--) {
        if (in & (1 << i)) {
            return i & 0x3;    // this way for make i from 32 bits to 2 bits
        }
    }
    return 0;
}


int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VEncoder42_2* top = new VEncoder42_2{contextp};

    for (size_t index = 0; index < 100; index++) {

        contextp->timeInc(1);

        int in_val = rand() % 16;
        top->in = in_val;
        top->en = ENABLE;

        top->eval();

        int expected = golden_encoder(in_val);

        printf("in=%x -> out=%d (expected=%d)\n",
               top->in, top->out, expected);

        assert(top->out == expected);
    }

    printf("All tests passed.\n");

    delete top;
    delete contextp;
    return 0;
}
