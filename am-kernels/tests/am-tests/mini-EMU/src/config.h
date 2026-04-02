#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// make ARCH=native run

#define INSTR_SOURCE "./hex/v.hex"
#define _GPR_MASK 0x1F
#define OPERATING_CIRCLE_TERMINATION__MEM 6000
#define OPERATING_CIRCLE_TERMINATION__SUM 6000
#define GPR_AMOUNT 32
#define GENERAL_BIT_WIDTH 32
#define MEMORY_AMOUNT 0x40000000   
#define MEMORY_LOAD_EFFECTIVENESS 200000   // instr stored memory range

#define VRAM_BASE 0x20000000     
#define VRAM_SIZE 0x10000         
#define WIDTH 256   
#define HEIGHT 256    

void load_memory(char* filename, int32_t* M);
int add_ebreak(int32_t* M);
void print_binary_int32(int32_t num);
void output_elements(int circle, int next, int32_t* M);
int32_t imm_conbination__s_type(uint32_t code) ;
int32_t sign_extend(int num, int bit_width);
void draw(int32_t* VRAM);


int operate(int32_t* M, int32_t* VRAM);

// FEC22203
// fec22203