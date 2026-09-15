#include <stdint.h>
#include <stdio.h>

uint32_t mcycle = 0;
uint32_t mcycleh = 0;

void circular(uint8_t n){
    uint8_t  temp = n;
    while(temp--){
        printf("%d: Bury me like a hurricane.\n", temp);
        asm volatile("csrr %0, mcycle" : "=r"(mcycle));
        asm volatile("csrr %0, mcycleh" : "=r"(mcycleh));
        uint64_t cycle = ((uint64_t)mcycleh << 32 | mcycle);
        printf("Cycle: %d\n", cycle);
    }
}

int main(){
    circular(100);
    return 0;
}

