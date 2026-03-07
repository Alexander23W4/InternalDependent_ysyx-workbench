// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VT_ins_bner0.h for the primary calling header

#ifndef VERILATED_VT_INS_BNER0___024ROOT_H_
#define VERILATED_VT_INS_BNER0___024ROOT_H_  // guard

#include "verilated.h"

class VT_ins_bner0__Syms;

class VT_ins_bner0___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(rs2,1,0);
    VL_OUT8(finish,0,0);
    VL_OUT8(update,0,0);
    VL_OUT8(dbg0,7,0);
    VL_OUT8(dbg1,7,0);
    VL_OUT8(dbg2,7,0);
    VL_OUT8(dbg3,7,0);
    CData/*7:0*/ T_ins_bner0__DOT__data_in;
    CData/*1:0*/ T_ins_bner0__DOT__ins_bner0__DOT__state;
    CData/*1:0*/ T_ins_bner0__DOT__ins_bner0__DOT__next;
    CData/*7:0*/ T_ins_bner0__DOT__ins_bner0__DOT__r0_num;
    CData/*7:0*/ T_ins_bner0__DOT__ins_bner0__DOT__rs2_num;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> T_ins_bner0__DOT__gpr__DOT__ram;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VT_ins_bner0__Syms* const vlSymsp;

    // CONSTRUCTORS
    VT_ins_bner0___024root(VT_ins_bner0__Syms* symsp, const char* v__name);
    ~VT_ins_bner0___024root();
    VL_UNCOPYABLE(VT_ins_bner0___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
