// architecture _H 
// context, mem pc gpr...
#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

// CTE context
/*
 These contents constitute the complete context information. 
  The exception handling process can diagnose and handle the exception based on the context, 
  and this information is also needed when restoring the context in the future.
*/
// ******
struct Context {
  uintptr_t gpr[NR_REGS];    // unsigned long int, 4 bytes in RV32 env
  uintptr_t mcause;
  uintptr_t mstatus;
  uintptr_t mepc;
  void *pdir;
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
