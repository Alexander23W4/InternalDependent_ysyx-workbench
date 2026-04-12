#include <iostream>
#include <iomanip>
#include <string>
#include <verilated.h>
#include "Vdecode.h"

// 辅助函数：格式化输出解码结果
void format_output(const char* label, bool add, bool addi, bool jalr, bool lui, bool lw, bool lbu, bool sw, bool sb, bool ebreak,
                  int rd, int rs1, int rs2, uint32_t immI, uint32_t immU, uint32_t immS) {
    
    std::cout << std::left << std::setw(14) << label << " | ";
    
    std::string signals = "";
    if (add)    signals += "ADD ";
    if (addi)   signals += "ADDI ";
    if (jalr)   signals += "JALR ";
    if (lui)    signals += "LUI ";
    if (lw)     signals += "LW ";
    if (lbu)    signals += "LBU ";
    if (sw)     signals += "SW ";
    if (sb)     signals += "SB ";
    if (ebreak) signals += "EBREAK ";
    
    std::cout << std::left << std::setw(20);

    printf("| rd:%2d rs1:%2d rs2:%2d | immI:0x%08x immU:0x%08x immS:0x%08x\n", 
            rd, rs1, rs2, immI, immU, immS);
}

void run_test(Vdecode* top, uint32_t instr, const char* test_name, 
              bool e_add, bool e_addi, bool e_jalr, bool e_lui, bool e_lw, bool e_lbu, bool e_sw, bool e_sb, bool e_ebreak,
              int e_rd, int e_rs1, int e_rs2, uint32_t e_immI, uint32_t e_immU, uint32_t e_immS) {
    
    std::cout << "\n>>> Test: " << std::left << std::setw(15) << test_name 
              << " (Instr: 0x" << std::hex << std::setw(8) << std::setfill('0') << instr << std::dec << ")" << std::endl;
    
    top->instr = instr;
    top->eval();
    
    format_output("Your Result", top->add, top->addi, top->jalr, top->lui, top->lw, top->lbu, top->sw, top->sb, top->ebreak,
                  top->rd, top->rs1, top->rs2, top->immI, top->immU, top->immS);
    
    format_output("Correct", e_add, e_addi, e_jalr, e_lui, e_lw, e_lbu, e_sw, e_sb, e_ebreak,
                  e_rd, e_rs1, e_rs2, e_immI, e_immU, e_immS);
}

int main(void) {
    Vdecode* top = new Vdecode;

    // --- 1. ADDI ---
    // 正数 15: 0x00f00513 -> immS拼凑结果应为 0x0000000a
    run_test(top, 0x00f00513, "ADDI Positive", 0, 1, 0, 0, 0, 0, 0, 0, 0, 10, 0, 15, 0x0000000f, 0x00f00000, 0x0000000a);
    // 负数 -1: 0xfff00513 -> 由于最高位是1, immS符号扩展后应为 0xffffffea (修正点!)
    run_test(top, 0xfff00513, "ADDI Negative", 0, 1, 0, 0, 0, 0, 0, 0, 0, 10, 0, 31, 0xffffffff, 0xfff00000, 0xffffffea);

    // --- 2. ADD ---
    run_test(top, 0x003100b3, "ADD Sample 1",  1, 0, 0, 0, 0, 0, 0, 0, 0,  1, 2,  3, 0x00000003, 0x00310000, 0x00000001);
    run_test(top, 0x00c58533, "ADD Sample 2",  1, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 12, 0x0000000a, 0x00c58000, 0x0000000a);

    // --- 3. LUI ---
    run_test(top, 0x123457b7, "LUI Positive",  0, 0, 0, 1, 0, 0, 0, 0, 0, 15, 8,  3, 0x00000123, 0x12345000, 0x0000012f);
    // 0x800007b7 -> 最高位是1, 导致immI和immS也会符号扩展
    run_test(top, 0x800007b7, "LUI Negative",  0, 0, 0, 1, 0, 0, 0, 0, 0, 15, 0,  0, 0xfffff800, 0x80000000, 0x00000000);

    // --- 4. LW ---
    run_test(top, 0x00412283, "LW Positive",   0, 0, 0, 0, 1, 0, 0, 0, 0,  5, 2,  1, 0x00000004, 0x00412000, 0x00000001);
    run_test(top, 0xffc52283, "LW Negative",   0, 0, 0, 0, 1, 0, 0, 0, 0,  5, 10, 28, 0xfffffffc, 0xffc52000, 0xffffffe5);

    // --- 5. SW ---
    run_test(top, 0x00612423, "SW Positive",   0, 0, 0, 0, 0, 0, 1, 0, 0,  8, 2,  6, 0x00000008, 0x00612000, 0x00000008);
    run_test(top, 0xfe612c23, "SW Negative",   0, 0, 0, 0, 0, 0, 1, 0, 0, 24, 2,  6, 0x00000018, 0xfe612000, 0xfffffff8);

    // --- 6. JALR ---
    run_test(top, 0x000100e7, "JALR Sample",   0, 0, 1, 0, 0, 0, 0, 0, 0,  1, 2,  0, 0x00000000, 0x00010000, 0x00000001);

    // --- 7. EBREAK ---
    run_test(top, 0x00100073, "EBREAK",        0, 0, 0, 0, 0, 0, 0, 0, 1,  0, 0,  1, 0x00000001, 0x00100000, 0x00000000);

    delete top;
    return 0;
}