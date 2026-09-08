#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

void _init(int argc, char** argv){

    // 仿真环境启动:
    parse_args(argc, argv);  // @brief

    reset();    // 按理来说这里reset pc到 MROM, 启动 bootloader, 后续跟随状态机运行就可以了 


    // features启动:
    init_sdb();

    #if TRACE_ENABLE
    init_disasm();
    ftrace_init(argv[1]);
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
        }
    }
}


void reset(){
    top->reset = 1;  
    tick();
    top->reset = 0; 
    printf("Reset Released. Starting execution...\n");
}



void end_process(){
    final_check();

    top->final();
    delete top;
}