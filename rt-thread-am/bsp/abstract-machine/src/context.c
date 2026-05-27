#include <am.h>
#include <klib.h>
#include <rtthread.h>

/*
-> Build stack for each process, init their registers (GPR CSR) as context (mepc --> code, sp, a0)
-> Process switch program for OS (the call back funcion of ecall), push & pull, switch 
*/

Context* current;
Context* next;
bool _store_current_context = false;

// trap.S ->  __am_irq_handle -> ev_handler
static Context* ev_handler(Event e, Context *c) {
  switch (e.event) {
    case EVENT_YIELD:    // event is ISA indenpendent
    if(_store_current_context){
      current = c;
      _store_current_context = false;
    }
      c = next;  // switch to
      break;

    default: printf("Unhandled event ID = %d\n", e.event); assert(0);
  }
  return c;
}

void __am_cte_init() {
  cte_init(ev_handler);
}


/*
The rt_ubase_t type is actually unsigned long (32 bits), and to and from are pointers to context pointer variables (secondary pointers).

rt_hw_context_switch_to() is used to switch to the context pointed to by the context pointer variable pointed to by to, 

and rt_hw_context_switch() also needs to write the current context pointer to the context pointer variable pointed to by from. 

In order to switch, we can trigger a self-trap through yield(), 
and then process to and from after identifying the EVENT_YIELD event in the event processing callback function ev_handler(). 

Similarly, we need to think about how to pass the two parameters to and from to ev_handler(). 
*/

void rt_hw_context_switch_to(rt_ubase_t to) {
  next = (Context*)to;
  yield();
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  current = (Context*)from;
  _store_current_context = true;
  next = (Context*)to;
  yield();
}

void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from, rt_ubase_t to, struct rt_thread *to_thread) {
  assert(0);
}

/*
Its function is to create a context with entry tentry and parameter parameter     @@
as the bottom of the stack with stack_addr as the bottom, and return the pointer of this context structure.  @@

In addition, if the kernel thread corresponding to the context returns from tentry, texit is called,   XX
and RT-Thread will ensure that the code will not return from texit.

Note:

The passed stack_addr may not have any alignment restrictions, so it is best to align it to sizeof(uintptr_t) before using it.  @@

CTE's kcontext() requires that it cannot return from the entry point, so a new way is needed to support the texit function. 
One way is to construct a wrapper function, let the wrapper function call tentry, and call texit after tentry returns,
and then use this wrapper function as the real entry point of kcontext(). 

However, this also requires us to pass the three parameters of tentry, parameter and texit to the wrapper function. 
How should we solve this parameter-passing problem?

mepc = wrapper function
struct Parameters {*tentry, *parameter, *texit}, a0 = &Parameters
in wrapper function: *tentry(*parameter); *texit();
*/
rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit) {
  uintptr_t stack_bottom = (uintptr_t)stack_addr;
  stack_bottom -= stack_bottom % sizeof(uintptr_t);  // align

  Area area;
  area.end = stack_bottom;
  Context* context = kcontext(area, tentry, parameter);

  return (rt_uint8_t*)context;
}


