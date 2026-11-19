/*
 * exception.c: 逐个触发 7 种异常(不含 ecall)
 *
 *   0  Instruction address misaligned   IFU
 *   1  Instruction access fault         IFU
 *   2  Illegal Instruction              IDU
 *   4  Load address misaligned          LSU
 *   5  Load access fault                LSU
 *   6  Store/AMO address misaligned     LSU
 *   7  Store/AMO access fault           LSU
 *
 * 现在还没有完整的软件支持, 这个测试只负责把异常触发出来, 供波形观察:
 *   - pc 是否跳到 mtvec; mepc 是否 = 出错指令地址; mcause 是否 = 对应编号;
 *   - 出错的 load 不写回, 出错的 store 不产生写事务;
 *   - 流水线清空后能否从 mtvec 重新取指。
 *
 * ⭐ 注意: 这里**没有用 GCC 的 &&label**(labels-as-values)。
 *    这个工具链(GCC 10.2.0)会把 &&label 优化成函数入口地址,
 *    导致异常返回后跳回 main 开头 -> 死循环(上一版就是这么挂住的)。
 *    改用“状态机+恢复函数”的写法: trap handler 把 mepc 设成 resume(),
 *    resume() 再调 dispatch() 继续跑下一项。
 *
 * 触发顺序: 0,2,4,6,7,5,1
 *   - 1 最后: IFU 的 !is_executable 分支会同时拉 master_validation_error,
 *     仿真会直接 NPC_CRASH;
 *   - 5 放倒数第二: 这颗 SoC 没有任何从设备会对读请求返回错误(没有 AXI4Error,
 *     SPI 的 wb_err_o 恒 0), 读未映射地址大概率是挂住而不是异常 5。
 *
 * 编译运行(在 am-kernels/tests/my_test 下):
 *   make NAME=exception SRCS=./src/exception.c ARCH=riscv32e-ysyxsoc run
 */

#include <stdint.h>
#include <stdio.h>

/* ---- trap handler / 状态机共用 ---- */
volatile uint32_t cause_log[16];
volatile int      cause_cnt = 0;
volatile int      step      = 0;
int               result    = 1;

extern void trap_entry(void);
static void dispatch(void);

/* 异常返回后从这里继续: 直接重新分发(不返回)
   used: 只被汇编里的 `la t0, resume` 引用, 不加 used 会被当成没用的 static 删掉 */
__attribute__((noinline, used)) static void resume(void) {
    dispatch();
}

/* 极简 trap handler, 只用 RV32E 允许的 x0~x15 */
__asm__(
    ".text\n\t"
    ".align 2\n\t"
    ".globl trap_entry\n\t"
    "trap_entry:\n\t"
    "    addi sp, sp, -32\n\t"
    "    sw   ra, 28(sp)\n\t"
    "    sw   t0, 24(sp)\n\t"
    "    sw   t1, 20(sp)\n\t"
    "    sw   t2, 16(sp)\n\t"
    "    sw   a0, 12(sp)\n\t"
    "    sw   a1,  8(sp)\n\t"
    "    sw   a2,  4(sp)\n\t"
    "\n\t"
    "    csrr a0, mcause\n\t"
    "    la   a1, cause_cnt\n\t"
    "    lw   a2, 0(a1)\n\t"
    "    la   t0, cause_log\n\t"
    "    slli t1, a2, 2\n\t"
    "    add  t0, t0, t1\n\t"
    "    sw   a0, 0(t0)\n\t"
    "    addi a2, a2, 1\n\t"
    "    sw   a2, 0(a1)\n\t"
    "\n\t"
    "    la   t0, resume\n\t"
    "    csrw mepc, t0\n\t"
    "\n\t"
    "    lw   a2,  4(sp)\n\t"
    "    lw   a1,  8(sp)\n\t"
    "    lw   a0, 12(sp)\n\t"
    "    lw   t2, 16(sp)\n\t"
    "    lw   t1, 20(sp)\n\t"
    "    lw   t0, 24(sp)\n\t"
    "    lw   ra, 28(sp)\n\t"
    "    addi sp, sp, 32\n\t"
    "    mret\n\t"
);

__attribute__((noinline)) static void dummy_target(void) { }

static void jump_to(uint32_t addr) {
    ((void (*)(void))addr)();
}

static const uint32_t expect_order[7] = {0, 2, 4, 6, 7, 5, 1};

static volatile uint32_t buf[4] = {0};
static volatile uint32_t sink;

static void dispatch(void) {
    for (;;) {
        switch (step) {
            case 0:                               /* 0: 指令地址非对齐 */
                step = 1;
                jump_to((uint32_t)dummy_target + 2);
                break;

            case 1:                               /* 2: 非法指令 */
                step = 2;
                __asm__ volatile(".word 0x00000000");
                break;

            case 2:                               /* 4: load 地址非对齐 */
                step = 3;
                sink = *(volatile uint32_t *)((uint32_t)buf + 1);
                (void)sink;
                break;

            case 3:                               /* 6: store 地址非对齐 */
                step = 4;
                *(volatile uint32_t *)((uint32_t)buf + 1) = 0x1234;
                break;

            case 4:                               /* 7: store 访问错误(写 XIP flash) */
                step = 5;
                *(volatile uint32_t *)0x30000000u = 0x1234;
                break;

            case 5:                               /* 5: load 访问错误(未映射, 可能挂住) */
                step = 6;
                sink = *(volatile uint32_t *)0x40000000u;
                (void)sink;
                break;

            case 6:                               /* 1: 指令访问错误 */
                step = 7;
                jump_to(0x0f000000u);             /* SRAM, PMA 不可执行 */
                break;

            default: {                            /* 结束: 检查结果 */
                int ok = (cause_cnt == 7);
                printf("[EXCEPTION] cause_cnt = %d\n", cause_cnt);
                for (int i = 0; i < cause_cnt && i < 16; i++) {
                    printf("  [%d] mcause = %d\n", i, (int)cause_log[i]);
                }
                for (int i = 0; i < 7 && i < cause_cnt; i++) {
                    if (cause_log[i] != expect_order[i]) ok = 0;
                }
                result = ok ? 0 : 1;
                return;
            }
        }
    }
}

int main(void) {
    uint32_t h = (uint32_t)trap_entry;
    __asm__ volatile("csrw mtvec, %0" :: "r"(h));
    dispatch();
    return result;
}
