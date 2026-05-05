#include "svdpi.h"
#include "Vour__Dpi.h"
#include "verilated.h"
#include "Vour.h"
#include <iostream>

int add(int a, int b) { return a+b; }

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    Vour* top = new Vour{contextp};

    while (!contextp->gotFinish()) {
        top->eval();
    }

    delete top;
    delete contextp;
    return 0;
}