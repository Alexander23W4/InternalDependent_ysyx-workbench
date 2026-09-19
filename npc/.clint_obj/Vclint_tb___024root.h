// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclint_tb.h for the primary calling header

#ifndef VERILATED_VCLINT_TB___024ROOT_H_
#define VERILATED_VCLINT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vclint_tb__Syms;
class Vclint_tb_ysyx_26040135_AXI4;


class Vclint_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vclint_tb_ysyx_26040135_AXI4* __PVT__clint_tb__DOT__bus;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clint_tb__DOT__clock;
    CData/*0:0*/ clint_tb__DOT__reset;
    CData/*1:0*/ clint_tb__DOT__dut__DOT__state;
    CData/*1:0*/ clint_tb__DOT__dut__DOT__next;
    CData/*1:0*/ clint_tb__DOT__dut__DOT__rresp_save;
    CData/*1:0*/ clint_tb__DOT__dut__DOT__rresp_now;
    CData/*0:0*/ __Vtrigrprev__TOP__clint_tb__DOT__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__clint_tb__DOT__reset;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ clint_tb__DOT__errors;
    IData/*31:0*/ clint_tb__DOT__dut__DOT__rdata_save;
    IData/*31:0*/ clint_tb__DOT__dut__DOT__rdata_now;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ clint_tb__DOT__dut__DOT__mtime;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfd9fd719__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclint_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclint_tb___024root(Vclint_tb__Syms* symsp, const char* v__name);
    ~Vclint_tb___024root();
    VL_UNCOPYABLE(Vclint_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
