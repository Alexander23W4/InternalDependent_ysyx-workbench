#include "VT_ins_li.h"
#include "verilated.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <algorithm>

vluint64_t sim_time = 0;

double sc_time_stamp() { return sim_time; }

void tick(VT_ins_li* top) {
    top->clk = 0;
    top->eval();
    sim_time++;

    top->clk = 1;
    top->eval();
    sim_time++;
}

// 生成一个 0~3 的寄存器索引
int get_unique_rd() {
    return rand() % 4;
}

// 生成一个 4-bit 随机立即数
int get_imm() {
    return rand() % 16;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    srand(time(NULL));

    VT_ins_li* top = new VT_ins_li;

    // -------- reset --------
    top->en = 0;
    tick(top);
    tick(top);
    top->en = 1;

    const int total_inst = 10;   // 执行10条立即数指令
    int inst_count = 0;

    // 初始化第一条随机指令
    top->rd  = get_unique_rd();
    top->imm = get_imm();

    while (inst_count < total_inst) {
        tick(top);

        // 打印状态
        std::cout
            << "cycle=" << sim_time/2
            << " rd=" << (int)top->rd
            << " imm=" << (int)top->imm
            << " finish=" << (int)top->finish
            << std::endl;

        // 打印 RAM
        std::cout
            << "RAM: [0]=" << (int)top->dbg0
            << " [1]=" << (int)top->dbg1
            << " [2]=" << (int)top->dbg2
            << " [3]=" << (int)top->dbg3
            << std::endl;

        std::cout << "-------------------" << std::endl;

        // 如果指令完成了，生成下一条随机指令
        if (top->finish) {
            top->rd  = get_unique_rd();
            top->imm = get_imm();
            inst_count++;
        }
    }

    delete top;
    return 0;
}