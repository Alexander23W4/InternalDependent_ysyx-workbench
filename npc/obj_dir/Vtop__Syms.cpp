// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_ysyx_26040135_AXI4.h"

void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_end_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &period_end);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_error_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ifu_error, IData/*31:0*/ &lsu_error, IData/*31:0*/ &master_validation_error);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP(Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 32> &dbg_regs, IData/*31:0*/ &pc, IData/*31:0*/ &mstatus, IData/*31:0*/ &mepc, IData/*31:0*/ &mcause, IData/*31:0*/ &mtvec, QData/*63:0*/ &mcycle, IData/*31:0*/ &instr);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_icache_counters_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_hit_cnt, QData/*63:0*/ &out_miss_cnt, QData/*63:0*/ &out_hit_cycles, QData/*63:0*/ &out_miss_cycles);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_ifu_region_counts_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_ifu_region_cycles_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_read_region_counts_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_read_region_cycles_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_write_region_counts_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_write_region_cycles_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_region_cycles_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_flash, QData/*63:0*/ &out_sram, QData/*63:0*/ &out_sdram, QData/*63:0*/ &out_other);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_unit_cycles_TOP(Vtop__Syms* __restrict vlSymsp, QData/*63:0*/ &out_ifu_cycles, QData/*63:0*/ &out_lsu_cycles, QData/*63:0*/ &out_lsu_read_cycles, QData/*63:0*/ &out_lsu_write_cycles);
void Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__halt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.bus_clint")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.bus_icache")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.bus_ifu")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.bus_lsu")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.bus_master")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.__Vconfigure(true);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.__Vconfigure(false);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu", "cpu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "check_end", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_end_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "check_error", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_error_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "debug_read_all", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_icache_counters", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_icache_counters_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_ifu_region_counts", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_ifu_region_counts_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_ifu_region_cycles", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_ifu_region_cycles_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_lsu_read_region_counts", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_read_region_counts_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_lsu_read_region_cycles", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_read_region_cycles_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_lsu_write_region_counts", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_write_region_counts_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_lsu_write_region_cycles", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_lsu_write_region_cycles_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_region_cycles", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_region_cycles_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "get_unit_cycles", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__get_unit_cycles_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "halt", (void*)(&Vtop___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__halt_TOP));
    }
}
