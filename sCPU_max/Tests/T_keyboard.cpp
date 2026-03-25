#include <verilated.h>
#include "Vkeyboard_sim.h"

int main(int argc, char** argv) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);


    Vkeyboard_sim* top = new Vkeyboard_sim{contextp};


    contextp->time(0);


    while (!contextp->gotFinish()) {
        top->eval();                   
        contextp->timeInc(1);           


        if (contextp->time() > 500000000) {
            VL_PRINTF("Simulation timeout at time %llu\n",  
                      (unsigned long long)contextp->time());
            break;
        }
    }

    // 正常收尾
    top->final();
    delete top;
    delete contextp;
    return 0;
}
