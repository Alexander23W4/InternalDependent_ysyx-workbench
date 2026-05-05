// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vour.h for the primary calling header

#ifndef VERILATED_VOUR___024UNIT_H_
#define VERILATED_VOUR___024UNIT_H_  // guard

#include "verilated.h"

class Vour__Syms;

class Vour___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vour__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vour___024unit(Vour__Syms* symsp, const char* v__name);
    ~Vour___024unit();
    VL_UNCOPYABLE(Vour___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
