/*
BTFN算法branchsim:
比较btrace.txt没一行中的pc和next, 如果next<pc, 则next在后方(backward), 预测跳转taken(1).  如果next>=pc, 则next在前方(forward), 预测不跳转not taken(0)
然后比较预测值0/1和btrace.txt中的实际0/1是否跳转, 输出 预测跳转数&不跳转数(分别的比例)  还有 实际跳转数&不跳转数(分别的比例) 预测正确率 到 result/bs.txt
*/  

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include_m/config.h"   /* BTRACE_FILE */

#ifndef BTRACE_FILE
#define BTRACE_FILE "/home/wang/InternalDependent_ysyx-workbench/npc/btrace.txt"
#endif

#define BS_RESULT_FILE "/home/wang/InternalDependent_ysyx-workbench/npc/_my_tools/branchsim/result/bs.txt"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define MAX_TOK 64

int main(void) {
    FILE *fp = fopen(BTRACE_FILE, "r");
    if (fp == NULL) {
        fprintf(stderr, "[BTFNSIM] cannot open %s -- run NPC once to generate it\n", BTRACE_FILE);
        return 1;
    }

    uint64_t total       = 0;   // b-type 指令总数
    uint64_t pred_taken  = 0;   // 预测跳转的条数
    uint64_t pred_not    = 0;   // 预测不跳转的条数
    uint64_t act_taken   = 0;   // 实际跳转的条数
    uint64_t act_not     = 0;   // 实际不跳转的条数
    uint64_t correct     = 0;   // 预测正确的条数

    char line[512];
    while (fgets(line, sizeof(line), fp) != NULL) {
        /* btrace 一行 = pc + 汇编(可能含空格) + instr + next_pc + taken,
           所以按空白切 token, 头和尾 3 个 token 才是数字 */
        char *tok[MAX_TOK];
        int   n = 0;
        for (char *p = strtok(line, " \t\r\n"); p != NULL && n < MAX_TOK; p = strtok(NULL, " \t\r\n")) {
            tok[n++] = p;
        }
        if (n < 5) continue;                       // 空行/异常行

        uint32_t pc    = (uint32_t)strtoul(tok[0],   NULL, 16);
        uint32_t next  = (uint32_t)strtoul(tok[n-2], NULL, 16);
        int      taken = atoi(tok[n-1]);

        /* ---- BTFN 预测 ---- */
        int pred = (next < pc) ? 1 : 0;            // 往回跳 -> taken; 往前走 -> not taken

        total++;
        if (pred)  pred_taken++; else pred_not++;
        if (taken) act_taken++;  else act_not++;
        if (pred == taken) correct++;
    }
    fclose(fp);

    if (total == 0) {
        printf("[BTFNSIM] no branch read from %s (empty file?)\n", BTRACE_FILE);
        return 1;
    }

    double inv = 100.0 / (double)total;             // 百分比系数, 分母统一是分支总数

    printf("\n");
    printf("[BTFN_TOTAL]        %" PRIu64 "\n", total);
    printf("[BTFN_PRED_TAKEN]   %" PRIu64 " (%.2f%%)\n", pred_taken, (double)pred_taken * inv);
    printf("[BTFN_PRED_NOT]     %" PRIu64 " (%.2f%%)\n", pred_not,   (double)pred_not   * inv);
    printf("[BTFN_ACT_TAKEN]    %" PRIu64 " (%.2f%%)\n", act_taken,  (double)act_taken  * inv);
    printf("[BTFN_ACT_NOT]      %" PRIu64 " (%.2f%%)\n", act_not,    (double)act_not    * inv);
    printf("[BTFN_CORRECT]      %" PRIu64 " (%.2f%%)\n", correct,    (double)correct    * inv);
    printf("[BTFN_ACC]          %.2f%%\n", (double)correct * inv);

    FILE *rf = fopen(BS_RESULT_FILE, "a");
    if (rf != NULL) {
        fprintf(rf, "algorithm: BTFN (backward taken, forward not taken)\n");
        fprintf(rf, "btrace: %s\n", BTRACE_FILE);
        fprintf(rf, "total_branch      : %" PRIu64 "\n", total);
        fprintf(rf, "pred_taken        : %" PRIu64 " (%.2f%%)\n", pred_taken, (double)pred_taken * inv);
        fprintf(rf, "pred_not_taken    : %" PRIu64 " (%.2f%%)\n", pred_not,   (double)pred_not   * inv);
        fprintf(rf, "actual_taken      : %" PRIu64 " (%.2f%%)\n", act_taken,  (double)act_taken  * inv);
        fprintf(rf, "actual_not_taken  : %" PRIu64 " (%.2f%%)\n", act_not,    (double)act_not    * inv);
        fprintf(rf, "pred_correct      : %" PRIu64 " (%.2f%%)\n", correct,    (double)correct    * inv);
        fprintf(rf, "pred_accuracy     : %.2f%%\n", (double)correct * inv);
        fprintf(rf, "\n");
        fclose(rf);
    } else {
        fprintf(stderr, "[BTFNSIM] cannot append to %s (mkdir result?)\n", BS_RESULT_FILE);
    }

    return 0;
}
