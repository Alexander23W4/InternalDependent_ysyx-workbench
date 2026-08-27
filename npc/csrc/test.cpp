#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/test.h"

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
static int diff_flag = 0;
uint32_t pc = 0;
bool batch_mode = false;

I_ring_buf ring = {.amt = 0};


// diliver .bin -> argv[1] 
int main(int argc, char** argv) {

    Vtop* top = new Vtop;
    svSetScope(svGetScopeFromName("TOP.top"));

//  init
    _init(argc, argv, top);


//  exec
    main_loop()


//  end
    end_process(top);
    
    return 0;
}
