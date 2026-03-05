// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBarrelShifter.h for the primary calling header

#ifndef VERILATED_VBARRELSHIFTER___024ROOT_H_
#define VERILATED_VBARRELSHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class VBarrelShifter__Syms;

class VBarrelShifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(LR,0,0);
    VL_IN8(AL,0,0);
    VL_IN8(din,7,0);
    VL_IN8(shamt,2,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBarrelShifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBarrelShifter___024root(VBarrelShifter__Syms* symsp, const char* v__name);
    ~VBarrelShifter___024root();
    VL_UNCOPYABLE(VBarrelShifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
