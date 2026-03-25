#include "VAS.h"
#include "verilated.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int ARR[] = {7, 6, 2, 1, 0, -1, -2, -7, -8};

int _validation(int a, int b, int cin, int* overflow){
    assert(cin == 0 || cin == 1);
    int result;
    if(cin == 1){
        result =  a - b;
    }
    else{
        result =  a + b;
    }
    *overflow = (result < -8 || result > 7) ? 1 : 0;
    return result;
}
    
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    VAS* top = new VAS{contextp};   // modification

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
    //     int over;
    //     int result = _validation(ARR[i], ARR[j], top->cin, &over);
    //     if(over){
    //         if(top->overflow) printf("validated successfully, overflow\n");
    //         else printf("The result is wrong, it's overflow\n");
    //     }
    //     else{
    //         if(top->s == result) printf("validated successfully, the answer: %d\n", result);
    //         else printf("the result is wrong, the answer: %d\n", result);
    //     }
    }
    

    delete top;
    delete contextp;
    return 0;
}