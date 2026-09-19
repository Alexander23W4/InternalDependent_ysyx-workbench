// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxbar_tb.h for the primary calling header

#ifndef VERILATED_VXBAR_TB___024ROOT_H_
#define VERILATED_VXBAR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vxbar_tb__Syms;
class Vxbar_tb_ysyx_26040135_AXI4;


class Vxbar_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vxbar_tb_ysyx_26040135_AXI4* __PVT__xbar_tb__DOT__ifu;
    Vxbar_tb_ysyx_26040135_AXI4* __PVT__xbar_tb__DOT__lsu;
    Vxbar_tb_ysyx_26040135_AXI4* __PVT__xbar_tb__DOT__mm;
    Vxbar_tb_ysyx_26040135_AXI4* __PVT__xbar_tb__DOT__cm;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ xbar_tb__DOT__clock;
    CData/*0:0*/ xbar_tb__DOT__reset;
    CData/*0:0*/ xbar_tb__DOT__mm_rpend;
    CData/*0:0*/ xbar_tb__DOT__xbar__DOT__w_busy;
    CData/*0:0*/ xbar_tb__DOT__xbar__DOT__w_clint;
    CData/*0:0*/ xbar_tb__DOT__xbar__DOT__w_sel_clint;
    CData/*1:0*/ xbar_tb__DOT__xbar__DOT__r_current_state;
    CData/*1:0*/ xbar_tb__DOT__xbar__DOT__r_next_state;
    CData/*0:0*/ xbar_tb__DOT__xbar__DOT__r_sel_clint;
    CData/*0:0*/ xbar_tb__DOT__xbar__DOT__r_tgt_rvalid;
    CData/*1:0*/ xbar_tb__DOT__clint__DOT__state;
    CData/*1:0*/ xbar_tb__DOT__clint__DOT__next;
    CData/*1:0*/ xbar_tb__DOT__clint__DOT__rresp_save;
    CData/*1:0*/ xbar_tb__DOT__clint__DOT__rresp_now;
    CData/*0:0*/ __Vtrigrprev__TOP__xbar_tb__DOT__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__xbar_tb__DOT__reset;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ xbar_tb__DOT__errors;
    IData/*31:0*/ xbar_tb__DOT__clint__DOT__rdata_save;
    IData/*31:0*/ xbar_tb__DOT__clint__DOT__rdata_now;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ xbar_tb__DOT__clint__DOT__mtime;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb236363d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vxbar_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vxbar_tb___024root(Vxbar_tb__Syms* symsp, const char* v__name);
    ~Vxbar_tb___024root();
    VL_UNCOPYABLE(Vxbar_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
