// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU4__SYMS_H_
#define VERILATED_VALU4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VALU4.h"

// INCLUDE MODULE CLASSES
#include "VALU4___024root.h"

// SYMS CLASS (contains all model state)
class VALU4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VALU4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VALU4___024root                TOP;

    // CONSTRUCTORS
    VALU4__Syms(VerilatedContext* contextp, const char* namep, VALU4* modelp);
    ~VALU4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
