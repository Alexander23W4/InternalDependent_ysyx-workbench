// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_top.h for the primary calling header

#include "verilated.h"

#include "Vvga_top__Syms.h"
#include "Vvga_top___024root.h"

void Vvga_top___024root___ctor_var_reset(Vvga_top___024root* vlSelf);

Vvga_top___024root::Vvga_top___024root(Vvga_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvga_top___024root___ctor_var_reset(this);
}

void Vvga_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvga_top___024root::~Vvga_top___024root() {
}
