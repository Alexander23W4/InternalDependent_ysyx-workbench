#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

// 命令行里的 .bin 路径
static char *image_path = NULL;
NPC_status Status = NPC_NORM;
uint64_t instr_amt = 0;    
int new_instr = 0;
int wen = 0;

CPU_state cpu = {};
CPU_state d_status = {};
int ifu_error = 0;
int lsu_error = 0;
int master_validation_error = 0;
int endprog = 0; 
int instr = 0;

void _init(int argc, char** argv){
    parse_args(argc, argv);  

    load_flash(image_path); 

    reset();   

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
            case 1:                          // ⭐ 非选项参数: AM 生成的 .bin 路径
                image_path = optarg;         // (getopt 用了前导 '-', 非选项会以 o==1 返回)
                break;
        }
    }
}    




void reset(){
    top->reset = 1;
    top->ref_rst = 1;

    for (int i = 0; i < 20; i++) {
        tick();
        ref_tick();
    }
    top->ref_rst = 0;
    top->reset = 0;
    top->debug_read_all((int *)cpu.gpr, (int *)&cpu.pc, (int *)&cpu.mstatus, (int *)&cpu.mepc,
                        (int *)&cpu.mcause, (int *)&cpu.mtvec, (long long *)&cpu.mcycle, &instr);

    printf("Reset Released. Starting execution...\n");
}

void main_loop(){   // 如果碰到 NPC_END或者NPC_CRASH都要自觉return出去
    do{
        tick();
        top->check_halt(&endprog);
        // 取EXU的
        top->debug_read_all((int *)cpu.gpr, (int *)&cpu.pc, (int *)&cpu.mstatus, (int *)&cpu.mepc,
                        (int *)&cpu.mcause, (int *)&cpu.mtvec, (long long *)&cpu.mcycle, &instr);    // 这里的p取的是exu的pc, 所以这里截取的流水线是exu接收到新instr时
        top->check_error(&ifu_error, &lsu_error, &master_validation_error);
        // EXU新收一个instr, 算作一个新instr
        top->check_new_instr(&new_instr);
        top->check_wen(&wen);

        if(new_instr){
            printf("PC: [0x%08x]\n", cpu.pc); 
            // prt_gprs();    // 截取exu, 能够输出每一个instr对应的instr, pc, 但是gpr不一定是该instr对应的
            instr_amt++;   // 截取exu的意义, 统计instr数.  
        }
        if(ifu_error || lsu_error || master_validation_error){
            error_handler();
            return;  // 这里直接return出去, 结束仿真
        }
        if(endprog){
            Status = NPC_END;
            printf("%s", ANSI_FMT("Hit ebreak instr, program end.\n", ANSI_FG_YELLOW));
        }

    #if DIFFTEST

        if(wen){   // 这里进行difftest
            tick();  // 再下一个周期, 才能够写回
            top->difftest_read_gpr((int *)d_status.gpr, (int *)&d_status.pc);   // DPI 的签名是 int* / int*, pc 要取地址
            pipeline_difftest_step();  // 驱动ref行进到位并且进行status的比较.  这里的ref不用nemu, 用单周期cpu
        }

    #endif


    } while(!endprog);
}


void end_process(){
    final_check();
    statistical_print();   // 性能统计输出

    wave_close();      

    top->final();
    delete top;
}