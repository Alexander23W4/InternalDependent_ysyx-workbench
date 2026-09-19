// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLINT_TB__SYMS_H_
#define VERILATED_VCLINT_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclint_tb.h"

// INCLUDE MODULE CLASSES
#include "Vclint_tb___024root.h"
#include "Vclint_tb_ysyx_26040135_AXI4.h"

// SYMS CLASS (contains all model state)
class Vclint_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclint_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclint_tb___024root            TOP;
    Vclint_tb_ysyx_26040135_AXI4   TOP__clint_tb__DOT__bus;

    // CONSTRUCTORS
    Vclint_tb__Syms(VerilatedContext* contextp, const char* namep, Vclint_tb* modelp);
    ~Vclint_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
