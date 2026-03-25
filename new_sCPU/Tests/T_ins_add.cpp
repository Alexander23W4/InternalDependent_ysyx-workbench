#include "VT_ins_add.h"
#include "verilated.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <algorithm>

vluint64_t sim_time = 0;

double sc_time_stamp() { return sim_time; }

// 时钟上升沿+下降沿 tick
void tick(VT_ins_add* top) {
    top->clk = 0;
    top->eval();
    sim_time++;

    top->clk = 1;
    top->eval();
    sim_time++;
}

// 生成 0~3 的三个互不相同寄存器索引
std::array<int,3> get_unique_rs_rd() {
    std::array<int,4> pool = {0,1,2,3};
    std::random_shuffle(pool.begin(), pool.end());
    return {pool[0], pool[1], pool[2]};
}

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    srand(time(NULL));

    VT_ins_add* top = new VT_ins_add;

    // -------- reset --------
    top->rst = 1;
    top->en  = 0;
    tick(top);
    tick(top);
    top->rst = 0;
    top->en  = 1;

    const int total_inst = 10;   // 执行 10 条指令
    int inst_count = 0;

    // 保存下一条指令的寄存器索引
    int next_rs1=0, next_rs2=0, next_rd=0;
    bool new_inst_ready = false;

    // 初始化第一条随机指令
    auto reg_idx = get_unique_rs_rd();
    top->rs1 = reg_idx[0];
    top->rs2 = reg_idx[1];
    top->rd  = reg_idx[2];

    while (inst_count < total_inst) {

        tick(top);

        // 打印状态
        std::cout
            << "cycle=" << sim_time/2
            << " rs1=" << (int)top->rs1
            << " rs2=" << (int)top->rs2
            << " rd="  << (int)top->rd
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

        // 如果上一条指令 finish 了，生成下一条随机指令
        if (top->finish && !new_inst_ready) {
            auto next_reg_idx = get_unique_rs_rd();
            next_rs1 = next_reg_idx[0];
            next_rs2 = next_reg_idx[1];
            next_rd  = next_reg_idx[2];
            new_inst_ready = true;
            inst_count++;
        }

        // 当 finish 清零后，把下一条指令写入 top
        if (!top->finish && new_inst_ready) {
            top->rs1 = next_rs1;
            top->rs2 = next_rs2;
            top->rd  = next_rd;
            new_inst_ready = false;
        }
    }

    delete top;
    return 0;
}

