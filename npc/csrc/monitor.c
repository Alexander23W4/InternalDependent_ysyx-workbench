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
    top->reset = 1;
    for (int i = 0; i < 20; i++) {
        tick();
    }
    top->reset = 0;
    printf("Reset Released. Starting execution...\n");
}



void end_process(){
    final_check();
    final_print();

    wave_close();      // ⭐ 关波形文件: 不 close 的话 vcd 没写尾巴, gtkwave 可能读不全

    top->final();
    delete top;
}