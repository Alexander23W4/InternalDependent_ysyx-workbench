// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEncoder42_2.h for the primary calling header

#ifndef VERILATED_VENCODER42_2___024ROOT_H_
#define VERILATED_VENCODER42_2___024ROOT_H_  // guard

#include "verilated.h"

class VEncoder42_2__Syms;

class VEncoder42_2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(in,3,0);
    VL_OUT8(out,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VEncoder42_2__Syms* const vlSymsp;

    // CONSTRUCTORS
    VEncoder42_2___024root(VEncoder42_2__Syms* symsp, const char* v__name);
    ~VEncoder42_2___024root();
    VL_UNCOPYABLE(VEncoder42_2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
