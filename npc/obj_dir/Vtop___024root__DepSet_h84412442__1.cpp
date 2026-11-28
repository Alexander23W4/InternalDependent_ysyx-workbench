// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__12__data;
    __Vtask_flash_read__12__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd)))) {
            Vtop___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                   ((0xfffffeU 
                                                                     & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi)), __Vtask_flash_read__12__data);
            vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__12__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:99: Assertion failed in %Ndifftest_top.soc.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../ysyxSoC/perip/flash/flash.v", 99, "");
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap 
        = ((vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)) : (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h3c012adc__0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
        = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out 
           >> (0x18U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                        << 3U)));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata 
        = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save 
           << (0x18U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                        << 3U)));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb = 0U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save) {
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb = 0xfU;
        } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb 
                = ((0U == (3U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save))
                    ? 3U : 0xcU);
        } else if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))) {
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb 
                = (0xfU & ((IData)(1U) << (3U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)));
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                                   >> 0x1cU))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & (4U ^ (4U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                     >> 0x1dU)))) | 
                  (3U & (2U ^ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                               >> 0x1cU)))));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ren) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
            [(0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save))];
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
            [(0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save))];
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de = 1U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus = 0x1800U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc = 0x30000000U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd = 0U;
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state = 0U;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next;
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen) {
            if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu))) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save = 1U;
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
            if ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb)) 
                  & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write))) 
                 & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save)))) {
                if ((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                           >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save)))) {
                    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
                        = (vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
                           | (0xffffffffULL & ((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save))));
                } else {
                    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                        = (vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                           | (0xffffffffULL & ((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save))));
                    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
                        = ((~ ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save))) 
                           & vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt);
                }
            }
        } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save = 0U;
            if ((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
                       >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save)))) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
                    = ((~ ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save))) 
                       & vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt);
            } else {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                    = ((~ ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save))) 
                       & vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list);
            }
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen) {
            if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu;
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
            if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en))) {
                if ((0x300U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb;
                } else if ((0x305U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb;
                } else if ((0x341U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb;
                } else if ((0x342U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb;
                }
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause = 0xbU;
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause = 3U;
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause = 0U;
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause = 1U;
            }
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause = 2U;
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save 
                = (0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                            >> 7U));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save 
                = (0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                            >> 0xfU));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save 
                = (0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                            >> 0x14U));
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_0;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_1;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrw_rst;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__taken_save 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__taken;
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el = 0U;
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de = 1U;
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception))) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de = 1U;
            } else {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el = 1U;
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next;
        if (((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
             & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid)))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save = 1U;
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush;
            }
        }
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) 
                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de)))) {
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd = 0U;
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush;
            }
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save;
            } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) {
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush;
            } else {
                if ((((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                       == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc
                       [(1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                               >> 2U))]) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid) 
                                            >> (1U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                                   >> 2U)))) 
                     & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                        > vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target
                        [(1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                >> 2U))]))) {
                    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target
                        [(1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                >> 2U))];
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__taken = 1U;
                } else {
                    vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                        = ((IData)(4U) + vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc);
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__taken = 0U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache;
                vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd = 1U;
                if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0 = 0U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1 = 0U;
                } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1 = 0U;
                } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0 = 0U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1 = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc;
            }
            vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save = 0U;
        }
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid) 
                   | (3U & ((IData)(1U) << (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc 
                                                  >> 2U)))));
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    if (vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0] 
            = vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr__v0;
    }
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint) 
            & (2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) 
           & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)) 
           & (((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
               & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid)) 
              | ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
                 & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [0U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[1U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [1U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[2U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [2U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[3U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [3U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[4U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [4U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[5U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [5U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[6U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [6U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[7U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [7U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[8U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [8U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[9U] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [9U];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xaU] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [0xaU];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xbU] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [0xbU];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xcU] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [0xcU];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xdU] 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
        [0xdU];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                                    [0xfU])) << 0x20U) 
                   | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                                     [0xeU]))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                                     [0xfU])) << 0x20U) 
                    | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                                      [0xeU]))) >> 0x20U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state;
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready = 0U;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
        if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next = 1U;
            vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready = 1U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state))) {
        if (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next = 0U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en 
        = (((IData)((0U != ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save))) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save)))) 
            << 2U) | (((IData)((0U != ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save))) 
                                       & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save)))) 
                       << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb 
        = ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en))
            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1
            : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en))
                ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                   | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save)
                : ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en))
                    ? ((~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1) 
                       & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save)
                    : 0U)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0 
        = (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen = 0U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen = 1U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save) 
                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                                         | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save) 
                                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type))))))))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save;
    if (vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target[vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0] 
            = vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target__v0;
    }
    if (vlSelf->__Vdlyvset__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc[vlSelf->__Vdlyvdim0__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0] 
            = vlSelf->__Vdlyvval__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc;
    if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
        vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize 
            = vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize;
        vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save;
    } else {
        vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize = 2U;
        vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
            = (0xfffffff0U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc);
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgExtracted_h6ce642d0__0 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type) 
            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0) 
               | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                  >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save)))) 
           | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
              & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                     | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0)))))) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_flush = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___optimisible_branch = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___compulsory_branch = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___possible_branch_instr = 0U;
    if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___optimisible_branch = 1U;
        }
        if (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save)) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save)) 
             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___compulsory_branch = 1U;
        }
        if ((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save)) 
               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save)) 
              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save)) 
             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___possible_branch_instr = 1U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk_flg = 0U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk_flg = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT___new_instr = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_0 = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_1 = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i = 0U;
    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw = 1U;
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr))) {
                                if ((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 7U)))))) {
                                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_0 = 1U;
                                    }
                                    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0)))) {
                                        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((1U == (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((0U 
                                                 != 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0x19U))) {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 0x19U))) {
                                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli = 1U;
                                            }
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((0x10U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((0U 
                                                 != 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0x19U))) {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 0x19U))) {
                                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            if ((0U 
                                                 != 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0x19U))) {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 0x19U))) {
                                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add = 1U;
                                            }
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll = 1U;
                                            }
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt = 1U;
                                            }
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                                >> 0x19U)))))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0U != (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0xcU)))) {
                                        if ((2U == 
                                             (7U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw = 1U;
                                        }
                                    }
                                    if ((1U == (7U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0xcU)))) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh = 1U;
                                    }
                                }
                                if ((0U == (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w 
        = (((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x14U));
    if ((0x40U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
        if ((0x20U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne = 1U;
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0x2000U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 7U))) {
                                    if ((0x604000U 
                                         != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 7U))) {
                                        if ((0U != 
                                             (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                              >> 7U))) {
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 0xcU)))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw = 1U;
                                            }
                                            if ((1U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 0xcU)))) {
                                                if (
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                         >> 0xcU)))) {
                                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                         >> 0xcU)))) {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                             >> 0xcU)))) {
                                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                               >> 7U)))))) {
                                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall = 1U;
                                        }
                                    }
                                    if ((0x604000U 
                                         == (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 7U))) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret = 1U;
                                    }
                                }
                                if ((0x2000U == (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 7U))) {
                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak = 1U;
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                } else if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((0x2000U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 7U))) {
                            if ((0x604000U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 7U))) {
                                if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 7U))) {
                                    if ((1U != (7U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (7U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 0xcU)))) {
                                            if ((3U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 0xcU)))) {
                                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                            = (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                               >> 0x14U);
                    } else {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                }
            } else if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((1U & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        }
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                            = ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)
                                ? (((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                          >> 0x14U)))))
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w);
                    } else {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                }
            } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            } else if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        }
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = (((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 7U)))));
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            }
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        }
    } else if ((0x20U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
        if ((0x10U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)
                            ? (0xfffff000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)
                            : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w);
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
                }
            } else {
                if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                    if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x19U))) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                    }
                                } else if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0x19U))) {
                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                }
                            } else if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0x19U))) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                    }
                                }
                            } else if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 0x19U))) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                            }
                        } else if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x19U))) {
                                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                }
                            } else if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 0x19U))) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                            }
                        } else if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x19U))) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                            }
                        } else if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                           >> 0x19U))) {
                            if ((0x20U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                           >> 0x19U))) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                            }
                        }
                    } else {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            }
        } else if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        } else if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((0U != (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                  >> 0xcU)))) {
                    if ((1U != (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xcU)))) {
                        if ((2U != (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        }
                    }
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = (((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 7U))));
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            }
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        }
    } else if ((0x10U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
        if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                }
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)
                        ? (0xfffff000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)
                        : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w);
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
            }
        } else {
            if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0x19U))) {
                                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                            if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x19U))) {
                                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            }
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
        }
    } else {
        if ((8U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        if ((1U != (7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                        }
                    } else {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            }
        } else if ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
        } else if ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                if ((0x4000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                } else if ((0x2000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                    if ((0x1000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
                    }
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            }
        } else if ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
        } else if ((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                           >> 7U))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
        } else if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0)))) {
            if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1)))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2 = 1U;
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___raw_block = 0U;
    if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgExtracted_h6ce642d0__0) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___raw_block = 1U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT___new_instr = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgExtracted_h6ce642d0__0)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next = 2U;
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next = 0U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ren = 0U;
    if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ren = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
            if ((3U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
                if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_flush 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save;
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid = 1U;
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
                if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end = 1U;
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__compulsory_branch_instrs 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall) 
                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak) 
                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
                                                   >> 0x1cU))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & (4U ^ (4U & (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
                                     >> 0x1dU)))) | 
                  (3U & (2U ^ (vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr 
                               >> 0x1cU)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrw_rst 
        = (((((((((0x300U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                  | (0x305U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
                 | (0x341U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
                | (0x342U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
               | (0xb00U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
              | (0xb80U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
             | (0xf11U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))) 
            | (0xf12U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)))
            ? ((0x300U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus
                : ((0x305U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec
                    : ((0x341U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc
                        : ((0x342U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause
                            : ((0xb00U == (0xfffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle
                                : ((0xb80U == (0xfffU 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh
                                    : ((0xf11U == (0xfffU 
                                                   & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid
                                        : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid)))))))
            : 0U);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid = 1U;
        }
    }
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid) {
            if ((0U != (3U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid = 1U;
            } else if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error = 2U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid = 1U;
            } else if ((((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                          >> 7U) == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag
                         [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                 >> 4U))]) & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid
                        [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                >> 4U))])) {
                __Vtemp_h3c012adc__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache
                    [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                            >> 4U))][0U];
                __Vtemp_h3c012adc__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache
                    [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                            >> 4U))][1U];
                __Vtemp_h3c012adc__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache
                    [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                            >> 4U))][2U];
                __Vtemp_h3c012adc__0[3U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache
                    [(7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                            >> 4U))][3U];
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache 
                    = __Vtemp_h3c012adc__0[(3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                                  >> 2U))];
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid = 1U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___fetch_done = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___fetch_done = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
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
    vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready 
        = ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
            ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)
            : (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
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
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Body
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
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
}

void Vtop___024root____Vdpiimwrap_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU)) : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save);
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready) 
            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                  == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
              & (7U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
    } else {
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
                = (3U & 0U);
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
                = (0xffU & 0U);
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
                = (3U & 1U);
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
                = (0xffU & 3U);
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata 
        = ((((((((((((((((((((((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save))) 
                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save) 
                              | ((- (IData)((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save)) 
                                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save)))) 
                                 & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save)) 
                             | ((- (IData)(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save)))) 
                                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft)) 
                            | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save))) 
                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                  - vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))) 
                           | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save))) 
                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                 ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))) 
                          | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save))) 
                             & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))) 
                         | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))) 
                            & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                               | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))) 
                        | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save))) 
                           & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                              | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))) 
                       | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save))) 
                          & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))) 
                      | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save))) 
                         & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                            & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))) 
                     | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save))) 
                        & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                           << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)))) 
                    | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save))) 
                       & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                          << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)))) 
                   | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save))) 
                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                         >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)))) 
                  | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save))) 
                     & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                        >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)))) 
                 | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save))) 
                    & VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                     (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)))) 
                | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save))) 
                   & VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                    (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)))) 
               | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save))) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt))) 
              | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save))) 
                 & VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) 
             | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save))) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu))) 
            | ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save))) 
               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                  < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))) 
           | ((- (IData)((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save) 
                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save)) 
                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save)))) 
              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt)) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_eq)) 
              | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_eq)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save)) 
                 | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt)) 
                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save)) 
                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu)) 
                       | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu)) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_target = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0 
        = (((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
               == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
           & (7U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush 
        = ((0xfffffffeU & ((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save))) 
                           & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save)) 
           | (((- (IData)(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken)))) 
               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save) 
              | (((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0))) 
                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec) 
                 | (((- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save))) 
                     & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc) 
                    | ((- (IData)((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken)) 
                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type)) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save)))) 
                       & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush = 0U;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
            if ((3U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
                if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))) {
                    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_target 
                            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save;
                    }
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush 
                        = ((((((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save)) 
                                  | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type) 
                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken) 
                                        != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__taken_save)))) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save)) 
                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save)) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save)) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save)) 
                            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save)) 
                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save));
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk = 0U;
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) 
         & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
            & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid))))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___flush_ifu_blk = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de) 
              & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__compulsory_branch_instrs))) 
             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__compulsory_branch_instrs)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next = 0U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___btb_hit = 0U;
    if ((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid) 
            & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush))) 
           & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save))) 
          & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
             == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc
             [(1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                     >> 2U))])) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid) 
                                   >> (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                             >> 2U))))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___btb_hit = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1cU)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                >> 0x18U)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                           >> 0x18U))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x1eU & 
                                            (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)))) 
                               | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 0x18U)))) 
                       << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_arready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        Vtop___024root____Vdpiimwrap_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__8__rdata);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__8__rdata;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_awready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_wready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    // Init
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid = 0;
    IData/*31:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata = 0;
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready;
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
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    // Init
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
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
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
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
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q) 
                       | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)) 
                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                       | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)) 
                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))
            ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb)
            : 0U);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save
                : vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_arready 
        = ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                     >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
            | (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready)));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                  | (0x1f8U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT____VdfgTmp_h41a511b9__0) 
                                << 3U) & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                          >> 0x17U))))) 
           | (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                  | (((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                          >> 0x1aU)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT____VdfgTmp_h41a511b9__0)) 
                     << 3U))) | (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_arready) 
           & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                    if ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                         & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                              >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                        >> 0xbU))) 
                             & ((0x3fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                [(3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                        >> 0xbU))]))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                        }
                    }
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                    if ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                              >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                        >> 0xbU))) 
                             & ((0x3fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                [(3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                        >> 0xbU))]))) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                        }
                    }
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                    >> 0xbU))) & ((0x3fffU 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                      >> 0xdU)) 
                                                  == 
                                                  vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                                  [
                                                  (3U 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                      >> 0xbU))]))) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 0xbU;
                    }
                }
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                >> 0xbU))) & ((0x3fffU 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                  >> 0xdU)) 
                                              == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                   >> 0xbU))]))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 0xaU;
                }
            }
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                >> 0xbU))) & ((0x3fffU 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                  >> 0xdU)) 
                                              == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                   >> 0xbU))]))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                            >> 0xbU))))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_awready) 
           & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
}
