#include <verilated.h>
#include "Vtop.h"
#include <iostream>
#include <assert.h>
#include <stdlib.h>
// PASS
using namespace std;

#define RAM_SIZE 1024  

/*
00000000 <_start>:
   0:	01400513          	addi	a0,zero,20
   4:	010000e7          	jalr	ra,16(zero) # 10 <fun>
   8:	00c000e7          	jalr	ra,12(zero) # c <halt>

0000000c <halt>:
   c:	00c00067          	jalr	zero,12(zero) # c <halt>

00000010 <fun>:
  10:	00a50513          	addi	a0,a0,10
  14:	00008067          	jalr	zero,0(ra)
*/

void load_program(uint32_t* ram) {
    ram[0] = 0x01400513; 
    ram[1] = 0x010000e7;
    ram[2] = 0x00c000e7;
    ram[3] = 0x00c00067;
    ram[4] = 0x00a50513;
    ram[5] = 0x00008067;
}

void tick(Vtop* top) {
    top->clk = 0;
    top->eval(); 
    top->clk = 1;
    top->eval(); 
}

uint32_t get_gpr(Vtop* top, int reg_id) {
    return top->dbg_reg[reg_id]; 
}

void prt_gprs(Vtop* top) {
    printf("PC: [0x%08x] | ", top->_pc); 
    
    int count = 0;
    for (int i = 0; i < 32; i++) {
        uint32_t val = get_gpr(top, i);
        if (val != 0) {
            // 使用 %-3s 和 %08x 保证对齐
            printf("x%-2d: 0x%08x  ", i, val);
            count++;
            if (count % 4 == 0) printf("\n                | "); 
        }
    }
    printf("\n------------------------------------------------\n");
}

int main(void) {
    Vtop* top = new Vtop;
    
    uint32_t* ram = (uint32_t*)malloc(sizeof(uint32_t) * RAM_SIZE);
    assert(ram);
    load_program(ram);

    top->clk = 0;
    top->eval();

    for (int cycle = 0; cycle < 10; cycle++) {

        uint32_t pc_idx = (top->_pc) >> 2; // fetch
        if (pc_idx >= RAM_SIZE) break; 
        
        top->instr = ram[pc_idx];  
        printf("Current instr: 0x%08x \n", ram[pc_idx]);

        tick(top);     
        prt_gprs(top);   
    }

    top->final();
    free(ram);
    delete top;
    return 0;
}
