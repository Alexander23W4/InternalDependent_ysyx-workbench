#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
Iteration:
    substitute all of the verilog operator symbols to hardware model
    implement IOE (optional)

    trace
    sdb

    print all "status parameters"
*/

using namespace std;
int endprog = 0;
int ram_op = 0;
uint32_t* ram = NULL;    
CPU_state cpu = {};
size_t img_size;
int diff_flag = 0;
uint32_t pc = 0;
bool batch_mode = false;
Vtop* top;

I_ring_buf ring = {.amt = 0};


// diliver .bin -> argv[1] 
int main(int argc, char** argv) {

    top = new Vtop;
    svSetScope(svGetScopeFromName("TOP.top"));

//  init
    _init(argc, argv, top);


//  exec
    main_loop(top);


//  end
    end_process(top);
    
    return 0;
}
