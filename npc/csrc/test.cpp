#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/test.h"

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
uint32_t instr;
static int diff_flag = 0;
I_ring_buf ring_buf;


// diliver .bin -> argv[1] 
int main(int argc, char** argv) {

// ⭐ init()
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
    assert(img_size <= RAM_SIZE);

    #if TRACE_ENABLE
    init_disasm();
    #endif


// ----------------------------------------------------------------------

// ⭐ cpu-exec()
    while(1){

        // fetch
        uint32_t pc_idx = (top->_pc - RAM_BASE) >> 2; 
        // printf("pc: 0x%8x  ", top->_pc);
        // printf("pc_idx: %u\n", pc_idx);

        if (pc_idx >= RAM_SIZE || pc_idx < 0){
            printf("Invalid pc\n");
            break;
        }

        top->instr = ram[pc_idx];
        instr = ram[pc_idx];
        // printf("Current instr: 0x%08x \n", ram[pc_idx]);
        

        // operation a period  ⭐ exec_once()
        tick(top);

/*
    npc trace 的开发 process:
    
    总体来说, 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    首先每个周期定位ring的位置, 直接sprintf 往 那个buffer里面填充

    itrace: 每一个周期, 输出 _pc, instr(0x), diassemble 

    ftrace:

    mtrace:

    etrace:

    最终打开 ring_log.txt, 填入

*/
    #if TRACE_ENABLE
        // itrace
    /*
        trace file
        addr(pc) instr assembly 

    */  
        // top->check_ram_op(&ram_op);
        // get_itrace_line((uint32_t)(top->_pc), &ring_buf);
        // i_ring_buf_logout(&ring_buf);
        trace(top);
        
    #endif

    #if DIFF_TEST_ENABLE
        printf("Difftest circuiting.\n");
        cpu.pc = top->_pc;
        for (int i = 0; i < 32; i++) {
            cpu.gpr[i] = top->dbg_reg[i];
        }
        cpu.mcause = top->_mcause;
        cpu.mepc = top->_mepc;
        cpu.mstatus = top->_mstatus;
        cpu.mtvec = top->_mtvec;
        cpu.mcycle = (((uint64_t)(top->_mcycleh)) << 32) + (uint64_t)(top->_mcycle);


        if(diff_flag == 0){
            init_difftest(diff_so_file, ram, img_size, 1);
            diff_flag = 1;
        }
        else{
            difftest_step();
        }
    #endif


        // check end
        top->halt(&endprog);

        if(endprog){
            printf("Hit ebreak instr, program end.\n");
            break;
        }
    }


// ----------------------------------------------------------------------

    // final check
    final_check(top);

#if TRACE_ENABLE
    close_trace_file();
#endif

    top->final();
    free(ram);
    delete top;
    return 0;
}
