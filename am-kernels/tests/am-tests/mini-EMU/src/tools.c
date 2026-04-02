#include "config.h"   
// @@
extern uint32_t pc;
extern int32_t GPR[GPR_AMOUNT];

void load_memory(char* filename, int32_t* M) { // @@
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("fopen");
        assert(0);
    }
    int32_t instr;
    size_t i = 0;
    while (fscanf(fp, "%x", &instr) == 1) {
        M[i++] = instr;
        if (i >= MEMORY_LOAD_EFFECTIVENESS) {
            break;
        }
    }
    fclose(fp);
    printf("--LOAD %zu INSTR TO M[]\n", i);
}

int add_ebreak(int32_t* M){
    for (size_t i = 0; i < MEMORY_LOAD_EFFECTIVENESS; i++)  
    {
        if(M[i] == 0x00000513){
            M[i + 1] = 0x00100073;
            return 1;
        }
    }  
    return 0;
}

void print_binary_int32(int32_t num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");  
    }
    printf("\n");
}


void output_elements(int circle, int next, int32_t* M){     // &&&
    printf("---%d---", circle);
    for(int i = 0; i < GPR_AMOUNT; i++){    // scan gpr
        printf("GPR %d: %d\n", i, GPR[i]);
    }
    printf("NEXT: %d\n", next);   // next pc
    if(next != -99){
        printf("NEXT INSTR: ");   // next instr
        print_binary_int32(M[next >> 2]);
    }
    printf("\n\n");
}

int32_t imm_conbination__s_type(uint32_t code) {   // combine two parts of imm
    int imm11_5 = (code >> 25) & 0x7F;    // bit[31:25]
    int imm4_0 = (code >> 7) & 0x1F;      // bit[11:7]      
    
    return (imm11_5 << 5) | (imm4_0);  
}


int32_t sign_extend(int num, int bit_width) {    // &&&  

    int32_t result;
    int signed_bit = (num >> (bit_width - 1)) & 1;  // get signed bit 
    if(signed_bit == 0){
        result = num | 0x00000000;   // number itself + extend 0
    }
    else{
        result = ((0xFFFFFFFF >> bit_width) << bit_width) | num;  // law bit_width bits remains 0, others->1
    }
    return result;
}
