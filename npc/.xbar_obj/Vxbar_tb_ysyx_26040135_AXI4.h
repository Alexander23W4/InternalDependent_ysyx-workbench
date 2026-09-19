// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxbar_tb.h for the primary calling header

#ifndef VERILATED_VXBAR_TB_YSYX_26040135_AXI4_H_
#define VERILATED_VXBAR_TB_YSYX_26040135_AXI4_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vxbar_tb__Syms;

class Vxbar_tb_ysyx_26040135_AXI4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ arvalid;
    CData/*0:0*/ arready;
    CData/*1:0*/ rresp;
    CData/*0:0*/ rvalid;
    CData/*0:0*/ rready;
    CData/*0:0*/ rlast;
    CData/*0:0*/ awvalid;
    CData/*0:0*/ awready;
    CData/*0:0*/ wvalid;
    CData/*0:0*/ wready;
    CData/*1:0*/ bresp;
    CData/*0:0*/ bvalid;
    CData/*0:0*/ bready;
    IData/*31:0*/ araddr;
    IData/*31:0*/ rdata;
    IData/*31:0*/ awaddr;

    // INTERNAL VARIABLES
    Vxbar_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vxbar_tb_ysyx_26040135_AXI4(Vxbar_tb__Syms* symsp, const char* v__name);
    ~Vxbar_tb_ysyx_26040135_AXI4();
    VL_UNCOPYABLE(Vxbar_tb_ysyx_26040135_AXI4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vxbar_tb_ysyx_26040135_AXI4* obj);

#endif  // guard
