// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26040135_AXI4_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26040135_AXI4_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_26040135_AXI4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ arvalid;
    CData/*2:0*/ arsize;
    CData/*0:0*/ rvalid;
    CData/*0:0*/ rready;
    CData/*0:0*/ awvalid;
    CData/*2:0*/ awsize;
    CData/*3:0*/ wstrb;
    CData/*0:0*/ wvalid;
    CData/*0:0*/ bready;
    IData/*31:0*/ araddr;
    IData/*31:0*/ wdata;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26040135_AXI4(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26040135_AXI4();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26040135_AXI4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const VysyxSoCFull_ysyx_26040135_AXI4* obj);

#endif  // guard
