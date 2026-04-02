// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(h1,6,0);
    VL_OUT8(h2,6,0);
    VL_OUT8(display_PC,3,0);
    VL_OUT8(debug0,7,0);
    VL_OUT8(debug1,7,0);
    VL_OUT8(debug2,7,0);
    VL_OUT8(debug3,7,0);
    VL_OUT8(rom_debug0,7,0);
    VL_OUT8(rom_debug1,7,0);
    VL_OUT8(rom_debug2,7,0);
    VL_OUT8(rom_debug3,7,0);
    CData/*3:0*/ top__DOT__pc;
    CData/*7:0*/ top__DOT__instr;
    CData/*7:0*/ top__DOT__rdata1;
    CData/*7:0*/ top__DOT__rdata2;
    CData/*3:0*/ top__DOT__pc_next;
    CData/*7:0*/ top__DOT__display_num;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> top__DOT__rom__DOT__mem;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__gpr__DOT__regs;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
