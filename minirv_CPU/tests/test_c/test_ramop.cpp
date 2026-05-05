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
#define MEMORY_LOAD_EFFECTIVENESS 20000
#define MANUAL_LOAD 1
#define AUTO_LOAD 0
#define AM 0

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


uint32_t pram(uint32_t vram){
    return (vram - RAM_BASE);
}

void load_memory(char* filename, uint32_t* M){   
    FILE *fp = fopen(filename, "rb");  
    assert(fp);
    size_t loaded_instr = fread(M, sizeof(uint32_t), MEMORY_LOAD_EFFECTIVENESS, fp);
    fclose(fp);

    printf("--LOAD %zu AMOUNTS OF INSTR TO M[]\n", loaded_instr);
}

// lui + addi a1 0x80000000
// lui + addi a2 0xfe54ad32
// sw a1 100 a2  (write a2 to a1+100)
// sb a1 104 a2 
// lw a3 a1 100 (read ram[a1+100] to a3)
// lbu a4 a1 100 
// ebreak
void load_program(uint32_t* ram) {
    // 1. lui a1, 0x80000 -> a1 = 0x80000000
    ram[0] = 0x800005b7; 
    
    // 2. lui a2, 0xfe54b + addi a2, a2, -718 -> a2 = 0xfe54ad32
    ram[1] = 0xfe54b637; 
    ram[2] = 0xd3260613; 

    // 3. sw a2, 101(a1) -> ram[0x80000000 + 100] = 0xfe54ad32
    ram[3] = 0x06c5a2a3;

    // 4. sb a2, 105(a1) -> ram[0x80000000 + 104] = 0x32 (a2的低8位)
    ram[4] = 0x06c584a3;

    // 5. lw a3, 101(a1) -> a3 = 0xfe54ad32
    ram[5] = 0x0655a683; 

    // 6. lbu a4, 102(a1) -> a4 = 0x00000032
    ram[6] = 0x0665c703;   

    // 7. ebreak
    ram[7] = 0x00100073; 
}

void tick(Vtop* top) {
    top->clk = 0;
    top->eval();   //
    top->clk = 1;
    top->eval();
}

uint32_t get_gpr(Vtop* top, int reg_id) {
    return top->dbg_reg[reg_id]; 
}

void prt_gprs(Vtop* top) {
    printf("PC: [0x%08x] | ", top->_pc); 
    
    for (int i = 0; i < 32; i++) {
        uint32_t val = get_gpr(top, i);
        printf("x%-2d: 0x%08x  ", i, val);
        if (i % 4 == 0) printf("\n                | "); 
    }
    printf("\n------------------------------------------------\n");
}

// support misaligned access
uint32_t ram_read(uint32_t addr, int amount) {
    uint32_t paddr = pram(addr);
    if (paddr >= RAM_SIZE * 4){
        // printf("invalid ram_read addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
        return 0;
    }
    uint8_t* _ram = (uint8_t*) ram;
    assert(amount <= 4 && amount >= 1);
    uint32_t result = 0;
    for (int i = 0; i < amount; i++) {
        result |= ((uint32_t)_ram[paddr + i]) << (8 * i);
    }
    return result;
}

// support misaligned access
void ram_write(uint32_t addr, uint32_t data, int amount) {
    uint32_t paddr = pram(addr);
    if (paddr >= RAM_SIZE * 4){
        printf("invalid ram_write addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
    }
    assert(amount <= 4 && amount >= 1);
    uint8_t* ram_byte = (uint8_t*)ram; 
    for (int i = 0; i < amount; i++) {
        ram_byte[paddr + i] = (uint8_t)(data >> (8 * i));
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
        uint32_t pc_idx = (top->_pc - RAM_BASE) >> 2; // fetch
        printf("pc_idx: %u\n", pc_idx);
        if (pc_idx >= RAM_SIZE || pc_idx < 0){
            printf("Invalid pc\n"); 
            break;
        }
        top->instr = ram[pc_idx];
        printf("Current instr: 0x%08x \n", ram[pc_idx]);

        tick(top);
        prt_gprs(top);

        printf("ram25: 0x%08x \n", ram[25]);
        printf("ram26: 0x%08x \n", ram[26]);

        top->halt(&endprog);
        top->get_decode_signals(
            &instr,
            &addi, &add, &jalr, &lui, &lw, &lbu, &sw, &sb, &ebreak,
            &rd, &rs1, &rs2,
            &immI, &immU, &immS,
            &wdata, &rdata1, &rdata2, &wen
        );
        prt_decode_info();

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
