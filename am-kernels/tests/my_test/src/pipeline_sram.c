#include <stdint.h>

int main(){
    register uint32_t a5 asm("a5") = 0x1234;
    register uint32_t a3 asm("a3");
    __asm__ volatile(
        "addi sp, sp, -16\n\t"
        "addi a5, a5, 0x3d\n\t"
        "sh   a5, 12(sp)\n\t"
        "lh   a3, 12(sp)\n\t"
        "addi sp, sp, 16"
        : "+r"(a5), "=r"(a3) : : "memory");
    return (a3 == 0x1271) ? 0 : 1;   // 返回非 0 -> halt(ret) -> HIT BAD TRAP
}

