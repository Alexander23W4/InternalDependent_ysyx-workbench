#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtest2.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::traceEverOn(true);  // ✅ main() 第一行，完美正常！

    VerilatedContext* p_context = new VerilatedContext;
    p_context->commandArgs(argc, argv);

    Vtest2* top = new Vtest2{p_context};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    tfp->dump(2);  // ✅ 关键：dump(2)，不是dump(0)

    int cycles = 0;
    while (!p_context->gotFinish() && cycles++ < 100) {
        int a = rand() & 1;
        int b = rand() & 1;

        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, c = %d\n", a, b, top->c);

        tfp->dump(main_time++ * 2);  // ✅ 关键：乘2，保证时序间隔
        assert(top->c == (a ^ b));
    }
    
    tfp->close();
    delete top;
    delete p_context;
    return 0;
}


