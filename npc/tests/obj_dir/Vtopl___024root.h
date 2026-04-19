// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtopl.h for the primary calling header

#ifndef VERILATED_VTOPL___024ROOT_H_
#define VERILATED_VTOPL___024ROOT_H_  // guard

#include "verilated.h"

class Vtopl__Syms;

class Vtopl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ topl__DOT__addi;
    CData/*0:0*/ topl__DOT__add;
    CData/*0:0*/ topl__DOT__jalr;
    CData/*0:0*/ topl__DOT__lui;
    CData/*0:0*/ topl__DOT__lw;
    CData/*0:0*/ topl__DOT__lbu;
    CData/*0:0*/ topl__DOT__sw;
    CData/*0:0*/ topl__DOT__sb;
    CData/*0:0*/ topl__DOT__ebreak;
    CData/*0:0*/ topl__DOT__wen;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ __Vtableidx1;
    VL_IN(instr,31,0);
    VL_OUTW(dbg_reg,1023,0,32);
    VL_OUT(_pc,31,0);
    IData/*31:0*/ topl__DOT__pc;
    IData/*31:0*/ topl__DOT__immI;
    IData/*31:0*/ topl__DOT__immS;
    IData/*31:0*/ topl__DOT__wdata;
    IData/*31:0*/ topl__DOT__rdata1;
    IData/*31:0*/ topl__DOT__rdata2;
    IData/*31:0*/ topl__DOT__pc_next_dft;
    IData/*31:0*/ topl__DOT__add_rst;
    IData/*31:0*/ topl__DOT__lw_rst;
    IData/*31:0*/ topl__DOT__lbu_rst;
    IData/*31:0*/ __Vfunc_topl__DOT__ram_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_topl__DOT__ram_read__1__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> topl__DOT__GPR__DOT__gpr;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtopl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtopl___024root(Vtopl__Syms* symsp, const char* v__name);
    ~Vtopl___024root();
    VL_UNCOPYABLE(Vtopl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
