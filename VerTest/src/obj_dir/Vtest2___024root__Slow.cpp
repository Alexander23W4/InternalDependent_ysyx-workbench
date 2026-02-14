// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest2.h for the primary calling header

#include "verilated.h"

#include "Vtest2__Syms.h"
#include "Vtest2___024root.h"

void Vtest2___024root___ctor_var_reset(Vtest2___024root* vlSelf);

Vtest2___024root::Vtest2___024root(Vtest2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest2___024root___ctor_var_reset(this);
}

void Vtest2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest2___024root::~Vtest2___024root() {
}
