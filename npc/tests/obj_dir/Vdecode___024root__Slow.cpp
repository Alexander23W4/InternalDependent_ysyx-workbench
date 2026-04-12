// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "verilated.h"

#include "Vdecode__Syms.h"
#include "Vdecode___024root.h"

void Vdecode___024root___ctor_var_reset(Vdecode___024root* vlSelf);

Vdecode___024root::Vdecode___024root(Vdecode__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdecode___024root___ctor_var_reset(this);
}

void Vdecode___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdecode___024root::~Vdecode___024root() {
}
