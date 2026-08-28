#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

NPC_status Status = NPC_NORM;

void exec_once(){
    // fetch
    uint32_t pc_idx = (top->_pc - RAM_BASE) >> 2; 
    // printf("pc: 0x%8x  ", top->_pc);
    // printf("pc_idx: %u\n", pc_idx);

    if (pc_idx >= RAM_SIZE || pc_idx < 0){
        printf("%s", ANSI_FMT("Fetch Fault, INVALID PC.\n", ANSI_FG_RED));
        Status = NPC_CRASH;
    }

    top->instr = ram[pc_idx];
    // printf("Current instr: 0x%08x \n", ram[pc_idx]);
    

    pc = top->_pc;   // 存下这个周期的pc;
    // operation a period  
    tick();

    rep_cpu();

#if TRACE_ENABLE
    trace();
#endif

#if DIFF_TEST_ENABLE

    if(diff_flag == 0){
        init_difftest(diff_so_file, ram, img_size, 1);
        diff_flag = 1;
    }
    else{
        difftest_step();
    }
#endif

#if WATCHPOINT_ENABLE
    check_wp(pc);
#endif


    // check if end
    top->halt(&endprog);

    if(endprog){
        Status = NPC_END;
        printf("%s", ANSI_FMT("Hit ebreak instr, program end.\n", ANSI_FG_YELLOW));
    }
}