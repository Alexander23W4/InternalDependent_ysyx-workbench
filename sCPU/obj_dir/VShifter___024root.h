// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShifter.h for the primary calling header

#ifndef VERILATED_VSHIFTER___024ROOT_H_
#define VERILATED_VSHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class VShifter__Syms;

class VShifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(mode,2,0);
    VL_IN8(in,0,0);
    VL_IN8(value,7,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VShifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VShifter___024root(VShifter__Syms* symsp, const char* v__name);
    ~VShifter___024root();
    VL_UNCOPYABLE(VShifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
