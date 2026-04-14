#include <verilated.h>
#include "Vtop.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <iostream>
#include <assert.h>
#include <stdlib.h>

using namespace std;

#define RAM_SIZE 524288  
#define RAM_BASE 0x80000000
#define MEMORY_LOAD_EFFECTIVENESS 2000
#define MANUAL_LOAD 0
#define AUTO_LOAD 1

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

int endprog = 0;
uint32_t* ram = NULL;

uint32_t pram(uint32_t vram){
    return vram - RAM_BASE;
}

void load_memory(char* filename, uint32_t* M){   
    FILE *fp = fopen(filename, "rb");  
    assert(fp);
    size_t loaded_instr = fread(M, sizeof(uint32_t), MEMORY_LOAD_EFFECTIVENESS, fp);
    fclose(fp);

    printf("--LOAD %zu AMOUNTS OF INSTR TO M[]\n", loaded_instr);
}

void load_program(uint32_t* ram) {
    ram[0] = 0x01400513; 
    ram[1] = 0x010000e7;
    ram[2] = 0x00c000e7;
    ram[3] = 0x00100073;
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
            printf("x%-2d: 0x%08x  ", i, val);
            count++;
            if (count % 4 == 0) printf("\n                | "); 
        }
    }
    printf("\n------------------------------------------------\n");
}

uint32_t ram_read(uint32_t addr, int amount) {
    uint8_t* _ram = (uint8_t*) ram;
    assert(amount <= 4 && amount >= 1);
    uint32_t result = 0;
    for (int i = 0; i < amount; i++) {
        result |= ((uint32_t)_ram[addr + i]) << (8 * i);
    }
    return result;
}

void ram_write(uint32_t addr, uint32_t data, int amount) {
    assert(amount <= 4 && amount >= 1);
    uint8_t* ram_byte = (uint8_t*)ram; 
    for (int i = 0; i < amount; i++) {
        ram_byte[addr + i] = (uint8_t)(data >> (8 * i));
    }
}


int add_ebreak(uint32_t* M){
    for (size_t i = 0; i < MEMORY_LOAD_EFFECTIVENESS; i++)  
    {
        if(M[i] == 0x00000513){
            M[i + 1] = 0x00100073;
            return 1;
        }
    }  
    return 0;
}


int main(int argc, char** argv) {
    assert(argc >= 2);

    // malloc ram
    Vtop* top = new Vtop;
    svSetScope(svGetScopeFromName("TOP.top"));
    
    ram = (uint32_t*)malloc(sizeof(uint32_t) * RAM_SIZE);
    assert(ram);

    // load code
    #if MANUAL_LOAD
    load_program(ram);
    #elif AUTO_LOAD
    load_memory(argv[1], ram);
    #endif

    // add ebreak
    int _add_ebreak_suc = add_ebreak(ram);
    assert(_add_ebreak_suc);
    
// ---------------------------------------------------------

    top->clk = 0;
    top->eval();

    while(1){
        uint32_t pc_idx = (top->_pc) >> 2; // fetch
        if (pc_idx >= RAM_SIZE) break; 
        
        top->instr = ram[pc_idx];  
        printf("Current instr: 0x%08x \n", ram[pc_idx]);

        tick(top);     
        prt_gprs(top);

        top->halt(&endprog);
        if(endprog){
            printf("Hit ebreak instr, program end.\n");
            break;
        }   
    }
    /*
    for (int cycle = 0; cycle < 10; cycle++) {
        uint32_t pc_idx = (top->_pc) >> 2; // fetch
        if (pc_idx >= RAM_SIZE) break; 
        
        top->instr = ram[pc_idx];  
        printf("Current instr: 0x%08x \n", ram[pc_idx]);

        tick(top);     
        prt_gprs(top);

        top->halt(&endprog);
        if(endprog){
            printf("Hit ebreak instr, program end.\n");
            break;
        }   
    }
    */
    if(top->dbg_reg[10] != 0){   // after operation check
        printf("HIT BAD TRAP\n");
        printf("ERROR, PROGRAM ENDED, X0 is not equal to 0\n");
    }
    else{
        printf("HIT GOOD TRAP\n");
    }

    top->final();
    free(ram);
    delete top;
    return 0;
}
