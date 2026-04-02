// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard_top.h for the primary calling header

#ifndef VERILATED_VKEYBOARD_TOP___024ROOT_H_
#define VERILATED_VKEYBOARD_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vkeyboard_top__Syms;

class Vkeyboard_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(ascii,7,0);
    VL_OUT8(ready,0,0);
    CData/*7:0*/ keyboard_top__DOT__data;
    CData/*0:0*/ keyboard_top__DOT__nextdata_n;
    CData/*0:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__overflow;
    CData/*2:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr;
    CData/*2:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr;
    CData/*3:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__count;
    CData/*2:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync;
    CData/*0:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT____Vlvbound_h590903c5__0;
    CData/*7:0*/ keyboard_top__DOT__receiver_inst__DOT__ascii_lut;
    CData/*0:0*/ keyboard_top__DOT__receiver_inst__DOT__break_flag;
    CData/*0:0*/ __Vdly__ready;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ keyboard_top__DOT__ps2_kbd_inst__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> keyboard_top__DOT__ps2_kbd_inst__DOT__fifo;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkeyboard_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeyboard_top___024root(Vkeyboard_top__Syms* symsp, const char* v__name);
    ~Vkeyboard_top___024root();
    VL_UNCOPYABLE(Vkeyboard_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
