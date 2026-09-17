// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ysyx_26040135_AXI4.h"

void Vtop_ysyx_26040135_AXI4___ctor_var_reset(Vtop_ysyx_26040135_AXI4* vlSelf);

Vtop_ysyx_26040135_AXI4::Vtop_ysyx_26040135_AXI4(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ysyx_26040135_AXI4___ctor_var_reset(this);
}

void Vtop_ysyx_26040135_AXI4::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ysyx_26040135_AXI4::~Vtop_ysyx_26040135_AXI4() {
}
