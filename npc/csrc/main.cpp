#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
修改流程:
先主要, 后feature (trace, difftest先不急)
把仿真的主干流程弄清楚

--> 启动:
读args  
直接reset初始化进入状态机, 无需load程序, 无需ram 
启动features(暂时不管)

--> main_loop, sdb的具体feature先不管, 只剩下exec_once

--> exec_once(只有这个跟cpu真正的运行相关联, 调用tick, 其他函数均没有可以操作rtl的接口, 其他函数只是为了其feature要读取cpu的状态, exec_once有义务正确读取这些状态): 

--> feature: 包含 trace  difftest  sdb
首先移除device和ram

现在trace 和 sdb(除了x和expr的访存) 应该都能正常使用
ram的访问除了 difftest 里面有一个 mem copy, 初始化的时候, 比较难搞, 现在difftest无法正常使用

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

    Verilated::commandArgs(argc, argv);   // 用于解决运行时plusargs功能报错的问题

    top = new Vtop;
    svSetScope(svGetScopeFromName("TOP.top"));

//  init
    _init(argc, argv);


//  exec
    main_loop();


//  end
    end_process();
    
    return 0;
}
