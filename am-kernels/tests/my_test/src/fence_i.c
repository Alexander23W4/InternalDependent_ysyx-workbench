/*
 * fence_i.c: 自修改代码(SMC) + fence.i 测试
 *
 * 测试思路:
 *   1) 在 SDRAM(.data, 可写且可执行)里手工拼出 3 条指令:
 *          addi a0, x0, 42
 *          addi a0, a0, 1
 *          ret
 *      通过函数指针调用它, 期望返回 43 (顺便把这条 cache line 取进 icache);
 *   2) 自修改: 把第 1 条指令的立即数 42 改成 100;
 *   3) 执行 fence.i, 让取指端丢弃旧的 icache 内容;
 *   4) 在 fence.i 后面再塞几条随便的指令(addi/add/...), 确认流水线照常工作;
 *   5) 再调用一次, 期望返回 101。
 *      如果 fence.i 没生效(比如被实现成 nop), 第二次还会返回 43 -> 测试失败。
 *
 * 返回值: 0 = PASS; 1 = 第一次调用结果不对; 2 = fence.i 之后没看到新指令。
 *
 * 编译运行(在 am-kernels/tests/my_test 下):
 *   make NAME=fence_i SRCS=./src/fence_i.c ARCH=riscv32e-ysyxsoc run
 */

#include <stdint.h>

/* ---- 几条指令的机器码, 避免依赖汇编器/内联汇编的寄存器分配 ---- */
#define INSTR_ADDI(rd, rs1, imm) \
    ((uint32_t)(0x13u | (((uint32_t)(rd) & 0x1fu) << 7) \
                       | (((uint32_t)(rs1) & 0x1fu) << 15) \
                       | (((uint32_t)(imm) & 0xfffu) << 20)))
#define INSTR_RET                0x00008067u      /* jalr x0, 0(ra) */

#define A0 10

/*
 * 放在 .data(链接脚本把它放在 SDRAM 0xa000_0000 起, 可写),
 * 而这个 CPU 的 PMA 允许从 SDRAM 取指, 所以这块内存既能写也能执行。
 * 64 字节对齐: 一条 icache line 装得下, 改一条指令只影响这一行。
 */
static uint32_t code_buf[8] __attribute__((aligned(64))) = {
    INSTR_ADDI(A0, 0,  42),   /* addi a0, x0, 42   <- 待会要改成 100 */
    INSTR_ADDI(A0, A0,  1),   /* addi a0, a0, 1 */
    INSTR_RET,                /* ret */
};

static inline void fence_i(void) {
    __asm__ volatile("fence.i" ::: "memory");
}

int main(void) {
    typedef int (*fn_t)(void);
    fn_t f = (fn_t)(void *)code_buf;

    /* 1) 改之前先跑一次: 42 + 1 = 43, 同时把这条 line 取进 icache */
    int before = f();
    if (before != 43) {
        return 1;
    }

    /* 2) 自修改: 把 42 改成 100 */
    code_buf[0] = INSTR_ADDI(A0, 0, 100);

    /* 3) fence.i: 让取指端看到新指令 */
    fence_i();

    /* 4) fence.i 后面再放几条随便的指令, 确认流水线还能正常取指/执行 */
    __asm__ volatile(
        "addi t0, x0, 7\n\t"
        "addi t1, x0, 9\n\t"
        "add  t2, t0, t1\n\t"
        "addi t2, t2, 0\n\t"
        ::: "t0", "t1", "t2", "memory");

    /* 5) 再跑一次: 100 + 1 = 101 */
    int after = f();
    if (after != 101) {
        return 2;
    }

    return 0;
}
