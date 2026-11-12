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


/*
新版本的仿真环境为了兼容difftest的wrapper(difftest_top), 将difftest_top固定设置为TOP

如果不用difftest, 可以不驱动ref_clk, 不影响dut仿真
*/

using namespace std;

size_t img_size;
int diff_flag = 0;

Vtop* top;               


// diliver .bin -> argv[1] 
int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);   

    top = new Vtop;

// 设置DPI调用的scope
    scope_init();

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



