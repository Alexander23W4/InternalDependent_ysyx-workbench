#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

// abstract runtime environment to lib
// we call this set of APIs an abstract computer.
/*
AM = TRM + IOE + CTE + VME + MPE
TRM (Turing Machine) - Turing machine, the simplest runtime environment, 
  provides basic computing functionality for programs.

IOE (I/O Extension) - Input and output extension, 
  providing the program with the ability to input and output.

CTE (Context Extension) - Context extension, providing context management capabilities for programs.

VME (Virtual Memory Extension) - Virtual memory extension, providing programs with the ability to manage virtual memory.

MPE (Multi-Processor Extension) - Multi-processor extension, 
providing programs with the ability to communicate across multiple processors 
(MPE is beyond the scope of the ICS course and will not be covered in PA)

*/

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

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
