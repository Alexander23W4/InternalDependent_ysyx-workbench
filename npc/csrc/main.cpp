#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
现在trace 和 sdb(除了x和expr的访存) 应该都能正常使用
ram的访问除了 difftest 里面有一个 mem copy, 初始化的时候, 比较难搞, 现在difftest无法正常使用

功能验证, debug方面, 现在就剩一个dut-rtl本身出现问题, 如何debug

一种问题是指令的实现/dut的逻辑问题导致difftest错误     用difftest+波形 解决
另一种问题是流水线的时序问题导致卡死                   需要能够输出trace+波形看到底为什么卡死了

⭐: 如果dut卡住, ctrl-C退出时, 需要能够输出trace

⭐: 我需要把多周期的ysyxsoc移植过来, 包括verilator-C和RTL, 让makefile能够启动两种架构环境来 功能验证 & 性能统计
*/

using namespace std;

uint32_t pc = 0;

// verilator仿真环境整体流程控制
int endprog = 0; 
size_t img_size;
int diff_flag = 0;
bool batch_mode = false;

Vtop* top;               // 只有clock 和 reset

// verilator仿真环境所需的cpu状态
CPU_state cpu = {};
int instr = 0;

int ifu_error = 0;
int lsu_error = 0;
int master_validation_error = 0;

int period_end = 0;

I_ring_buf ring = {.amt = 0};


// diliver .bin -> argv[1] 
int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);   

    top = new Vtop;

    svScope cpu_scope = svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu");
    printf("[DPI] cpu scope = %s\n", cpu_scope ? svGetNameFromScope(cpu_scope) : "(NOT FOUND)");
    assert(cpu_scope != NULL);
    svSetScope(cpu_scope);

// 在复位之前开启波形
    wave_init();

//  init
    _init(argc, argv);


//  exec
    main_loop();


//  end
    end_process();
    
    return 0;
}

