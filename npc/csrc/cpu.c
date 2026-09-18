#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

NPC_status Status = NPC_NORM;
uint64_t instr_amt = 0;

void exec_once(){
    
    pc = cpu.pc;   // 存下这个周期的pc;

    // 先运行到UDPC, 停下, 这样不会一开始reset之后就被卡住, 然后再运行一个周期停到FETCH, 获得新的pc值 (此时仍未旧的 instr)
    while(!period_end){
        tick();
        top->check_end(&period_end);
        top->check_error(&ifu_error, &lsu_error, &master_validation_error);
        if(ifu_error || lsu_error || master_validation_error){
            error_handler();
            return;
        }
    }
    if(period_end) period_end = 0;
    tick();
    instr_amt++;

    // 读取cpu的状态
    // 注: DPI 导出函数 debug_read_all 的形参是 int*/long long*, 而 CPU_state 里存的是
    //     uint32_t/uint64_t, C++ 下不能隐式转换, 所以统一转一下指针类型
    top->debug_read_all((int *)cpu.gpr, (int *)&cpu.pc, (int *)&cpu.mstatus, (int *)&cpu.mepc,
                        (int *)&cpu.mcause, (int *)&cpu.mtvec, (long long *)&cpu.mcycle, &instr);


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
