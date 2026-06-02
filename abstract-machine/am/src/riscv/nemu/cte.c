#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
// in src/$ISA, must implement all of the functions defined in am/include/am.h

/*
  code  +  sources (global  stack  heap)     
  main  
*/

/*
Whole Structure of CTE: 
  OS-Context-Switch program(Host Context storage & switch)       
  OS-Event-Handler    [Code area]
  OS-Guest-Context_init   [Code area]

  Guest-Handler Program   [Code area]

  PCB (Stack   Context)     Program Code (Function)   [Stack area, Code area]
*/

/*
 cte_init()  set OS handle program, mtvec
 Set space for each process(PCB)
 prepare code for each process, package them
 init context for each process
*/

static Context* (*user_handler)(Event, Context*) = NULL;

const char *reg_names_rv32[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void print_context(struct Context *ctx) {
  if (ctx == NULL) {
    printf("[Context] Pointer is NULL!\n");
    return;
  }
  
  for (int i = 0; i < 32; i++) {
    printf("%s: %d  ", reg_names_rv32[i], ctx->gpr[i]);
    if ((i + 1) % 4 == 0) {
      printf("\n");
    }
  }
  printf("mcause  : %d\n", ctx->mcause);
  printf("mstatus : %d\n", ctx->mstatus);
  printf("mepc    : %d\n", ctx->mepc);
  printf("pdir    : %d\n", ctx->pdir);
}

// core exception handle function   (OS do some arrangement)
// when do process switch, change *c
Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    // !!! only deal with ev.event until now
    switch (c->mcause) {
      case 0xb: ev.event = EVENT_YIELD;
        c->mepc += 4;
        break;
      default: ev.event = EVENT_ERROR; break;
    }
    // print_context(c);
    c = user_handler(ev, c);   // call exception process guest call back function (Guest do some arrangement)
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

// Event(Context) -> specific callback function
// When an event occurs, CTE will call this callback function with the event and the associated context as arguments, 
// handing it over to the operating system for subsequent processing
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  /*
  la t0, __am_asm_trap   
  csrw mtvec, t0          // Direct Mode by default, set mtvec[1:0] to 00
  */ 
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));   //  set the exception entry address to the mtvec register, jump to __am_asm_trap

  // register event handler
  user_handler = handler;

  return true;
}



Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
   // write at the bottom of the stack
  Context* context = (Context *)((char *)kstack.end - sizeof(Context)); 

  context->mstatus = 0x1800;

  context->mepc = (uintptr_t)entry;

  for (int i = 0; i < NR_REGS; i++){ context->gpr[i] = 0; }
  context->gpr[2] = (uintptr_t)context;    // at beginning, point sp to Context, not the bottom of the stack 
  context->gpr[10] = (uintptr_t)arg;

  return context;
}

// trap operation, intentionally trigger trap (ecall)
void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}



bool ienabled() {
  return false;
}

void iset(bool enable) {
}
