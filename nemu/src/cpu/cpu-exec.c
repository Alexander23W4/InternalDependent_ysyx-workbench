/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "/home/wang/My_ysyx-workbench/nemu/src/monitor/sdb/watchpoint.h"
#include "/home/wang/My_ysyx-workbench/nemu/src/monitor/sdb/expr.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};    // define in isa-def.h
uint64_t g_nr_guest_inst = 0;   // total run instr
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

// if wp change, state = NEMU_STOP
void check_wp(vaddr_t pre_pc){  // check_watchpoints
  WP* temp = get_head();
  bool success = true;
  uint32_t new_result = 0;
  while(temp){
    new_result = expr(temp->expression, &success);
    if(new_result != temp->result){   // if change, pause, output msg, return to sdb_mainloop()
      if(nemu_state.state == NEMU_RUNNING) nemu_state.state = NEMU_STOP;  
      printf("[WATCHPOINT] The value of expression %s is changed, at pc: 0x%x, previous: %u (0x%x), now %u (0x%x)\n", \
        temp->expression, pre_pc, temp->result, temp->result, new_result, new_result);
      temp->result = new_result;
    }
    temp = temp->next;  // check all wp before stop
  }
}

static void trace_and_difftest(Decode *_this, vaddr_t dnpc, vaddr_t pre_pc) {   // All watchpoints are then checked in a loop in the end of this func
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT   
  check_wp(pre_pc);
#endif
}


static void exec_once(Decode *s, vaddr_t pc) {    // execute once
  // ------------- execute circle start
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);  // *** all operate process loop, fetch decode operate update
  cpu.pc = s->dnpc;    // dynamic next pc, update pc to dynamic next pc

  // -------------- execute circle end
#ifdef CONFIG_ITRACE   // Trace
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;

#ifdef CONFIG_ISA_x86
  for (i = 0; i < ilen; i ++) {
#else
  for (i = ilen - 1; i >= 0; i --) {
#endif
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
#endif
}

static void execute(uint64_t n) {   // uint if n = -1, means max(uint64_t - 1)
  Decode s;
  for (;n > 0; n --) {  // run n times
    vaddr_t stored_pc = cpu.pc;
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;  // count ++

    trace_and_difftest(&s, cpu.pc, stored_pc);    // including check the watchpoint, if wp change, nemu_state = NEMU_STOP
    if (nemu_state.state != NEMU_RUNNING) break;  // of state == ..RUNNING, keep operate next instr

    IFDEF(CONFIG_DEVICE, device_update());
  }
}


/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {  // start state checking
    case NEMU_END: 
    case NEMU_ABORT: 
    case NEMU_QUIT:  
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;   // default set to RUNNING, if keep RUNNING, execute go through, single execute_loop & trace_and_difftest can change state
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;   // total time cost

  switch (nemu_state.state) {  // end state checking
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    case NEMU_END: 
    case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :  // END, and ret == 0
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),   // END, but ret != 0
          nemu_state.halt_pc);    // no break, so go through execute statistic()
      // fall through
    case NEMU_QUIT: statistic();
  }
}
/*
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };    // states

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NEMUState;
*/
