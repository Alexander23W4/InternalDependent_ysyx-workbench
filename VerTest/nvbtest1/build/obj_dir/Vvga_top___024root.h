// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_top.h for the primary calling header

#ifndef VERILATED_VVGA_TOP___024ROOT_H_
#define VERILATED_VVGA_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vvga_top__Syms;

class Vvga_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(h_addr,9,0);
    VL_OUT16(v_addr,9,0);
    SData/*9:0*/ vga_top__DOT__vgactrl__DOT__x_cnt;
    SData/*9:0*/ vga_top__DOT__vgactrl__DOT__y_cnt;
    SData/*9:0*/ __Vdly__vga_top__DOT__vgactrl__DOT__x_cnt;
    VL_IN(vga_data,23,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvga_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvga_top___024root(Vvga_top__Syms* symsp, const char* v__name);
    ~Vvga_top___024root();
    VL_UNCOPYABLE(Vvga_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
