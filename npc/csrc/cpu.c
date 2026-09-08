#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

NPC_status Status = NPC_NORM;

void exec_once(){

    if((top->instr & 0x7f) != 3){
        ram_read_last_pc = 0;
    }
    
    pc = cpu.pc;   // 存下这个周期的pc;

    // 一直运行直到这周期结束, pc更新    并且不断监测cpu是否有报错
    while(!period_end){
        tick();
        check_end(&period_end);
        check_error(&ifu_error, &lsu_error, &master_validation_error);
        if(ifu_error || lsu_error || master_validation_error){
            error_handler();
            return;
        }
    }

    // 读取cpu的状态
    debug_read_all(cpu.gpr, &cpu.pc, &cpu.mstatus, &cpu.mepc, &cpu.mcause, &cpu.mtvec, &cpu.mcycle, &instr);
    

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

#if DEVICE_ENABLE
    device_update();
#endif


    // check if end
    top->halt(&endprog);

    if(endprog){
        Status = NPC_END;
        printf("%s", ANSI_FMT("Hit ebreak instr, program end.\n", ANSI_FG_YELLOW));
    }
}