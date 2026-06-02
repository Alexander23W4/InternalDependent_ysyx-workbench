#include <am.h>
#include <klib-macros.h>
#include <klib.h>

#define STACK_SIZE (4096 * 8)

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

// Process Control Block
/*
低地址 (PCB的起点) ──────────────────────────────────────────────────────────► 高地址
┌─────────────────────────┬─────────────────────────────────────────────────┐
│  Context *cp (4 bytes)  │                                                 │
├─────────────────────────┴─────────────────────────────────────────────────┤
│  stack[0] .. stack[3]   │  stack[4] ....................... stack[4095]   │
└───────────────────────────────────────────────────────────────────────────┘
▲                         ▲                                                 ▲
│                         │                                                 │
pcb->cp 占用了这里        整个 stack[STACK_SIZE] 占满了这一整块空间         栈底(sp的初始起点)
*/

typedef union {
  uint8_t stack[STACK_SIZE];
  struct { Context *cp; };
} PCB;

// This build 2 * 4KB space at STACK AREA (in general stack, 2 tiny process stack)
static PCB pcb[2], pcb_boot, *current = &pcb_boot;   

// programs in both process 
static void f(void *arg) {
  while (1) {
    putch("?AB"[(uintptr_t)arg > 2 ? 0 : (uintptr_t)arg]);  // "?AB"[1] = 'A'
    for (int volatile i = 0; i < 100000; i++) ;
    yield();
  }
}

// guest-handler, should base on different event
static Context *schedule(Event ev, Context *prev) {
  current->cp = prev;  // update context of current process
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);   // change process
  return current->cp;  // return new process
}


int main() {
  cte_init(schedule);
  uint32_t mvendorid, marchid;

  asm volatile("csrr %0, mvendorid" : "=r"(mvendorid));
  asm volatile("csrr %0, marchid"    : "=r"(marchid));

  printf("mvendorid: %d\n", mvendorid);
  printf("marchid  : %d\n", marchid);

  // init context for each process
  pcb[0].cp = kcontext((Area) { pcb[0].stack, &pcb[0] + 1 }, f, (void *)1L);
  pcb[1].cp = kcontext((Area) { pcb[1].stack, &pcb[1] + 1 }, f, (void *)2L);
  yield();  
  panic("Should not reach here!");
}
