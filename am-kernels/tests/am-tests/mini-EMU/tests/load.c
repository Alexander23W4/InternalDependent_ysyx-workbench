#include "../src/config.h"   


void load_memory(char* filename, int32_t* M) {
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

int main(void){
    int32_t* M = (int32_t*)malloc(MEMORY_AMOUNT); 
    if (M == NULL) {
        perror("malloc failed");
        exit(1);
    }
    printf("DISTRIBUTED %zu BYTES (%.1f KB)\n", 
       MEMORY_AMOUNT * sizeof(int32_t), 
       MEMORY_AMOUNT * sizeof(int32_t) / 1024.0);


    load_memory(INSTR_SOURCE, M);
    for (int i = 0; i < 100000; i++)
    {
        printf("%d:%8x\n", i, M[i]);
    }

    free(M);
    return 0;
}