#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
// in src/$ISA, must implement all of the functions defined in am/include/am.h

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);   // call exception process call back function
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
  la t0, __am_asm_trap   把函数的地址加载到通用寄存器 t0 中 (对应 "r")
  csrw mtvec, t0         把 t0 的值写入控制寄存器 mtvec (对应 %0)
  */
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));   //  set the exception entry address to the mtvec register, jump to __am_asm_trap

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
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
