// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vour__Syms.h"
#include "Vour___024unit.h"

void Vour___024unit___ctor_var_reset(Vour___024unit* vlSelf);

Vour___024unit::Vour___024unit(Vour__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vour___024unit___ctor_var_reset(this);
}

void Vour___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vour___024unit::~Vour___024unit() {
}
