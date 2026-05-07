#include "/home/wang/InternalDependent_ysyx-workbench/npc/test/test_c/test.h"

using namespace std;
int endprog = 0;
uint32_t* ram = NULL;
CPU_state cpu = {};
size_t img_size;
uint32_t instr;

void tick(Vtop* top) {
    top->clk = 0;
    top->eval();   //
    top->clk = 1;
    top->eval();
}

// diliver .bin -> argv[1]
int main(int argc, char** argv) {
    assert(argc >= 2);
    parse_args(argc, argv);

    Vtop* top = new Vtop;
    svSetScope(svGetScopeFromName("TOP.top"));
    
    // malloc ram
    ram = (uint32_t*)malloc(sizeof(uint32_t) * RAM_SIZE);
    assert(ram);

    // rst
    top->rst = 1;  
    tick(top);
    top->rst = 0; 
    printf("Reset Released. Starting execution...\n");

    // load code
    load_memory(argv[1], ram, &img_size);

    // difftest init
#if DIFF_TEST
    init_difftest(diff_so_file, ram, img_size, 1);
#endif
    
// ---------------------------------------------------------

    while(1){
        // fetch
        uint32_t pc_idx = (top->_pc - RAM_BASE) >> 2; 
        printf("pc_idx: %u\n", pc_idx);

        if (pc_idx >= RAM_SIZE || pc_idx < 0){
            printf("Invalid pc\n"); 
            break;
        }

        top->instr = ram[pc_idx];
        instr = ram[pc_idx];
        printf("Current instr: 0x%08x \n", ram[pc_idx]);
        
        // operation a period
        tick(top);

        #if DIFF_TEST
        cpu = {top->_pc, (uint32_t*)top->dbg_reg};
        difftest_step();
        #endif

        // check end
        top->halt(&endprog);

        if(endprog){
            printf("Hit ebreak instr, program end.\n");
            break;
        }
    }

    if(top->dbg_reg[10] != 0){   // after operation check
        printf("HIT BAD TRAP\n");
        printf("ERROR, PROGRAM ENDED, X0 is not equal to 0\n");
    }
    else{
        printf("HIT GOOD TRAP\n");
    }

    top->final();
    free(ram);
    delete top;
    return 0;
}
