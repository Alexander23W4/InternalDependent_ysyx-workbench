#include "VDecoder38.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>

#define ENABLE 1
    
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VDecoder38* top = new VDecoder38{contextp};   // modification

    for (size_t index = 0; index < 100; index++)    
    {
        /* code */
        contextp->timeInc(1);
        int i = rand() % 8;
        top->x = i;
        
        top->en = ENABLE;

        top->eval(); 
        printf ("%d---%d\n", top->x, top->y);

    }
    

    delete top;
    delete contextp;
    return 0;
}