// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU4.h for the primary calling header

#include "verilated.h"

#include "VALU4__Syms.h"
#include "VALU4___024root.h"

void VALU4___024root___ctor_var_reset(VALU4___024root* vlSelf);

VALU4___024root::VALU4___024root(VALU4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU4___024root___ctor_var_reset(this);
}

void VALU4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU4___024root::~VALU4___024root() {
}
