// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VXBAR_TB__SYMS_H_
#define VERILATED_VXBAR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vxbar_tb.h"

// INCLUDE MODULE CLASSES
#include "Vxbar_tb___024root.h"
#include "Vxbar_tb_ysyx_26040135_AXI4.h"

// SYMS CLASS (contains all model state)
class Vxbar_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vxbar_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vxbar_tb___024root             TOP;
    Vxbar_tb_ysyx_26040135_AXI4    TOP__xbar_tb__DOT__cm;
    Vxbar_tb_ysyx_26040135_AXI4    TOP__xbar_tb__DOT__ifu;
    Vxbar_tb_ysyx_26040135_AXI4    TOP__xbar_tb__DOT__lsu;
    Vxbar_tb_ysyx_26040135_AXI4    TOP__xbar_tb__DOT__mm;

    // CONSTRUCTORS
    Vxbar_tb__Syms(VerilatedContext* contextp, const char* namep, Vxbar_tb* modelp);
    ~Vxbar_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
