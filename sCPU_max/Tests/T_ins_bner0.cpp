#include "VT_ins_bner0.h"
#include "verilated.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

vluint64_t sim_time = 0;

double sc_time_stamp() { return sim_time; }

void tick(VT_ins_bner0* top) {
    top->clk = 0;
    top->eval();
    sim_time++;

    top->clk = 1;
    top->eval();
    sim_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VT_ins_bner0* top = new VT_ins_bner0;

    // -------- reset --------
    top->rst = 1;
    top->en = 0;
    tick(top);
    tick(top);
    top->rst = 0;
    top->en = 1;

    top->rs2 = 2;  // 我们测试 R[2]

    const int max_cycle = 10;

    for(int i = 0; i < max_cycle; i++) {
        tick(top);

        std::cout
            << "cycle=" << sim_time/2
            << " rs2=" << (int)top->rs2
            << " finish=" << (int)top->finish
            << " update=" << (int)top->update
            << std::endl;

        std::cout << "RAM: [0]=" << (int)top->dbg0
                  << " [1]=" << (int)top->dbg1
                  << " [2]=" << (int)top->dbg2
                  << " [3]=" << (int)top->dbg3
                  << std::endl;

        std::cout << "-------------------" << std::endl;
    }

    delete top;
    return 0;
}

