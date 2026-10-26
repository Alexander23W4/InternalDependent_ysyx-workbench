#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

NPC_status Status = NPC_NORM;
uint64_t instr_amt = 0;

uint64_t alu_cycles = 0;
uint64_t branch_cycles = 0;
uint64_t load_cycles = 0;
uint64_t store_cycles = 0;
uint64_t jump_cycles = 0;
uint64_t csr_cycles = 0;
uint64_t system_cycles = 0;

uint64_t mcycle_reserve = 0;
uint64_t instr_cycles = 0;

/*
⭐: 对于复杂架构的cpu, 做 [仿真: 功能验证 & 性能统计] 要专注于架构本身, 验证架构本身的实现有没有问题, 性能怎么样. 
    与架构无关验证用 简单架构的cpu/简易模拟器 来实现.

⭐: 功能验证: 在确定整个环境&tb没有问题的情况下, 验证流水线rtl
    性能统计: 统计流水线相关性能, 流水线阻塞..  之前的性能计数器只有一个总CPI是和架构相关的.

⭐: 我们现在有多周期处理器和多周期的仿真环境, 所以与高级别架构无关的验证/测试统统用多周期处理器进行

由于流水线上一次有很多个指令, 那么我只需要截取一个地方, 所有指令都会通过这个地方, 而且是顺序通过, 且能够从这里获得对齐的 pc instr next_pc
所以trace只能是截取到EXU
要让EXU给verilator传一个信号, 代表EXU执行出来了



仿真的目的是验证dut的正确性, 所以需要能够运行trace和difftest
目的是找到合适的时机取写trace和difftest


还要能够统计一些我们关心的硬件运行相关的数据, 比如各种性能计数器, 方便我们进行性能优化
这里面性能计数器分为: 与CPU架构相关的统计 和 与CPU架构无关的统计(包括针对外设的性能统计)

⭐: 对于前者, 我们实现.  对于后者, 我们用简单架构的cpu/简易模拟器(e.g.cachesim)实现


############
现在的设计是不停tick, 每次tick从dut读取信号, 根据信号判断dut的状态
对于流水线, 我沿用这种方法: 

1. 在每次EXU in_valid && in_ready握手之后, 下一个周期拉高信号, 这个周期内new_pc已经算出来了, 在这里进行trace的更新
2. 
*/


void exec_once(){
    
    pc = cpu.pc;   // 存下这个周期的pc;
    mcycle_reserve = cpu.mcycle;

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

    instr_cycles = cpu.mcycle - mcycle_reserve;
    cal_instr_cycles();
    clear_event_flag();
    


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
