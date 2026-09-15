#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

// 命令行里的 .bin 路径(见 parse_args 的 case 1), 装载 MROM 时要用
static char *image_path = NULL;

void _init(int argc, char** argv){

    // 仿真环境启动:
    parse_args(argc, argv);  // @brief

    // load_mrom(image_path);   
    load_flash(image_path); 

    reset();    // 按理来说这里reset pc到 MROM, 启动 bootloader, 后续跟随状态机运行就可以了 


    // features启动:
    init_sdb();

    #if TRACE_ENABLE
    init_disasm();
    ftrace_init(image_path);
    #endif

}


// ------------------------------------------------------------------------------------

void parse_args(int argc, char *argv[]) {
    assert(argc >= 2);
    printf("%s", ANSI_FMT("ARGS: \n", ANSI_FG_CYAN));
    for (int i = 0; i < argc; i++)
    {
        printf("Argument[%d]: %s\n", i, argv[i]);
    }

    static struct option last_options[] = {
        {"diff",     required_argument, NULL, 'd'},
        {"batch",    no_argument,       NULL, 'b'},
        {0,          0,                 NULL,  0 }
    };

    int o;
    while ((o = getopt_long(argc, argv, "-bd:h", last_options, NULL)) != -1) {
        switch (o) {
            case 'd':
                diff_so_file = optarg;
                printf("%s", ANSI_FMT("[NPC] Using Difftest REF: ", ANSI_FG_CYAN));
                printf("%s\n", diff_so_file);
                break;
            case 'b':
                batch_mode = true;
                break;
            case 1:                          // ⭐ 非选项参数: AM 生成的 .bin 路径
                image_path = optarg;         // (getopt 用了前导 '-', 非选项会以 o==1 返回)
                break;
        }
    }
}    


void reset(){
    // ⭐ ysyxSoC 里 CPU 的 reset 不是直接接顶层 reset, 而是:
    //      cpu.module.reset := SynchronizerShiftReg(reset, 10) || reset
    //    (见 ysyxSoC/src/SoC.scala, 生成出 _cpu_reset_chain_io_q | reset)
    //    它本意是"复位释放后再多压 10 拍", 但只有 reset 是被保持的【电平】时才成立:
    //    如果这里只拉高一个 tick, 那 10 拍后延迟链会再吐出一个单周期复位脉冲,
    //    CPU 就会在运行途中被复位一次 —— pc 回退到 0x20000000、instr 被清 0,
    //    之后 pc 与取回的指令彻底错位, 所有 pc 相关的值(auipc/jal 链接/跳转目标)全错。
    //    因此复位必须保持 >= 10 拍, 让延迟链吃满, 释放时两者一起落下。
    top->reset = 1;
    for (int i = 0; i < 20; i++) {
        tick();
    }
    top->reset = 0;
    printf("Reset Released. Starting execution...\n");
}



void end_process(){
    final_check();

    top->final();
    delete top;
}