// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVGA_TOP__SYMS_H_
#define VERILATED_VVGA_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvga_top.h"

// INCLUDE MODULE CLASSES
#include "Vvga_top___024root.h"

// SYMS CLASS (contains all model state)
class Vvga_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvga_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvga_top___024root             TOP;

    // CONSTRUCTORS
    Vvga_top__Syms(VerilatedContext* contextp, const char* namep, Vvga_top* modelp);
    ~Vvga_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
