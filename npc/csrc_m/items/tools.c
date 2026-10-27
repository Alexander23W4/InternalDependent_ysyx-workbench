#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

char* diff_so_file = NULL; 

/* ==========================================================================================
   ⭐ 波形(VCD)支持
      `make trace` 会用 -DWAVE_TRACE=1 把下面这段编进来, 并给 verilator 加 --trace;
      普通的 `make fasts` / `make run` 不带这个宏, 下面全是空函数, 一点开销都没有.

     为什么要在这里 advance 时间: verilator 是 --no-timing 编译的, 时间轴不会自己走,
     不调 timeInc 的话所有跳变都会挤在 t=0, 波形上根本看不出周期.

     ⭐ verilator 5.008 写出来的 vcd 头是 `$timescale 1ps`(不管命令行给了什么),
        所以这里每个半周期走 WAVE_HALF_PERIOD 个单位, 默认 500 -> 波形上
        CPU 时钟周期 = 1000ps, 正好等于 apb_delayer.v 里的 CPU_PERIOD.
        要改就在 make trace 时给 WAVE_HALF_PERIOD=... 
   ========================================================================================== */
#ifdef WAVE_TRACE

VerilatedVcdC *wave_tfp = NULL;
uint64_t       wave_cycle = 0;        // 已经跑了多少个完整 CPU 周期

static uint64_t wave_start = 0;
static uint64_t wave_end   = 0;       // 0 = 不限制
static uint64_t wave_half  = 500;     // 半个 CPU 周期占几个时间单位(vcd 里 1 单位 = 1ps)
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
    #if TRACE_ENABLE
        i_ring_buf_logout(&ring);
    #endif
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
    printf("PC: [0x%08x]\n", cpu.pc); 
    
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


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


uint32_t isa_reg_str2val(const char *s, bool *success) {
  if(s[0] != '$'){
    printf("NOT VALID REGISTER NAME, MUST START WITH $.\n");
    *success = false;
    return 0;
  }
  if(strcmp(s+1, "0") == 0){
    *success = true;
    return cpu.gpr[0];
  }
  if (strcmp(s+1, "pc") == 0) {
    *success = true;
    return cpu.pc;
  }
  for (int i = 0; i < sizeof(regs) / sizeof(const char*); i++)
  {
    if(strcmp(s+1, regs[i]) == 0){
      *success = true;
    //   printf("%s, register content: %d\n", s, cpu.gpr[i]);
      return cpu.gpr[i];
    }
  }
  printf("NO REGISTER MATCH.\n");
  *success = false;
  return 0;
}


