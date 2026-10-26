#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"



/*
⭐: 对于复杂架构的cpu, 做 [仿真: 功能验证 & 性能统计] 要专注于架构本身, 验证架构本身的实现有没有问题, 性能怎么样. 
    与架构无关验证用 简单架构的cpu/简易模拟器 来实现.

⭐: 功能验证: 在确定整个环境&tb没有问题的情况下, 验证流水线rtl
    性能统计: 统计流水线相关性能, 流水线阻塞..  之前的性能计数器只有一个总CPI是和架构相关的.

⭐: 我们现在有多周期处理器和多周期的仿真环境, 所以与高级别架构无关的验证/测试统统用多周期处理器进行




仿真的目的是验证dut的正确性, 所以需要能够运行difftest
目的是找到合适的时机取写difftest


还要能够统计一些我们关心的硬件运行相关的数据, 比如各种性能计数器, 方便我们进行性能优化
这里面性能计数器分为: 与CPU架构相关的统计 和 与CPU架构无关的统计(包括针对外设的性能统计)

⭐: 对于前者, 我们实现.  对于后者, 我们用简单架构的cpu/简易模拟器(e.g.cachesim)实现


############
现在的设计是不停tick, 每次tick从dut读取信号, 根据信号判断dut的状态
对于流水线, 我沿用这种方法: 


*/


void exec_once(){

    
#if DIFF_TEST_ENABLE

    if(diff_flag == 0){
        init_difftest(diff_so_file, ram, img_size, 1);
        diff_flag = 1;
    }
    else{
        difftest_step();
    }
#endif

}
