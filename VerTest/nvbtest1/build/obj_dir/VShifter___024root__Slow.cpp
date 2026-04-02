// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifter.h for the primary calling header

#include "verilated.h"

#include "VShifter__Syms.h"
#include "VShifter___024root.h"

void VShifter___024root___ctor_var_reset(VShifter___024root* vlSelf);

VShifter___024root::VShifter___024root(VShifter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VShifter___024root___ctor_var_reset(this);
}

void VShifter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VShifter___024root::~VShifter___024root() {
}
