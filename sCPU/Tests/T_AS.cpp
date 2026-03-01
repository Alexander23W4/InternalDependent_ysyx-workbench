#include "Vtop.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>

int ARR[] = {7, 6, 2, 1, 0, -1, -2, -7, -8};
    
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    Vtop* top = new Vtop{contextp};   // modification

    for (size_t index = 0; index < 100; index++)    
    {
        /* code */
        contextp->timeInc(1);
        int i = rand() % 9;
        int j = rand() % 9;
        
        top->a = ARR[i];    // signed -> binary  automatically?
        top->b = ARR[j];
        top->cin = rand() & 1;

        top->eval(); 

        printf("Time %ld: a = %d, b = %d, cin = %d, output = %d, \
            overflow = %d, carry = %d\n", contextp->time(), top->a, \
            top->b, top->cin, top->s, top->overflow, top->c);
    }
    

    delete top;
    delete contextp;
    return 0;
}