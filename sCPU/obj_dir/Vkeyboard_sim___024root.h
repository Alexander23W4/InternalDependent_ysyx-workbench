// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard_sim.h for the primary calling header

#ifndef VERILATED_VKEYBOARD_SIM___024ROOT_H_
#define VERILATED_VKEYBOARD_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vkeyboard_sim__Syms;

class Vkeyboard_sim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ keyboard_sim__DOT__clk;
    CData/*0:0*/ keyboard_sim__DOT____Vcellinp__receiver_inst__rst;
    CData/*0:0*/ keyboard_sim__DOT__clrn;
    CData/*7:0*/ keyboard_sim__DOT__data;
    CData/*0:0*/ keyboard_sim__DOT__ready;
    CData/*0:0*/ keyboard_sim__DOT__kbd_clk;
    CData/*0:0*/ keyboard_sim__DOT__kbd_data;
    CData/*7:0*/ keyboard_sim__DOT__ascii;
    CData/*0:0*/ keyboard_sim__DOT__nextdata_n;
    CData/*0:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__overflow;
    CData/*2:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__w_ptr;
    CData/*2:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__r_ptr;
    CData/*3:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__count;
    CData/*2:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__ps2_clk_sync;
    CData/*0:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT____Vlvbound_h1a91ade8__0;
    CData/*7:0*/ keyboard_sim__DOT__receiver_inst__DOT__ascii_lut;
    CData/*0:0*/ keyboard_sim__DOT__receiver_inst__DOT__break_flag;
    CData/*0:0*/ __Vdly__keyboard_sim__DOT__ready;
    CData/*0:0*/ __Vtrigrprev__TOP__keyboard_sim__DOT__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__keyboard_sim__DOT____Vcellinp__receiver_inst__rst;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ keyboard_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer;
    SData/*9:0*/ keyboard_sim__DOT__ps2_kbd_inst__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> keyboard_sim__DOT__ps2_kbd_inst__DOT__fifo;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkeyboard_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeyboard_sim___024root(Vkeyboard_sim__Syms* symsp, const char* v__name);
    ~Vkeyboard_sim___024root();
    VL_UNCOPYABLE(Vkeyboard_sim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
