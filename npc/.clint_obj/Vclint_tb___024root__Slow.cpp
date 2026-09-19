// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclint_tb.h for the primary calling header

#include "verilated.h"

#include "Vclint_tb__Syms.h"
#include "Vclint_tb___024root.h"

void Vclint_tb___024root___ctor_var_reset(Vclint_tb___024root* vlSelf);

Vclint_tb___024root::Vclint_tb___024root(Vclint_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclint_tb___024root___ctor_var_reset(this);
}

void Vclint_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclint_tb___024root::~Vclint_tb___024root() {
}
