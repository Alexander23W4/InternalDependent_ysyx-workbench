// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb__Syms;

class Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clock;
    CData/*0:0*/ tb__DOT__reset;
    CData/*0:0*/ tb__DOT__qspi_sck;
    CData/*0:0*/ tb__DOT__qspi_ce_n;
    CData/*0:0*/ tb__DOT__in_psel;
    CData/*0:0*/ tb__DOT__in_pwrite;
    CData/*3:0*/ tb__DOT__in_pstrb;
    CData/*0:0*/ tb__DOT__in_pready;
    CData/*3:0*/ tb__DOT__qspi_dio;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__douten;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mr_done;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_done;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__wb_we;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__wb_re;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__state;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__nstate;
    CData/*2:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__size;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate;
    CData/*7:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state;
    CData/*0:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate;
    CData/*7:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter;
    CData/*2:0*/ tb__DOT__u_psram__DOT__state;
    CData/*2:0*/ tb__DOT__u_psram__DOT__next;
    CData/*7:0*/ tb__DOT__u_psram__DOT__ctrl;
    CData/*7:0*/ tb__DOT__u_psram__DOT__counter;
    CData/*3:0*/ tb__DOT__u_psram__DOT__dout;
    CData/*3:0*/ tb__DOT__u_psram__DOT__wr_hi;
    CData/*0:0*/ tb__DOT__u_psram__DOT__read_index;
    CData/*7:0*/ tb__DOT__u_psram__DOT__wcnt;
    CData/*3:0*/ tb__DOT__u_psram__DOT____Vlvbound_ha318c80c__0;
    CData/*7:0*/ __VdfgTmp_h8db20435__0;
    CData/*7:0*/ __VdfgTmp_he0e7798e__0;
    CData/*0:0*/ __Vtrigrprev__TOP__tb__DOT__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__tb__DOT__reset;
    CData/*0:0*/ __Vtrigrprev__TOP__tb__DOT__qspi_ce_n;
    CData/*0:0*/ __Vtrigrprev__TOP__tb__DOT__qspi_sck;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb__DOT__in_paddr;
    IData/*31:0*/ tb__DOT__in_pwdata;
    IData/*31:0*/ tb__DOT__fails;
    IData/*23:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr;
    IData/*23:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr;
    IData/*23:0*/ tb__DOT__u_psram__DOT__addr;
    IData/*21:0*/ tb__DOT__u_psram__DOT__rd_index;
    IData/*21:0*/ tb__DOT__u_psram__DOT__wr_index;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data;
    VlUnpacked<CData/*7:0*/, 4194304> tb__DOT__u_psram__DOT__memory;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_habebf077__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
