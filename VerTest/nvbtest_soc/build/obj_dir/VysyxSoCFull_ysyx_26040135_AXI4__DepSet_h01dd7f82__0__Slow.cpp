// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_26040135_AXI4.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26040135_AXI4___ctor_var_reset(VysyxSoCFull_ysyx_26040135_AXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26040135_AXI4___ctor_var_reset\n"); );
    // Body
    vlSelf->araddr = 0;
    vlSelf->arvalid = 0;
    vlSelf->arsize = 0;
    vlSelf->rvalid = 0;
    vlSelf->rready = 0;
    vlSelf->awvalid = 0;
    vlSelf->awsize = 0;
    vlSelf->wdata = 0;
    vlSelf->wstrb = 0;
    vlSelf->wvalid = 0;
    vlSelf->bready = 0;
}
