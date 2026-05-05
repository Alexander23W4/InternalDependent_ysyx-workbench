// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopl.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtopl__Syms.h"
#include "Vtopl___024root.h"

void Vtopl___024root___ctor_var_reset(Vtopl___024root* vlSelf);

Vtopl___024root::Vtopl___024root(Vtopl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtopl___024root___ctor_var_reset(this);
}

void Vtopl___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtopl___024root::~Vtopl___024root() {
}
