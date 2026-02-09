#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtest2.h"
#include "verilated.h"

int main(int argc, char** argv) {
    // verilator context pointer [STANDARD BUILD]
    VerilatedContext* p_context = new VerilatedContext;
    p_context->commandArgs(argc, argv);

    // Object pointer [STANDARD BUILD]
    Vtest2* top = new Vtest2{p_context};

    // Main loop [STANDARD BUILD]
    while (!p_context->gotFinish()) {
        int a = rand() & 1;
        int b = rand() & 1;

        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, c = %d\n", a, b, top->c);

        assert(top->c == (a ^ b));  //
    }
    delete top;
    delete p_context;
    return 0;
}
