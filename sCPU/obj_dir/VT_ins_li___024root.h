// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VT_ins_li.h for the primary calling header

#ifndef VERILATED_VT_INS_LI___024ROOT_H_
#define VERILATED_VT_INS_LI___024ROOT_H_  // guard

#include "verilated.h"

class VT_ins_li__Syms;

class VT_ins_li___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_IN8(rd,1,0);
    VL_IN8(imm,3,0);
    VL_OUT8(finish,0,0);
    VL_OUT8(dbg0,7,0);
    VL_OUT8(dbg1,7,0);
    VL_OUT8(dbg2,7,0);
    VL_OUT8(dbg3,7,0);
    CData/*7:0*/ T_ins_li__DOT__data_out;
    CData/*1:0*/ T_ins_li__DOT__write_addr;
    CData/*0:0*/ T_ins_li__DOT__we;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> T_ins_li__DOT__gpr__DOT__ram;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VT_ins_li__Syms* const vlSymsp;

    // CONSTRUCTORS
    VT_ins_li___024root(VT_ins_li__Syms* symsp, const char* v__name);
    ~VT_ins_li___024root();
    VL_UNCOPYABLE(VT_ins_li___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
