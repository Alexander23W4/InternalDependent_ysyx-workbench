#include <am.h>
#include <klib.h>
#include <rtthread.h>

/*
-> Build stack for each process, init their registers (GPR CSR) as context (mepc --> code, sp, a0)
-> Process switch program for OS (the call back funcion of ecall), push & pull, switch
*/

#define STACK_SIZE 4096

Context* current;
Context* next;
bool _store_current_context = false;

// trap.S (__am_asm_trap) ->  __am_irq_handle -> ev_handler
static Context* ev_handler(Event e, Context *c) {
  switch (e.event) {
    case EVENT_YIELD:    // event is ISA indenpendent
    if(_store_current_context){
      current = c;
      _store_current_context = false;
    }
      c = next;  // switch to
      break;

    case EVENT_IRQ_TIMER: 
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
  next = *(Context**)to;
  printf("yield1\n");
  yield();
}

/*
method for avoid using global variant for current & next process storage
void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
    // 1. 定义局部变量 (存储在当前线程 A 的栈上)
    struct rt_thread *self = rt_thread_self();
    void *old_user_data = self->user_data; // 备份旧数据

    // 2. 将 B 的指针存入 PCB (传递切换指令)
    self->user_data = (void*)*(Context**)to;

    // 3. 触发 trap，进入 CTE，进入 ev_handler
    // 此时 CPU 会将当前寄存器压入 A 的栈，并跳转到操作系统
    yield(); 

    // --- 线程 A 被挂起，一直到它下次被调度回来 ---
    // 4. 再次从 yield() 返回 (A 重新获得 CPU)
    
    // 5. 使用刚才定义的局部变量恢复现场
    self->user_data = old_user_data; // 恢复之前的旧数据
}
*/

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  current = *(Context**)from;   // from -> sp -> Context, so from/to is actually Context**
  _store_current_context = true;
  next = *(Context**)to;
  printf("yield2\n");
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

// parameter for wrapper function
typedef struct {
  void (*tentry)(void*);
  void *parameter;
  void (*texit)(void);
} Wrapper_args;

// wrapper function, purpose: wrap texit into guest program, if function "tentry" end unexpectedly, run texit to transfer context
static void wrapper(void *arg) {
  Wrapper_args *args = (Wrapper_args*)arg;
  
  args->tentry(args->parameter);
  args->texit();

  assert(0);
}

void (*wrapper_ptr)(void*) = wrapper;   // create a pointer to wrapper function

// 直接占用栈底的一块地方存 wrapper 函数的参数
rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit) {
  // Align
  uintptr_t stack_bottom = (uintptr_t)stack_addr;
  stack_bottom -= stack_bottom % sizeof(uintptr_t);  

  // Store wrapper_args in stack
  Wrapper_args* wagr = (Wrapper_args*)(stack_bottom - sizeof(Wrapper_args));
  wagr->parameter = parameter;
  wagr->tentry = tentry;
  wagr->texit = texit;

  // Align again
  stack_bottom  = ((uintptr_t)wagr) - (stack_bottom % sizeof(uintptr_t)); 

  Context* context = kcontext((Area) {(void*)(stack_bottom - STACK_SIZE), (void*)stack_bottom}, (void*)wrapper_ptr, (void*)wagr);
  return (rt_uint8_t*)context;
}

// bt    context    stack_bottom   stack_addr


