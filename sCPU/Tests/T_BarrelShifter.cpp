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
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VBarrelShifter* top = new VBarrelShifter{contextp};   // modification

    for (size_t index = 0; index < 100; index++)    
    {
        /* code */
        contextp->timeInc(1);
        int i = rand() % 2;
        int j = rand() % 2;
        top->LR = i;
        top->AL = j;
        
        top->din = rand() % 256;
        top->shamt = rand() % 8;

        top->eval(); 
        printf ("LR:%d, AL:%d, din:%d, shamt:%d\n dout:%d\n\n", top->LR, top->AL, top->din, top->shamt, top->dout);

    }
    

    delete top;
    delete contextp;
    return 0;
}