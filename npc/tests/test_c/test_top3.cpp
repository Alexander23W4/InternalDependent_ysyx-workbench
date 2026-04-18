#include <verilated.h>
#include "Vtop.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "dbg.h"

using namespace std;

#define RAM_SIZE 524288  
#define MEMORY_LOAD_EFFECTIVENESS 20000
#define MANUAL_LOAD 0
#define AUTO_LOAD 1
#define AM 0
#define _REAL_RUN_ENV 0

#if _REAL_RUN_ENV
#define RAM_BASE 0x80000000
#else 
#define RAM_BASE 0
#endif
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

int instr, rd, rs1, rs2;
int addi, add, jalr, lui, lw, lbu, sw, sb, ebreak;
int immI, immU, immS;
int wdata, rdata1, rdata2, wen;

void prt_decode_info() {
    printf("INST: 0x%08x\n", instr);

    printf("TYPE: ");
    if(addi)   printf("addi ");   if(add) printf("add "); if(jalr) printf("jalr ");
    if(lui)    printf("lui ");    if(lw)  printf("lw ");  if(lbu)  printf("lbu ");
    if(sw)     printf("sw ");     if(sb)  printf("sb ");  if(ebreak) printf("ebreak ");
    printf("\n");

    printf("REGS: rd:%d rs1:%d rs2:%d\n", rd, rs1, rs2);

    printf("IMMS: I:0x%x U:0x%x S:0x%x\n", immI, immU, immS);

    printf("DATA: wd:0x%08x r1:0x%08x r2:0x%08x wen:%d\n", wdata, rdata1, rdata2, wen);

    printf("------------------------------------------------\n");
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

uint32_t pram(uint32_t vram){
    #if _REAL_RUN_ENV
    return (vram - RAM_BASE);
    #else
    return vram;
    #endif
}


void tick(Vtop* top) {
    top->clk = 0;
    top->eval();   //
    top->clk = 1;
    top->eval();
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


// allow misalign access
uint32_t ram_read(uint32_t addr, int amount) {
    if((instr & 0x7f) == 3){
        uint32_t paddr = pram(addr);
        uint8_t* _ram = (uint8_t*) ram;
        assert(amount <= 4 && amount >= 1);
        uint32_t result = 0;
        
        if (paddr >= RAM_SIZE * 4){
            // printf("invalid ram_read addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
            return 0;
        }
        for (int i = 0; i < amount; i++) {
            result |= ((uint32_t)_ram[paddr + i]) << (8 * i);
        }
        return result;
    }
    else {
        return 0;
    }
}

// doesn't misalign access
void ram_write(uint32_t addr, uint32_t data, int amount) {
    uint32_t paddr = pram(addr);
    assert(amount <= 4 && amount >= 1);
    uint8_t* ram_byte = (uint8_t*)ram; 
    check((paddr % amount) == 0, "misaligned access, paddr: 0x%08X, amount: %d", paddr, amount);
    if (paddr >= RAM_SIZE * 4){
        printf("invalid ram_write addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
    }
    for (int i = 0; i < amount; i++) {
        ram_byte[paddr + i] = (uint8_t)(data >> (8 * i));
    }
    return;
error:
    assert(0);
}




int main(int argc, char** argv) {
    assert(argc >= 2);

    Vtop* top = new Vtop;

    svSetScope(svGetScopeFromName("TOP.top"));
    
    // malloc ram
    ram = (uint32_t*)malloc(sizeof(uint32_t) * RAM_SIZE);
    assert(ram);

    // rst
    top->rst = 1;  
    tick(top);
    tick(top);
    top->rst = 0; 
    printf("Reset Released. Starting execution...\n");

    // load code
    #if MANUAL_LOAD
    load_program(ram);
    #elif AUTO_LOAD
    load_memory(argv[1], ram);
        // add ebreak
    int _add_ebreak_suc = add_ebreak(ram);
    assert(_add_ebreak_suc);
    #elif AM
    load_memory(argv[1], ram);
            // add ebreak
    // int _add_ebreak_suc = add_ebreak(ram);
    // assert(_add_ebreak_suc);
    #endif

    
// ---------------------------------------------------------

    while(1){
        // fetch
        uint32_t pc_idx = (top->_pc - RAM_BASE) >> 2; 
        printf("pc_idx: %u\n", pc_idx);

        if (pc_idx >= RAM_SIZE || pc_idx < 0){
            printf("Invalid pc\n"); 
            break;
        }
        top->instr = ram[pc_idx];
        instr = top->instr;
        printf("Current instr: 0x%08x \n", ram[pc_idx]);
        
        // operation a period
        tick(top);

        // output operation outcomes
        prt_gprs(top);
        top->get_decode_signals(
            &instr,
            &addi, &add, &jalr, &lui, &lw, &lbu, &sw, &sb, &ebreak,
            &rd, &rs1, &rs2,
            &immI, &immU, &immS,
            &wdata, &rdata1, &rdata2, &wen
        );
        prt_decode_info();

        // check end
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
