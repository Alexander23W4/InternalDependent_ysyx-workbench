// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrelShifter.h for the primary calling header

#include "verilated.h"

#include "VBarrelShifter__Syms.h"
#include "VBarrelShifter___024root.h"

void VBarrelShifter___024root___ctor_var_reset(VBarrelShifter___024root* vlSelf);

VBarrelShifter___024root::VBarrelShifter___024root(VBarrelShifter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBarrelShifter___024root___ctor_var_reset(this);
}

void VBarrelShifter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBarrelShifter___024root::~VBarrelShifter___024root() {
}
