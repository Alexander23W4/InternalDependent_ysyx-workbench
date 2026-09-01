// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__addi;
        CData/*0:0*/ top__DOT__slti;
        CData/*0:0*/ top__DOT__sltiu;
        CData/*0:0*/ top__DOT__xori;
        CData/*0:0*/ top__DOT__ori;
        CData/*0:0*/ top__DOT__andi;
        CData/*0:0*/ top__DOT__slli;
        CData/*0:0*/ top__DOT__srli;
        CData/*0:0*/ top__DOT__srai;
        CData/*0:0*/ top__DOT__add;
        CData/*0:0*/ top__DOT__sub;
        CData/*0:0*/ top__DOT__sll;
        CData/*0:0*/ top__DOT__slt;
        CData/*0:0*/ top__DOT__sltu;
        CData/*0:0*/ top__DOT__xor_inst;
        CData/*0:0*/ top__DOT__srl;
        CData/*0:0*/ top__DOT__sra;
        CData/*0:0*/ top__DOT__or_inst;
        CData/*0:0*/ top__DOT__and_inst;
        CData/*0:0*/ top__DOT__lb;
        CData/*0:0*/ top__DOT__lh;
        CData/*0:0*/ top__DOT__lw;
        CData/*0:0*/ top__DOT__lbu;
        CData/*0:0*/ top__DOT__lhu;
        CData/*0:0*/ top__DOT__sb;
        CData/*0:0*/ top__DOT__sh;
        CData/*0:0*/ top__DOT__sw;
        CData/*0:0*/ top__DOT__beq;
        CData/*0:0*/ top__DOT__bne;
        CData/*0:0*/ top__DOT__blt;
        CData/*0:0*/ top__DOT__bge;
        CData/*0:0*/ top__DOT__bltu;
        CData/*0:0*/ top__DOT__bgeu;
        CData/*0:0*/ top__DOT__jal;
        CData/*0:0*/ top__DOT__jalr;
        CData/*0:0*/ top__DOT__lui;
        CData/*0:0*/ top__DOT__auipc;
        CData/*0:0*/ top__DOT__ebreak;
        CData/*0:0*/ top__DOT__ecall;
        CData/*0:0*/ top__DOT__mret;
        CData/*0:0*/ top__DOT__csrrw;
        CData/*0:0*/ top__DOT__csrrs;
        CData/*0:0*/ top__DOT__csrrc;
        CData/*0:0*/ top__DOT____VdfgTmp_h71776512__0;
        CData/*0:0*/ top__DOT____VdfgTmp_haf3ac130__0;
        CData/*0:0*/ top__DOT____VdfgTmp_heb8827dd__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        VL_IN(instr,31,0);
        VL_OUTW(dbg_reg,1023,0,32);
        VL_OUT(_pc,31,0);
        VL_OUT(_mstatus,31,0);
        VL_OUT(_mepc,31,0);
        VL_OUT(_mcause,31,0);
        VL_OUT(_mtvec,31,0);
        VL_OUT(_mcycle,31,0);
        VL_OUT(_mcycleh,31,0);
        VL_OUT(_mvendorid,31,0);
        VL_OUT(_marchid,31,0);
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__mstatus;
    };
    struct {
        IData/*31:0*/ top__DOT__mepc;
        IData/*31:0*/ top__DOT__mcause;
        IData/*31:0*/ top__DOT__mtvec;
        IData/*31:0*/ top__DOT__mcycle;
        IData/*31:0*/ top__DOT__mcycleh;
        IData/*31:0*/ top__DOT__mvendorid;
        IData/*31:0*/ top__DOT__marchid;
        IData/*31:0*/ top__DOT__immI;
        IData/*31:0*/ top__DOT__wdata;
        IData/*31:0*/ top__DOT__rdata1;
        IData/*31:0*/ top__DOT__rdata2;
        IData/*31:0*/ top__DOT__pc_next_dft;
        IData/*31:0*/ top__DOT__add_rst;
        IData/*31:0*/ top__DOT__csrw_rst;
        IData/*31:0*/ top__DOT__read_ram_rst;
        IData/*31:0*/ top__DOT__lw_rst;
        IData/*31:0*/ top__DOT__lbu_rst;
        IData/*31:0*/ top__DOT__lhu_rst;
        IData/*31:0*/ top__DOT__lb_rst;
        IData/*31:0*/ top__DOT__lh_rst;
        IData/*31:0*/ top__DOT____VdfgExtracted_he14908da__0;
        IData/*31:0*/ __Vfunc_top__DOT__ram_read__3__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__GPR__DOT__gpr;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
