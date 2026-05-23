#include <amtest.h>
// yield test

// ioe_init, cte_init, run hello_intr() (ecall * 10000000)

// Guest exception arrangement function, do something for different mcause
Context *simple_trap(Event ev, Context *ctx) {
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      putch('t'); break;
    case EVENT_IRQ_IODEV:
      putch('d'); break;
    case EVENT_YIELD:
      putch('y'); break;
    default:
      panic("Unhandled event"); break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");

  io_read(AM_INPUT_CONFIG);

  iset(1);

  while (1) {
    for (volatile int i = 0; i < 1000; i++) ;
    yield();  // ecall
  }
}
