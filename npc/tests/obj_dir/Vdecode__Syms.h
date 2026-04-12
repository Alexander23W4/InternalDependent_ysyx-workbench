// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE__SYMS_H_
#define VERILATED_VDECODE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecode.h"

// INCLUDE MODULE CLASSES
#include "Vdecode___024root.h"

// SYMS CLASS (contains all model state)
class Vdecode__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode___024root              TOP;

    // CONSTRUCTORS
    Vdecode__Syms(VerilatedContext* contextp, const char* namep, Vdecode* modelp);
    ~Vdecode__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
