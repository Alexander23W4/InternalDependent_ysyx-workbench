// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode.h for the primary calling header

#ifndef VERILATED_VDECODE___024ROOT_H_
#define VERILATED_VDECODE___024ROOT_H_  // guard

#include "verilated.h"

class Vdecode__Syms;

class Vdecode___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(addi,0,0);
    VL_OUT8(add,0,0);
    VL_OUT8(jalr,0,0);
    VL_OUT8(lui,0,0);
    VL_OUT8(lw,0,0);
    VL_OUT8(lbu,0,0);
    VL_OUT8(sw,0,0);
    VL_OUT8(sb,0,0);
    VL_OUT8(ebreak,0,0);
    VL_OUT8(rd,4,0);
    VL_OUT8(rs1,4,0);
    VL_OUT8(rs2,4,0);
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    VL_OUT(immI,31,0);
    VL_OUT(immU,31,0);
    VL_OUT(immS,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecode__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecode___024root(Vdecode__Syms* symsp, const char* v__name);
    ~Vdecode___024root();
    VL_UNCOPYABLE(Vdecode___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
