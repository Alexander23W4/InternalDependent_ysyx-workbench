// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_halt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_halt_TOP\n"); );
    // Init
    // Body
    endprog = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end;
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP(Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 16> &dbg_regs, IData/*31:0*/ &pc, IData/*31:0*/ &mstatus, IData/*31:0*/ &mepc, IData/*31:0*/ &mcause, IData/*31:0*/ &mtvec, QData/*63:0*/ &mcycle, IData/*31:0*/ &instr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP\n"); );
    // Init
    // Body
    instr = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save;
    dbg_regs[0U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0U];
    dbg_regs[1U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[1U];
    dbg_regs[2U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[2U];
    dbg_regs[3U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[3U];
    dbg_regs[4U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[4U];
    dbg_regs[5U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[5U];
    dbg_regs[6U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[6U];
    dbg_regs[7U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[7U];
    dbg_regs[8U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[8U];
    dbg_regs[9U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[9U];
    dbg_regs[0xaU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xaU];
    dbg_regs[0xbU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xbU];
    dbg_regs[0xcU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xcU];
    dbg_regs[0xdU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xdU];
    dbg_regs[0xeU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xeU];
    dbg_regs[0xfU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xfU];
    pc = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
    mstatus = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus;
    mepc = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc;
    mcause = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause;
    mtvec = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec;
    mcycle = (((QData)((IData)(vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh)) 
               << 0x20U) | (QData)((IData)(vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle)));
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_new_instr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &new_instr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_new_instr_TOP\n"); );
    // Init
    // Body
    new_instr = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT___new_instr;
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_wen_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_wen_TOP\n"); );
    // Init
    // Body
    wen = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen;
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_read_gpr_TOP(Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 16> &gprs, IData/*31:0*/ &pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_read_gpr_TOP\n"); );
    // Init
    // Body
    gprs[0U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0U];
    gprs[1U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[1U];
    gprs[2U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[2U];
    gprs[3U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[3U];
    gprs[4U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[4U];
    gprs[5U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[5U];
    gprs[6U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[6U];
    gprs[7U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[7U];
    gprs[8U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[8U];
    gprs[9U] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[9U];
    gprs[0xaU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xaU];
    gprs[0xbU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xbU];
    gprs[0xcU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xcU];
    gprs[0xdU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xdU];
    gprs[0xeU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xeU];
    gprs[0xfU] = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xfU];
    pc = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc_out;
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_pipeline_bottleneck_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ifu_out_valid, IData/*31:0*/ &exu_in_ready, IData/*31:0*/ &exu_out_valid, IData/*31:0*/ &lsu_in_ready, IData/*31:0*/ &lsu_out_valid, IData/*31:0*/ &wbu_in_ready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_pipeline_bottleneck_TOP\n"); );
    // Init
    // Body
    ifu_out_valid = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd;
    exu_in_ready = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de;
    exu_out_valid = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el;
    lsu_in_ready = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el;
    lsu_out_valid = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw;
    wbu_in_ready = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw;
}

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_flush_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &flush, IData/*31:0*/ &fetch_done, IData/*31:0*/ &flush_ifu_blk, IData/*31:0*/ &flush_ifu_blk_flg, IData/*31:0*/ &possible_branch_instr, IData/*31:0*/ &compulsory_branch, IData/*31:0*/ &optimisible_branch, IData/*31:0*/ &btb_hit, IData/*31:0*/ &raw_block) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_flush_TOP\n"); );
    // Init
    // Body
    flush = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush;
    fetch_done = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___fetch_done;
    flush_ifu_blk = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk;
    flush_ifu_blk_flg = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk_flg;
    possible_branch_instr = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___possible_branch_instr;
    compulsory_branch = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___compulsory_branch;
    optimisible_branch = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___optimisible_branch;
    btb_hit = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___btb_hit;
    raw_block = vlSymsp->TOP.difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___raw_block;
}

extern "C" void mrom_read(int raddr, int* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" int mem_read(int addr);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int mem_read__Vfuncrtn__Vcvt;
    mem_read__Vfuncrtn__Vcvt = mem_read(addr__Vcvt);
    mem_read__Vfuncrtn = mem_read__Vfuncrtn__Vcvt;
}

extern "C" void mem_write(int addr, int data, int write_type);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ write_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int write_type__Vcvt;
    for (size_t write_type__Vidx = 0; write_type__Vidx < 1; ++write_type__Vidx) write_type__Vcvt = write_type;
    mem_write(addr__Vcvt, data__Vcvt, write_type__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset))));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(5U) = (((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT____Vcellinp__flash__ss))) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_spi_sck))));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_spi_sck)));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_psram_ce_n))) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_psram_sck))));
    vlSelf->__VactTriggered.at(8U) = ((~ (IData)(vlSelf->clock)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clock));
    vlSelf->__VactTriggered.at(9U) = (((IData)(vlSelf->ref_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ref_clk))) 
                                      | ((IData)(vlSelf->ref_rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ref_rst))));
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT____Vcellinp__flash__ss 
        = vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_spi_sck 
        = vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_psram_ce_n 
        = vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n;
    vlSelf->__Vtrigrprev__TOP__difftest_top__DOT__soc__DOT___asic_psram_sck 
        = vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck;
    vlSelf->__Vtrigrprev__TOP__ref_clk = vlSelf->ref_clk;
    vlSelf->__Vtrigrprev__TOP__ref_rst = vlSelf->ref_rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid = 0;
    IData/*31:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata = 0;
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready = 0;
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
            ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid) {
                    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready = 1U;
                }
            }
        }
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid)) 
                              | (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready 
        = ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
            ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)
            : (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready = 1U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving 
        = ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready) 
                 & (0x20U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_arready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready))));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid 
        = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0U;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast 
        = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 4U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid = 0U;
            difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0U;
            difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata = 0U;
            difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid = 0U;
            if (((0ULL == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                  [(0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat))]) 
                 & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat) 
                     < (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat) 
                          == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save;
                difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save;
                difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata 
                    = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                        & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat) 
                           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))
                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata
                        : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save
                       [(0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat))]);
                if (((0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save))) {
                    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid = 1U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid) 
           & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)
             : 0U) | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid)
                       : 0U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = (3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                   ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                        ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                   >> 1U)) : 0U) | 
                      ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                        ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                            ? 0U : 3U) : 0U)) : 0U) 
                 | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                     ? (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                     : 0U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                  ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                             >> 3U)) : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                : 0U) 
                                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                  ? 
                                                 ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_h2168da81__0 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_h2168da81__0 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_h2168da81__0 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? vlSelf->__VdfgTmp_h2168da81__0
                                                                : 0U)
                                                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                  : 0U)))
             : 0U) | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata
                       : 0U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                  << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                               << 0xeU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                            << 0xdU) 
                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
           | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid) {
            if ((0U == (3U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc))) {
                if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save))) {
                    if ((1U & (~ (((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                    >> 7U) == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag
                                   [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                           >> 4U))]) 
                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid
                                  [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                          >> 4U))])))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next = 1U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if (((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_arready))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next = 0U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
        if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next = 1U;
        } else if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next = 2U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid) 
              & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next = 0U;
        }
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
        if ((((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid) 
              & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready = 0;
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_bready 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_bready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_bready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready = 1U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving 
        = ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready))));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_wready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid 
        = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
                difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid = 0U;
                if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received) 
                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving)) 
                     & (0ULL == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter))) {
                    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid 
                        = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving)
                                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                    : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save)));
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid = 1U;
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid) 
           & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_awready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
              ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
             ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)
             : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                       ? (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid)
                       : 0U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awvalid) 
           & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready)) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready)) 
              | ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
              & (0xa0000000U <= vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr)) 
             & (0xbfffffffU >= vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next = 1U;
            }
        } else if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                     & (0xa0000000U <= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)) 
                    & (0xbfffffffU >= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next = 2U;
            }
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if (((0ULL == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
              [(0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat))]) 
             & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat) 
                 < (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat) 
                      == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
            if (((0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                 == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save))) {
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next = 0U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving)) 
             & (0ULL == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next = 0U;
            }
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next = 0U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done;
    if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next = 0U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done) 
                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_awready));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done) 
                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)));
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next = 5U;
            }
        } else if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next = 0U;
        }
    } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
        if (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_arready)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next = 2U;
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next = 0U;
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next 
                    = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)
                        ? 1U : 3U);
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    IData/*18:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0;
    IData/*18:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 0;
    IData/*18:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0;
    IData/*18:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full = 0;
    SData/*10:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    // Body
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((0x200U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready) 
                                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid))) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5057: Assertion failed in %Ndifftest_top.soc.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 5057, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5059: Assertion failed in %Ndifftest_top.soc.asic.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 5059, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid)) 
                                  | (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))) 
                                 | (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5063: Assertion failed in %Ndifftest_top.soc.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 5063, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5065: Assertion failed in %Ndifftest_top.soc.asic.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 5065, "");
    }
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                                   & (0U 
                                                      == 
                                                      ((6U 
                                                        & (4U 
                                                           ^ 
                                                           (0x1eU 
                                                            & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                               >> 0x1bU)))) 
                                                       | (1U 
                                                          & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                             >> 0x18U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2930: Assertion failed in %Ndifftest_top.soc.asic.lmrom: Assertion failed: do not support write operations\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2930, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2932: Assertion failed in %Ndifftest_top.soc.asic.lmrom\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2932, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                                      >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2936: Assertion failed in %Ndifftest_top.soc.asic.lmrom: Assertion failed: do not support write operations\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2936, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2938: Assertion failed in %Ndifftest_top.soc.asic.lmrom\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2938, "");
    }
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (((IData)(1U) 
                                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:592: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 592, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:594: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 594, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                                 | (7U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 598, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:600: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 600, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (((IData)(1U) 
                                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 604, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:606: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 606, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                                 | (7U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 610, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:612: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 612, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 1U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 616, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:618: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 618, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 1U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 628, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:630: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 630, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 2U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 640, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:642: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 642, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 2U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 652, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:654: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 654, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 3U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 664, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:666: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 666, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1fffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 3U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 676, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:678: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 678, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xfffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 4U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 688, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:690: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 690, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xfffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 4U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 700, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:702: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 702, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 5U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 712, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:714: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 714, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 5U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 724, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:726: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 726, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 6U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 736, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:738: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 738, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 6U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 748, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:750: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 750, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 7U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 760, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:762: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 762, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1ffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 7U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 772, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:774: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 774, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 8U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 784, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:786: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 786, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xffU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 8U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 796, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:798: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 798, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 9U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 808, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:810: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 810, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x7fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 9U) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 820, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:822: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 822, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 0xaU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 832, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:834: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 834, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x3fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 0xaU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 844, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:846: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 846, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 0xbU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 856, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:858: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 858, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0x1fU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 0xbU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 868, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:870: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 870, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xfU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 0xcU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 880, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:882: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 882, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (0xfU 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 0xcU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 892, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:894: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 894, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (7U 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 0xdU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 904, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:906: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 906, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (7U 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 0xdU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 916, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:918: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 918, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (3U 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                              >> 0xeU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 928, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:930: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 930, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         (3U 
                                                          & ((((IData)(1U) 
                                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                              >> 0xeU) 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 940, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:942: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 942, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0) 
                                                          & (((IData)(1U) 
                                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                             >> 0xfU))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 952, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:954: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 954, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   == 
                                                   ((8U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                                          & (((IData)(1U) 
                                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                             >> 0xfU))) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 964, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:966: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 966, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 976, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:978: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 978, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:982: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 982, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:984: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 984, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:988: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 988, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:990: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 990, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:994: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 994, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:996: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 996, "");
    }
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1764: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1764, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1766: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1766, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1770: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1772: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1772, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1776: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1776, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1778: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1778, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1782: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1782, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1784: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1784, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1788: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1788, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1790: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1790, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1794: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1794, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1796: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1796, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1800: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1800, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1802: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1802, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1806: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1806, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1808: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1808, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1812: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1812, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1814: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1814, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1818: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1818, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1820: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1820, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1824: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1824, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1826: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1826, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1830: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1830, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1832: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1832, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1836: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1836, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1838: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1838, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1842: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1842, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1844: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1844, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1848: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1848, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1850: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1850, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1854: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1856: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1856, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1860: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1860, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1862: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1862, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1866: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1866, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1868: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1868, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1872: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1872, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1874: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1874, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1878: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1878, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1880: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1880, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1884: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1884, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1886: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1886, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1890: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1890, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1892: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1892, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1896: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1896, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1898: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1898, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1902: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1902, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1904: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1904, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1908: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1908, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1910: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1910, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1914: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1914, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1916: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1916, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1920: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1920, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1922: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1922, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1926: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1926, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1928: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1928, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1932: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1932, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1934: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1934, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1938: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1938, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1940: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1940, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1944: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1944, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1946: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1946, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1950: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1950, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1952: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1952, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1956: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1956, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1958: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1958, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1962: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1962, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1964: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1964, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1968: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1968, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1970: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1970, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1974: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1974, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1976: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1976, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1980: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1980, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1982: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1982, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1986: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1986, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1988: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1988, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1992: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1992, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1994: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1994, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1998: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 1998, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2000: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2000, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2004: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2004, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2006: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2006, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2010: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2010, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2012: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2012, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2016: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2016, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2018: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2018, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2022: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2022, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2024: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2024, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2028: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2028, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2030: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2030, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2034: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2034, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2036: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2036, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2040: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2040, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2042: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2042, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2046: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2046, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2048: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2048, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2052: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2052, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2054: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2054, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2058: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2058, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2060: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2060, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2064: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2064, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2066: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2066, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2070: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2070, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2072: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2072, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2076: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2076, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2078: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2078, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2082: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2082, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2084: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2084, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2088: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2088, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2090: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2090, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2094: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2094, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2096: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2096, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2100: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2100, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2102: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2102, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2106: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2106, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2108: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2108, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2112: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2112, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2114: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2114, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2118: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2118, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2120: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2120, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                        >> 0xfU))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2124: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2124, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2126: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2126, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xfU))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2130: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2130, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2132: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2132, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                        >> 0xfU))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2136: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2136, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2138: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2138, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xfU))) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2142: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2142, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2144: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2144, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                 & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1) 
                                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                    | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2152: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2152, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1)) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2156: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2156, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2158: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2158, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2162: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2162, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2164: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2164, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2168: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2168, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2170: Assertion failed in %Ndifftest_top.soc.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 2170, "");
    }
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & 
                      (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                     & (0U != (0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3307: Assertion failed in %Ndifftest_top.soc.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3307, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3309: Assertion failed in %Ndifftest_top.soc.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3309, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & 
                      (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                     & (0U != (0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3313: Assertion failed in %Ndifftest_top.soc.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3313, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3315: Assertion failed in %Ndifftest_top.soc.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3315, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & 
                      (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                     & (2U < (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3319: Assertion failed in %Ndifftest_top.soc.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3319, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3321: Assertion failed in %Ndifftest_top.soc.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3321, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & 
                      (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                     & (2U < (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3325: Assertion failed in %Ndifftest_top.soc.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3325, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3327: Assertion failed in %Ndifftest_top.soc.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 3327, "");
    }
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
            << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                         << 0xeU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                      << 0xdU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))))))))))));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
            << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                         << 0xeU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                      << 0xdU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))))))))))));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid)) 
                                 | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                    >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4377: Assertion failed in %Ndifftest_top.soc.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 4377, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4379: Assertion failed in %Ndifftest_top.soc.asic.axi4yank.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 4379, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid)) 
                                 | ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                    >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4383: Assertion failed in %Ndifftest_top.soc.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 4383, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4385: Assertion failed in %Ndifftest_top.soc.asic.axi4yank.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/build/ysyxSoCFull.v", 4385, "");
    }
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync 
        = ((2U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                  << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_data));
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync 
        = ((2U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync) 
                  << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_clk));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                                                + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                      >> 0xfU))) 
                                               - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                     >> 0xfU)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                                                + (3U 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 0xeU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (3U 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                                                + (0x7ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 5U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x7ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 5U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                                                + (0x1fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 3U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x1fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 3U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                                                + (0x3fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 2U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x3fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 2U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                                                + (0x7fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x7fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                                                + (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                               - (((IData)(1U) 
                                                   << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                                                + (0xfffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 4U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0xfffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                                                + (0x3ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 6U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x3ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 6U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                                                + (0x1ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 7U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x1ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 7U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                                                + (0xffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 8U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0xffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 8U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                                                + (0x7fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 9U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x7fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                                                + (0x3fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 0xaU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x3fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                                                + (0x1fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 0xbU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0x1fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                                                + (0xfU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 0xcU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (0xfU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                                                + (7U 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                       >> 0xdU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                               - (7U 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb))) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata);
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 1U))) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata 
                        >> 8U));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 2U))) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata 
                        >> 0x10U));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
        __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0x10U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 3U))) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata 
               >> 0x18U);
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
        __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0x18U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid))) 
                                         & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)) 
                                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                                                + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                      >> 0xfU))) 
                                               - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                     >> 0xfU)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                                                + (3U 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 0xeU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (3U 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                                                + (0x7ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 5U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x7ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 5U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                                                + (0xfffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 4U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0xfffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                                                + (0x1fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 3U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x1fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 3U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                                                + (0x3fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 2U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x3fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 2U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                                                + (0x7fffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x7fffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                                                + (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                               - (((IData)(1U) 
                                                   << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                                                + (0x3ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 6U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x3ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 6U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                                                + (0x1ffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 7U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x1ffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 7U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                                                + (0xffU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 8U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0xffU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 8U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                                                + (0x7fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 9U) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x7fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                                                + (0x3fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 0xaU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x3fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                                                + (0x1fU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 0xbU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0x1fU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                                                + (0xfU 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 0xcU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (0xfU 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                                                + (7U 
                                                   & ((((IData)(1U) 
                                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                       >> 0xdU) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                               - (7U 
                                                  & ((((IData)(1U) 
                                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7))))));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awvalid))) 
                                         & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid) 
                                             & (0U 
                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter))) 
                                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid))) 
                                         & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)) 
                                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched))));
    if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
          >= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
               ? 0xeU : 0x14U)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                   <= (0xffU & ((IData)(7U) 
                                                + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                    ? 0xeU
                                                    : 0x14U)))))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0xf0U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                             [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index] 
                             << 4U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire));
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index;
        }
    }
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite))) {
        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 
                = (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata);
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 1U;
            __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 = 0U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0 
                = (0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                               >> 2U));
        }
        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 
                = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U));
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 1U;
            __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 = 8U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1 
                = (0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                               >> 2U));
        }
        if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 
                = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x10U));
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 1U;
            __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 = 0x10U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2 
                = (0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                               >> 2U));
        }
        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 
                = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                   >> 0x18U);
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 1U;
            __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 = 0x18U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3 
                = (0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                               >> 2U));
        }
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                << 4U) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb)));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                << 2U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bresp));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren) 
                                         | ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full))) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full))));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                              << 0xbU) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    }
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN) 
                                         | ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready) 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full))));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                              << 0xbU) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)
                                                ? (~ 
                                                   (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                                         ? 
                                                        ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)))
                                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T))));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                << 0x23U) | (((QData)((IData)(((1U 
                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                              << 3U) | (QData)((IData)(
                                                       (1U 
                                                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bresp) 
                                                           << 1U))))));
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1 
        = (0x7800U == (0x7fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0xdU)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                     >> 2U));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_id 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid;
    }
    if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft 
            = ((IData)(4U) + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_eq 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
               == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt 
            = VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
               < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2);
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
              >> 0xfU));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                       >> 0xeU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                       >> 0xdU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                      & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                         >> 0xcU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 0xbU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 0xaU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 9U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 8U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 7U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 6U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 5U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 4U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 3U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 2U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 1U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_id 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid;
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr 
               + (0xffffU & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len 
            = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len) 
                        - (IData)(1U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr 
            = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr
                : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                    ? ((0x7fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                   | (0x7fffU 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                         | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                            >> 8U))))))
                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
              >> 0xfU));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                       >> 0xeU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                       >> 0xdU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                      & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                         >> 0xcU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 0xbU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 0xaU))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 9U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 8U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 7U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 6U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 5U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 4U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 3U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 2U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 1U))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid))));
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid));
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask = 3U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = 0U;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                 >> 0xcU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 0xbU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 0xaU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 9U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 8U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 7U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 6U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 4U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 5U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xfU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                 >> 0xcU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 0xbU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 0xaU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 9U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 8U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 7U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 6U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 4U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 5U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xfU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4))));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state) 
                << 6U) | ((0x20U & ((~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_rready) 
                                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_rvalid)) 
                                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_bready) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bvalid)))) 
                                    << 5U)) | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready)
                                                  ? 
                                                 (2U 
                                                  & ((~ 
                                                      (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_rready) 
                                                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_rvalid)) 
                                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_bready) 
                                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bvalid)))) 
                                                     << 1U))
                                                  : 1U) 
                                                << 2U) 
                                               | (1U 
                                                  & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                                     | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                        & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))))))));
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state 
            = (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state) 
                               << 1U))));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                    >> 0xfU)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                        & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                            >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                        & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                            >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                          & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                              >> 0xcU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                           & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 0xbU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                           & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 0xaU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                           & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 9U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                           & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 8U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                            & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 7U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                            & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 6U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                            & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 5U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                            & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 4U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                             & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                             & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                             & ((((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                    >> 0xfU)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                           >> 0xeU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                        & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                           >> 0xdU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                          & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                             >> 0xcU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 0xbU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 0xaU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 9U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                           & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 8U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 7U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 6U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 5U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 4U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 3U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 2U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 1U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
                  & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid))) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1));
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = (((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid)) 
               | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = (((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid)) 
               | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready) 
               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready) 
               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                    : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0))) 
               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_bready) 
                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                    : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0))) 
               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready) 
               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) 
             != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter 
            = (0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo) 
                         - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid))));
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid)) 
               | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_bready) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid)) 
               | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
        }
    }
    if (difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1 
               + (0xffffU & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len_1 
            = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1) 
                        - (IData)(1U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
            = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr
                : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                    ? ((0x7fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                                                   | (0x7fffU 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                                         | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                            >> 8U))))))
                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)) 
                << 0xdU) | (QData)((IData)(((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize) 
                                            << 2U))));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r 
            = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r 
            = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r 
            = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                       >> 0xbU));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg 
            = (0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                               >> 0x2bU)));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr)) 
                << 0xdU) | (QData)((IData)(((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                               ? 0U
                                               : 3U) 
                                             << 5U) 
                                            | (((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize) 
                                                << 2U) 
                                               | ((2U 
                                                   == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                                   ? 0U
                                                   : 1U))))));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r 
            = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                       >> 0xbU));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg 
            = (0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                               >> 0x2bU)));
    }
    if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata;
    }
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write_r 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata)) 
                << 5U) | (QData)((IData)((1U | ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb) 
                                                << 1U)))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3) 
                                   << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb__v3))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelf->__VdfgTmp_h2168da81__0 = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0 
            = (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1 
            = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                        >> 8U));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2 
            = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                        >> 0x10U));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3 
            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
               >> 0x18U);
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
            ? vlSelf->__VdfgTmp_h2168da81__0 : 0U);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU)));
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid = 0U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU))) : 0U);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_wready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_awready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_rready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_bready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_arready 
        = (1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full) 
                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready)) 
           & ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready) 
              | (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid 
            = (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid 
            = (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data)) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rid 
        = (0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                     ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                >> 0x23U)) : 0U) | 
                   (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                      ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                      : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_id)
                                : 0U))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid 
        = (0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                     ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                        >> 2U) : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                                         ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_id)
                                         : 0U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelf->reset;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__counter 
        = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__cmd 
        = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state 
        = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__data 
        = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__addr 
        = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr;
    if (vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__counter = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                         : 0U));
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__cmd 
            = ((0xfeU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd) 
                         << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi));
    } else {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))));
    }
    if (vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)))) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:45: Assertion failed in %Ndifftest_top.soc.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/perip/flash/flash.v", 45, "");
    }
    if (vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__data = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter))
                     ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                     : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v0 = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v8;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 0;
    CData/*6:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 0;
    IData/*31:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16 = 0;
    CData/*2:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0 = 0;
    IData/*24:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0 = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw = 0;
    // Body
    vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle;
    vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0 = 0U;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v8 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16 = 0U;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw;
    vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid) {
            vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_target;
            vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0 = 1U;
            vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0 
                = (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc 
                         >> 2U));
            vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc;
            vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0 = 1U;
            vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0 
                = (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc 
                         >> 2U));
        }
        if (((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid) 
             & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
        }
    }
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen) 
         & (0U != (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu))))) {
        vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu;
        vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0 = 1U;
        vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0 
            = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime = 0ULL;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid = 0x18d6687U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid = 0x79737978U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save = 0U;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v0 = 1U;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime 
            = (1ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime);
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh 
            = (IData)(((1ULL + (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle)))) 
                       >> 0x20U));
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle 
            = ((IData)(1U) + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next;
        if (((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save = 0U;
        }
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat = 0U;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_flush) {
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v8 = 1U;
        }
        if (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata;
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 = 1U;
                __Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 
                    = (0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat) 
                                << 5U));
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0 
                    = (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                             >> 4U));
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) {
                    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16 = 1U;
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16 
                        = (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                 >> 4U));
                    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0 
                        = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                           >> 7U);
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0 
                        = (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                 >> 4U));
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp;
            }
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat))));
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0), 
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache
                        [__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0], __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache__v0);
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7U] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v8) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7U] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag__v0;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid__v16] = 1U;
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast = 0U;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid = 0U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state = 0U;
    } else {
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw = 0U;
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu 
                = ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save
                    : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out
                        : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                            ? (((- (IData)((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                     >> 0xfU))))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                            : ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                ? (((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                      >> 7U))))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                : 0U))));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc_out 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_pc_out;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw = 1U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next;
    }
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast = 1U;
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid = 1U;
        }
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el = 1U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint = 0U;
    } else {
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el = 1U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw = 0U;
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save 
                = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                    ? 2U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                             ? 1U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                      ? 0U : 3U)));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2;
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_pc_out 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el = 0U;
            if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls)))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw = 1U;
            }
        }
        if (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
             & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid))) {
            if ((0U == ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                         ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp)
                         : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp)))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out 
                    = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                        ? vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                        : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw = 1U;
            } else {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el = 1U;
            }
        }
        if (((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el = 1U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next;
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
                if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint = 0U;
                } else if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint 
                        = (0x200U == (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                      >> 0x10U));
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp = 0U;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
            if ((0x2000000U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save)) {
                if ((0x2000004U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save)) {
                    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp = 2U;
                }
            }
            if ((0x2000000U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save)) {
                vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata 
                    = (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime);
            } else if ((0x2000004U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save)) {
                vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata 
                    = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime 
                               >> 0x20U));
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next = 1U;
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next = 0U;
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next = 0U;
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next = 1U;
        }
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize = 2U;
    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save)))) {
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize = 2U;
        } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize = 1U;
        } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize = 0U;
        }
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize = 2U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save) {
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize = 2U;
        } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize = 1U;
        } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize = 0U;
        }
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid = 1U;
        }
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid = 0U;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready = 0U;
    if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
                vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready = 1U;
            }
        }
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready = 0U;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid = 0U;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid = 0U;
    if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done)))) {
                    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done)))) {
                    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))) {
                vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) {
                vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid = 1U;
            }
        }
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h69a2ee77_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4032e768_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hc6114f20_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vtop__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hf453b5e1_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vtop__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr = 0;
    CData/*1:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype = 0;
    CData/*7:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen = 0;
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr = 0;
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr = 0;
    CData/*1:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype = 0;
    CData/*7:0*/ __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen;
    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen = 0;
    SData/*13:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT___asic_spi_sck;
    __Vdly__difftest_top__DOT__soc__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    SData/*13:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v0 = 0;
    QData/*32:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter = 0;
    CData/*5:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat = 0;
    CData/*5:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat = 0;
    CData/*4:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v32;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v32 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v33;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v33 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v66;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v66 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v67;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v67 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v68;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v68 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v69;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v69 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v70;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v70 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v71;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v71 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v72;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v72 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v73;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v73 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v74;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v74 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v75;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v75 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v76;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v76 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v77;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v77 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v78;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v78 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v79;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v79 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v80;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v80 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v81;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v81 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v82;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v82 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v83;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v83 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v84;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v84 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v85;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v85 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v86;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v86 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v87;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v87 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v88;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v88 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v89;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v89 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v90;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v90 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v91;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v91 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v92;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v92 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v93;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v93 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v94;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v94 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v95;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v95 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158 = 0;
    QData/*32:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159 = 0;
    CData/*4:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 = 0;
    IData/*31:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64;
    __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__difftest_top__DOT__soc__DOT___asic_spi_sck 
        = vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT___asic_spi_mosi 
        = vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v33 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v32 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat;
    __Vdly__difftest_top__DOT__soc__DOT___asic_spi_sck 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                 & (0U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                & ((0U 
                                                    != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck)))
                                                ? (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck))
                                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck))));
    vlSelf->__Vdly__difftest_top__DOT__soc__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc) 
                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb)) 
                                         & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                                         & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    __Vtableidx6 = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w) 
                     << 3U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w) 
                                << 2U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                           << 1U) | (IData)(vlSelf->reset))));
    if ((1U & Vtop__ConstPool__TABLE_h69a2ee77_0[__Vtableidx6])) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = Vtop__ConstPool__TABLE_h4032e768_0[__Vtableidx6];
    }
    if ((2U & Vtop__ConstPool__TABLE_h69a2ee77_0[__Vtableidx6])) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = Vtop__ConstPool__TABLE_hc6114f20_0[__Vtableidx6];
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelf->reset) {
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v0 = 1U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter = 0ULL;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save = 0U;
        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v1 = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode = 0U;
    } else {
        if ((0U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x30cU;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        } else if ((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        } else if ((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        } else if ((IData)((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        } else {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso) 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                                           ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                                           : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (0x3fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                          >> 0xdU));
                        __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                     >> 0xbU));
                    }
                }
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                        = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 0U : vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata);
                }
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if ((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we)) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i 
                                   | (1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        } else if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q;
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        } else if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                    & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                    ? (0x20U | ((0U == ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                         ? 0U : 3U)) 
                                << 4U)) : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                            ? 0x10U
                                            : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we)) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i);
            }
        }
        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 1U : 2U);
            }
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                 >> 0xbU)))) 
                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 0U;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 7U : 4U);
                } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                }
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 3U : 7U);
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((0x32U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((0x28U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 2U : (((0x14U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                                 ? 1U : ((0xaU == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                          ? 0U : 7U)));
            }
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                               >> 0xbU)))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
        if ((IData)((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0U;
                } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                    if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0U;
                    } else {
                        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                              >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode 
                                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter;
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid = 1U;
                        }
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc) 
                           ^ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                              >> 1U));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0xaU;
                } else {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
                        = ((0x80U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                     << 6U)) | (0x7fU 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter) 
                                                   >> 1U)));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc) 
                           ^ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                              >> 1U));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)));
                }
            } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
                    = ((0x80U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                 << 6U)) | (0x7fU & 
                                            ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter) 
                                             >> 1U)));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
                    = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc) 
                       ^ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                          >> 1U));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)));
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
                    = ((0x80U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                 << 6U)) | (0x7fU & 
                                            ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter) 
                                             >> 1U)));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
                    = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc) 
                       ^ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                          >> 1U));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)));
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
                    = ((0x80U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                 << 6U)) | (0x7fU & 
                                            ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter) 
                                             >> 1U)));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
                    = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc) 
                       ^ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                          >> 1U));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)));
            } else if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                 >> 1U)))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 1U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter = 0U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc = 0U;
            }
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                    & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid = 0U;
        }
        if (((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter 
                = ((IData)(0xaU) + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter);
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr;
            }
        }
        if (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state)) 
             & (0U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter 
                = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter 
                   - (IData)(1U));
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite))) {
            if ((0U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r 
                        = ((0xff00U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r)) 
                           | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata));
                }
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r 
                        = ((0xffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r)) 
                           | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata));
                }
            }
            if ((0U != (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
                if ((4U != (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
                    if ((8U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
                        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r 
                                = (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata);
                        }
                        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r 
                                = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 8U));
                        }
                        if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r 
                                = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U));
                        }
                        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r 
                                = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U);
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0U;
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready = 1U;
                    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable))) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0xaU;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata 
                    = ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                        << 0x18U) | ((0xff0000U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                   << 8U)) 
                                     | ((0xff00U & 
                                         (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                          >> 8U)) | 
                                        (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                         >> 0x18U))));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 8U;
                } else if ((0x100U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen = 1U;
                } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 7U;
                }
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
                    = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                        ? 6U : 5U);
            }
        } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
                = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                    ? 4U : 3U);
        } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 2U;
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready = 0U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen = 0U;
            if (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)) 
                  & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable))) 
                 & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr 
                    = (0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr);
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 1U;
            }
        }
        if ((((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype))) {
                    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr;
                } else if ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = ((__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr 
                            & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr) 
                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = ((IData)(4U) + __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr);
                }
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout;
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0xffU;
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout 
                    = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
            }
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype = 0U;
            } else {
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen = 3U;
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype = 1U;
            }
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                           ? 0U : 3U));
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0xffU & (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                              ? 0U : 3U) - (IData)(1U)));
            __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr 
                = vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype))) {
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr;
            } else if ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                          ? 0xfU : 
                                         ((7U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                           ? 0x1fU : 0x3fU))));
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = ((__Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr 
                        & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr) 
                          & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = ((IData)(4U) + __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr);
            }
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout;
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter = 0ULL;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received = 0U;
            if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                  & (0xa0000000U <= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)) 
                 & (0xbfffffffU >= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter));
            }
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v32 = 1U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat = 0U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat = 0U;
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save = 0U;
            __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v33 = 1U;
            if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                  & (0xa0000000U <= vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr)) 
                 & (0xbfffffffU >= vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64 = 1U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save 
                    = ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                        ? 0U : 3U);
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save = 0U;
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [1U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65 = 1U;
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v66 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [2U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v67 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [3U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v68 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [4U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v69 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [5U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v70 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [6U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v71 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [7U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v72 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [8U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v73 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [9U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v74 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xaU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v75 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xbU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v76 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xcU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v77 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xdU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v78 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xeU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v79 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xfU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v80 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x10U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v81 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x11U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v82 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x12U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v83 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x13U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v84 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x14U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v85 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x15U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v86 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x16U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v87 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x17U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v88 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x18U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v89 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x19U]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v90 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1aU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v91 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1bU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v92 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1cU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v93 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1dU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v94 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1eU]));
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v95 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1fU]));
            }
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received)) 
                       & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving))))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter));
            } else if ((0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter)) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
                                         - 1ULL));
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save 
                    = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
            }
        }
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state))) {
            if (((0U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96 = 1U;
            }
            if ((((0U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97 = 1U;
            }
            if (((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [1U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98 = 1U;
            }
            if ((((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (1U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [1U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [1U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99 = 1U;
            }
            if (((2U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [2U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100 = 1U;
            }
            if ((((2U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (2U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [2U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [2U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101 = 1U;
            }
            if (((3U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [3U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102 = 1U;
            }
            if ((((3U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (3U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [3U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [3U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103 = 1U;
            }
            if (((4U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [4U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104 = 1U;
            }
            if ((((4U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (4U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [4U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [4U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105 = 1U;
            }
            if (((5U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [5U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106 = 1U;
            }
            if ((((5U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (5U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [5U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [5U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107 = 1U;
            }
            if (((6U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [6U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108 = 1U;
            }
            if ((((6U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (6U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [6U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [6U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109 = 1U;
            }
            if (((7U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [7U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110 = 1U;
            }
            if ((((7U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (7U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [7U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [7U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111 = 1U;
            }
            if (((8U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (8U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [8U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112 = 1U;
            }
            if ((((8U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (8U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [8U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [8U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113 = 1U;
            }
            if (((9U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (9U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [9U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114 = 1U;
            }
            if ((((9U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (9U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [9U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [9U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115 = 1U;
            }
            if (((0xaU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xaU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xaU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116 = 1U;
            }
            if ((((0xaU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xaU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xaU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xaU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117 = 1U;
            }
            if (((0xbU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xbU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xbU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118 = 1U;
            }
            if ((((0xbU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xbU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xbU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xbU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119 = 1U;
            }
            if (((0xcU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xcU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xcU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120 = 1U;
            }
            if ((((0xcU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xcU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xcU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xcU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121 = 1U;
            }
            if (((0xdU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xdU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xdU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122 = 1U;
            }
            if ((((0xdU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xdU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xdU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xdU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123 = 1U;
            }
            if (((0xeU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xeU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xeU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124 = 1U;
            }
            if ((((0xeU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xeU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xeU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xeU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125 = 1U;
            }
            if (((0xfU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0xfU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xfU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126 = 1U;
            }
            if ((((0xfU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0xfU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                             + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0xfU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0xfU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127 = 1U;
            }
            if (((0x10U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x10U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x10U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128 = 1U;
            }
            if ((((0x10U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x10U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x10U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x10U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129 = 1U;
            }
            if (((0x11U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x11U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x11U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130 = 1U;
            }
            if ((((0x11U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x11U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x11U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x11U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131 = 1U;
            }
            if (((0x12U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x12U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x12U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132 = 1U;
            }
            if ((((0x12U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x12U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x12U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x12U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133 = 1U;
            }
            if (((0x13U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x13U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x13U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134 = 1U;
            }
            if ((((0x13U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x13U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x13U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x13U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135 = 1U;
            }
            if (((0x14U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x14U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x14U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136 = 1U;
            }
            if ((((0x14U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x14U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x14U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x14U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137 = 1U;
            }
            if (((0x15U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x15U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x15U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138 = 1U;
            }
            if ((((0x15U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x15U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x15U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x15U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139 = 1U;
            }
            if (((0x16U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x16U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x16U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140 = 1U;
            }
            if ((((0x16U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x16U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x16U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x16U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141 = 1U;
            }
            if (((0x17U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x17U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142 = 1U;
            }
            if ((((0x17U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x17U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x17U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x17U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143 = 1U;
            }
            if (((0x18U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x18U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x18U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144 = 1U;
            }
            if ((((0x18U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x18U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x18U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x18U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145 = 1U;
            }
            if (((0x19U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x19U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x19U]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146 = 1U;
            }
            if ((((0x19U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x19U < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x19U]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x19U] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147 = 1U;
            }
            if (((0x1aU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1aU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1aU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148 = 1U;
            }
            if ((((0x1aU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1aU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1aU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1aU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149 = 1U;
            }
            if (((0x1bU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1bU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1bU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150 = 1U;
            }
            if ((((0x1bU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1bU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1bU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1bU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151 = 1U;
            }
            if (((0x1cU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1cU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1cU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152 = 1U;
            }
            if ((((0x1cU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1cU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1cU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1cU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153 = 1U;
            }
            if (((0x1dU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1dU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1dU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154 = 1U;
            }
            if ((((0x1dU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1dU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1dU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1dU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155 = 1U;
            }
            if (((0x1eU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1eU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1eU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156 = 1U;
            }
            if ((((0x1eU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1eU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1eU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1eU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157 = 1U;
            }
            if (((0x1fU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)) 
                 & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) 
                       & (0x1fU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)))))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158 
                    = (0x1ffffffffULL & (9ULL + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1fU]));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158 = 1U;
            }
            if ((((0x1fU >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                  & (0x1fU < ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat) 
                              + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving)))) 
                 & (0ULL != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                    [0x1fU]))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159 
                    = (0x1ffffffffULL & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters
                                         [0x1fU] - 1ULL));
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159 = 1U;
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save;
                __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata;
                __Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64 
                    = (0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat));
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat)));
            }
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready))) {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat 
                    = (((0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat)) 
                        == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save))
                        ? 0U : (0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat))));
            }
        }
        if ((((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
              & (7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            Verilated::runFlushCallbacks();
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
        Verilated::runFlushCallbacks();
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0U] = 0ULL;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xaU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xbU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xcU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xdU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xeU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xfU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x10U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x11U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x12U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x13U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x14U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x15U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x16U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x17U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x18U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x19U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1aU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1bU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1cU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1dU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1eU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1fU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xaU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xbU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xcU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xdU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xeU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xfU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x10U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x11U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x12U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x13U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x14U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x15U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x16U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x17U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x18U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x19U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1aU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1bU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1cU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1dU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1eU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v32) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1U] = 0ULL;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v33) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xaU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xbU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xcU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xdU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xeU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0xfU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x10U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x11U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x12U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x13U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x14U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x15U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x16U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x17U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x18U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x19U] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1aU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1bU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1cU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1dU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1eU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0x1fU] = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xaU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xbU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xcU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xdU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xeU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xfU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x10U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x11U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x12U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x13U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x14U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x15U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x16U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x17U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x18U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x19U] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1aU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1bU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1cU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1dU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1eU] = 0ULL;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save__v64;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v64;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v65;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v66;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v67;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v68;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v69;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v70;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v71;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v72;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v73;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xaU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v74;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xbU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v75;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xcU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v76;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xdU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v77;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xeU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v78;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xfU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v79;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x10U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v80;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x11U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v81;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x12U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v82;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x13U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v83;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x14U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v84;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x15U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v85;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x16U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v86;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x17U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v87;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x18U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v88;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x19U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v89;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1aU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v90;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1bU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v91;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1cU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v92;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1dU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v93;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1eU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v94;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1fU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v95;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v96;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v97;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v98;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v99;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v100;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v101;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v102;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v103;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v104;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v105;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v106;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v107;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v108;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v109;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v110;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v111;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v112;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v113;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v114;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v115;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xaU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v116;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xaU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v117;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xbU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v118;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xbU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v119;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xcU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v120;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xcU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v121;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xdU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v122;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xdU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v123;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xeU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v124;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xeU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v125;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xfU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v126;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0xfU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v127;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x10U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v128;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x10U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v129;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x11U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v130;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x11U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v131;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x12U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v132;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x12U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v133;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x13U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v134;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x13U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v135;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x14U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v136;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x14U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v137;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x15U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v138;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x15U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v139;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x16U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v140;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x16U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v141;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x17U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v142;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x17U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v143;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x18U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v144;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x18U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v145;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x19U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v146;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x19U] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v147;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1aU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v148;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1aU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v149;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1bU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v150;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1bU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v151;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1cU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v152;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1cU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v153;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1dU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v154;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1dU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v155;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1eU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v156;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1eU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v157;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1fU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v158;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0x1fU] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters__v159;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                         >> 2U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                               >> 1U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((7U 
                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                                               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                  >> 3U))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                                              | (2U 
                                                 == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = Vtop__ConstPool__TABLE_h4abec798_0[__Vtableidx4];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__externalPins_uart_rx));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT____VdfgTmp_h41a511b9__0 
        = (IData)((0U != (0xeU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelf->__Vtableidx1 = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = Vtop__ConstPool__TABLE_h05f4911a_0[vlSelf->__Vtableidx1];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req = 0U;
    if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat = 0U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 0x18U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req = 1U;
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 0U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state) 
                      >> 1U)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat 
                = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                    ? 0x140U : 0U);
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req = 1U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr 
            = ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                    ? 0U : 0x10U) : ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                                      ? 0x10U : 0U));
    } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat 
                = (0x3000000U | (0xffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 4U;
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 0x18U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req = 1U;
    } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr = 0x14U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                             ? 7U : 0xaU)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph 
        = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                 - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                     ? 2U : 8U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph 
        = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                 - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                     ? 2U : 8U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8 
        = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                    - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                        ? 8U : 0xeU)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
           <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                ? 7U : 0xdU));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 2U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->__VdfgTmp_h8a1b6d6b__0 = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck 
        = __Vdly__difftest_top__DOT__soc__DOT___asic_spi_sck;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q = 0U;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0 
        = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid 
        = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 3U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 1U;
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we)) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i));
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate;
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelf->difftest_top__DOT__soc__DOT___dq_wire;
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss 
        = (0xffU & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                         >> 0xdU)))) 
                          | (- (IData)((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                 >> 0xdU)))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
            ? ((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
            : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
               == ((IData)(1U) + (0xffU & ((IData)(7U) 
                                           + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                               ? 0xeU
                                               : 0x14U))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 1U)));
    vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss));
    vlSelf->__Vtableidx8 = ((4U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss) 
                                   >> 5U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__state));
    vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso 
        = Vtop__ConstPool__TABLE_hf453b5e1_0[vlSelf->__Vtableidx8];
    vlSelf->__Vtableidx2 = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = Vtop__ConstPool__TABLE_hccb3c341_0[vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = Vtop__ConstPool__TABLE_he38796ec_0[vlSelf->__Vtableidx5];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                   >> 6U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}
