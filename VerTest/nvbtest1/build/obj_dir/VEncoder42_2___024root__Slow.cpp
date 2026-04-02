// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncoder42_2.h for the primary calling header

#include "verilated.h"

#include "VEncoder42_2__Syms.h"
#include "VEncoder42_2___024root.h"

void VEncoder42_2___024root___ctor_var_reset(VEncoder42_2___024root* vlSelf);

VEncoder42_2___024root::VEncoder42_2___024root(VEncoder42_2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VEncoder42_2___024root___ctor_var_reset(this);
}

void VEncoder42_2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VEncoder42_2___024root::~VEncoder42_2___024root() {
}
