#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
修改流程:


*/

using namespace std;

// 待定
int ram_op = 0;
uint32_t* ram = NULL;   
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
