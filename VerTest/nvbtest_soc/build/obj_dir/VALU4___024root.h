// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU4.h for the primary calling header

#ifndef VERILATED_VALU4___024ROOT_H_
#define VERILATED_VALU4___024ROOT_H_  // guard

#include "verilated.h"

class VALU4__Syms;

class VALU4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(opcode,2,0);
    VL_OUT8(out,3,0);
    VL_OUT8(carry,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(zero,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU4___024root(VALU4__Syms* symsp, const char* v__name);
    ~VALU4___024root();
    VL_UNCOPYABLE(VALU4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
