// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_YSYX_26040135_AXI4_H_
#define VERILATED_VTOP_YSYX_26040135_AXI4_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_ysyx_26040135_AXI4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ arsize;
    CData/*0:0*/ arvalid;
    CData/*0:0*/ rvalid;
    CData/*0:0*/ rready;
    CData/*2:0*/ awsize;
    CData/*0:0*/ awvalid;
    CData/*3:0*/ wstrb;
    CData/*0:0*/ wlast;
    CData/*0:0*/ wvalid;
    CData/*0:0*/ bready;
    IData/*31:0*/ araddr;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ysyx_26040135_AXI4(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ysyx_26040135_AXI4();
    VL_UNCOPYABLE(Vtop_ysyx_26040135_AXI4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vtop_ysyx_26040135_AXI4* obj);

#endif  // guard
