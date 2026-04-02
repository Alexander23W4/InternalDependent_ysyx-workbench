#include "config.h"    

// make ARCH=native run
/*
mini-RV ISA   8 in total:

imm[11:0] rs1 000 rd 1100111 JALR
imm[11:0] rs1 000 rd 0010011 ADDI
0000000 rs2 rs1 000 rd 0110011 ADD
imm[31:12] rd 0110111 LUI
imm[11:0] rs1 010 rd 0000011 LW
imm[11:0] rs1 100 rd 0000011 LBU
imm[11:5] rs2 rs1 010 imm[4:0] 0100011 SW
imm[11:5] rs2 rs1 000 imm[4:0] 0100011 SB

000000000001 00000 000 00000 1110011 (0x00100073) EBREAK  
0x00000513   HALT
*/

uint32_t pc = 0;
int32_t GPR[GPR_AMOUNT] = {0};  // store signed number

int _operating_circles = 0;
int next = 0;  // next pc


int main(int argc, char** argv){
    // load the codes into memory
    int32_t* M = (int32_t*)malloc(MEMORY_AMOUNT); 
    if (M == NULL) {
        perror("ram malloc failed");
        exit(1);
    }
    printf("DISTRIBUTED %zu BYTES (%.1f KB)\n", 
       MEMORY_AMOUNT * sizeof(int32_t), 
       MEMORY_AMOUNT * sizeof(int32_t) / 1024.0);

    load_memory(INSTR_SOURCE, M);

    // init VRAM 
    int32_t* VRAM = (int32_t*)malloc(VRAM_SIZE); 
    if (VRAM == NULL) {
        perror("vram malloc failed");
        exit(1);
    }

    // add_ebreak;
    assert(add_ebreak(M));

    // operate until the very end
    while(next != -99){
        next = operate(M, VRAM);
        assert(next != -1);  // if == -1, fail to decode 
        pc = next;
        output_elements(_operating_circles, next, M);   // print all variants (GPRs) for each loop
        printf("next: %d\n", next);
        _operating_circles++;
    }

    // after operation check
    if(GPR[10] != 0){   
        printf("HIT BAD TRAP\n");
        printf("ERROR, PROGRAM ENDED, X0 is not equal to 0\n");
    }
    else{
        printf("HIT GOOD TRAP\n");
    }
    while(1){
        draw(VRAM);
    }
    free(M);
    return 0;
}

// 0000000 00000 00001 000 00001 1100111





