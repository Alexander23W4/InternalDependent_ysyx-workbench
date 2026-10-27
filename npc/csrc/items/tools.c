#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

char* diff_so_file = NULL; 

#ifdef WAVE_TRACE

VerilatedVcdC *wave_tfp = NULL;
uint64_t       wave_cycle = 0;        // 已经跑了多少个完整 CPU 周期

static uint64_t wave_start = 0;
static uint64_t wave_end   = 0;       // 0 = 不限制
static uint64_t wave_half  = 1;       // 半个 CPU 周期占几个时间单位(vcd 里 1 单位 = 1ps)
static int      wave_stop_reported = 0;

void wave_init() {
    const char *file  = getenv("WAVE_FILE");  if (file  == NULL) file = "wave.vcd";
    const char *s_str = getenv("WAVE_START"); if (s_str != NULL) wave_start = strtoull(s_str, NULL, 0);
    const char *e_str = getenv("WAVE_END");   if (e_str != NULL) wave_end   = strtoull(e_str, NULL, 0);
    const char *h_str = getenv("WAVE_HALF_PERIOD"); if (h_str != NULL) wave_half = strtoull(h_str, NULL, 0);
    if (wave_half == 0) wave_half = 1;

    Verilated::traceEverOn(true);
    wave_tfp = new VerilatedVcdC;
    top->trace(wave_tfp, 99);      // 99 = 递归 dump 所有层次
    wave_tfp->open(file);

    if (!wave_tfp->isOpen()) {
        printf("[WAVE] cannot open %s, waveform disabled\n", file);
        delete wave_tfp;
        wave_tfp = NULL;
        return;
    }
    printf("[WAVE] dump -> %s, CPU cycles [%lu, ", file, (unsigned long)wave_start);
    if (wave_end) printf("%lu]", (unsigned long)wave_end);
    else          printf("end]");
    printf(", CPU period = %lu ps\n", (unsigned long)(wave_half * 2));
}

void wave_close() {
    if (wave_tfp != NULL) {
        wave_tfp->close();
        delete wave_tfp;
        wave_tfp = NULL;
        printf("[WAVE] waveform closed\n");
    }
}

void wave_dump() {
    if (wave_tfp == NULL) return;
    if (wave_cycle < wave_start) return;
    if (wave_end != 0 && wave_cycle >= wave_end) return;
    wave_tfp->dump(Verilated::time());
}

// 窗口跑满了就自动收工: 这样 rt-thread 那种"跑完停在 shell 不退出"的程序也能用 make trace.
// 会走一遍正常的 end_process()(打性能报告 + final), 所以波形文件是完整关闭的.
static void wave_check_auto_stop() {
    if (wave_tfp == NULL || wave_end == 0) return;
    if (wave_cycle < wave_end) return;
    if (wave_stop_reported) return;
    wave_stop_reported = 1;
    printf("[WAVE] reached WAVE_END=%lu cycles, stopping simulation\n", (unsigned long)wave_end);
    end_process();
    exit(0);
}

#else   // !WAVE_TRACE

void wave_init()  {}
void wave_close() {}
void wave_dump()  {}
static void wave_check_auto_stop() {}

#endif  // WAVE_TRACE


void tick() {
    top->clock = 0;
    top->eval();   //
#ifdef WAVE_TRACE
    wave_dump();                       // clock 低电平这一拍
    Verilated::timeInc(wave_half);
#endif
    top->clock = 1;
    top->eval();
#ifdef WAVE_TRACE
    wave_dump();                       // clock 高电平这一拍
    wave_cycle++;
    Verilated::timeInc(wave_half);
    wave_check_auto_stop();
#endif
}

void error_handler(){
    // 出错时先把 CPU 状态读出来, 这样后面 final_check()/prt_gprs() 打出的
    // PC 和寄存器才是"出错那一刻"的值, 而不是上一次 exec_once 留下的旧值
    top->debug_read_all((int *)cpu.gpr, (int *)&cpu.pc, (int *)&cpu.mstatus, (int *)&cpu.mepc,
                        (int *)&cpu.mcause, (int *)&cpu.mtvec, (long long *)&cpu.mcycle, &instr);
    Status = NPC_CRASH;
    if(ifu_error){
        printf("%s", ANSI_FMT("IFU_error\n", ANSI_FG_RED));
    }
    else if(lsu_error){
        printf("%s", ANSI_FMT("LSU_error\n", ANSI_FG_RED));
    }
    else if(master_validation_error){
        printf("%s", ANSI_FMT("IFU visit unexpected addr\n", ANSI_FG_RED));
    }
}



void final_check(){
    if(Status == NPC_QUIT){
        printf("%s", ANSI_FMT("\n[QUIT]\n", ANSI_FG_YELLOW));
    }
    else if(cpu.gpr[10] != 0 || Status == NPC_CRASH){   
        printf("%s", ANSI_FMT("\n[HIT BAD TRAP]\n", ANSI_FG_RED));
        prt_gprs();
    }
    else{
        printf("%s", ANSI_FMT("\n[HIT GOOD TRAP]\n", ANSI_FG_GREEN));
    }
}


void prt_gprs() {
    printf("Instr AMT: %d\n", instr_amt);
    printf("PC: [0x%08x]\n", cpu.pc); 
    printf("Instr: 0x%08x\n", instr);
    
    int count = 0;
    for (int i = 0; i < 32; i++) {
        uint32_t val = cpu.gpr[i];
        printf("x%-2d: 0x%08x  ", i, val);
        count++;
        if (count % 2 == 0) printf("\n"); 
    }
    printf("\n");
    printf("mtvec:   0x%08x\n", cpu.mtvec);
    printf("mepc:    0x%08x\n", cpu.mepc);
    printf("mcause:  0x%08x\n", cpu.mcause);
    printf("mstatus: 0x%08x\n", cpu.mstatus);
    printf("mcycle: %" PRIu64 "\n", cpu.mcycle);
}



void statistical_print(){
    printf("[CPI] %.2ld\n", cpu.mcycle / instr_amt);
}


