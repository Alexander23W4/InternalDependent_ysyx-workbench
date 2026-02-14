#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtest2.h"
#include "verilated.h"
#include "verilated_vcd_c.h"



int main(int argc, char** argv) {
    //
    VerilatedContext* p_context = new VerilatedContext;
    p_context->commandArgs(argc, argv);
    Vtest2* top = new Vtest2{p_context};

    // 1. Enable tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 9); 
    // open the output vcd file for writing the waveform data
    // could be customized
    tfp->open("test2.vcd"); // Make sure this directory exists!

    // 2. Define simulation limit
    const vluint64_t max_sim_time = 100;


    while (!p_context->gotFinish() && p_context->time() < max_sim_time) {
        p_context->timeInc(1);
        int a = rand() & 1;
        int b = rand() & 1;

        top->a = a;
        top->b = b;
        top->eval();

        // 3. Dump data AFTER eval so the VCD catches the new values
        tfp->dump(p_context->time());

        printf("Time %ld: a = %d, b = %d, c = %d\n", p_context->time(), a, b, top->c);

        // Verification logic
        assert(top->c == (a ^ b));
    }

    tfp->close();
    delete top;
    delete p_context;
    return 0;
}


