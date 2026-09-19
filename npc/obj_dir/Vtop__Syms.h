// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_ysyx_26040135_AXI4.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop__Vcb_check_end_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &period_end);
using Vtop__Vcb_check_error_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ifu_error, IData/*31:0*/ &lsu_error, IData/*31:0*/ &master_validation_error);
using Vtop__Vcb_debug_read_all_t = void (*) (Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 32> &dbg_regs, IData/*31:0*/ &pc, IData/*31:0*/ &mstatus, IData/*31:0*/ &mepc, IData/*31:0*/ &mcause, IData/*31:0*/ &mtvec, QData/*63:0*/ &mcycle, IData/*31:0*/ &instr);
using Vtop__Vcb_get_ifu_region_counts_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_ifu_region_cycles_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_lsu_read_region_counts_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_lsu_read_region_cycles_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_lsu_write_region_counts_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_lsu_write_region_cycles_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_region_cycles_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
using Vtop__Vcb_get_unit_cycles_t = void (*) (Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_ifu_cycles, QData/*63:0*/ &out_lsu_cycles, QData/*63:0*/ &out_lsu_read_cycles, QData/*63:0*/ &out_lsu_write_cycles);
using Vtop__Vcb_halt_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog);

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_ysyx_26040135_AXI4        TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint;
    Vtop_ysyx_26040135_AXI4        TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu;
    Vtop_ysyx_26040135_AXI4        TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu;
    Vtop_ysyx_26040135_AXI4        TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCFull__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCFull__flash;
    VerilatedScope __Vscope_ysyxSoCFull__flash__flash_cmd_i;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
