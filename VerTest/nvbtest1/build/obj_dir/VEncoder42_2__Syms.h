// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODER42_2__SYMS_H_
#define VERILATED_VENCODER42_2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VEncoder42_2.h"

// INCLUDE MODULE CLASSES
#include "VEncoder42_2___024root.h"

// SYMS CLASS (contains all model state)
class VEncoder42_2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VEncoder42_2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VEncoder42_2___024root         TOP;

    // CONSTRUCTORS
    VEncoder42_2__Syms(VerilatedContext* contextp, const char* namep, VEncoder42_2* modelp);
    ~VEncoder42_2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
