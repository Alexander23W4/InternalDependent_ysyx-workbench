// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_ysyx_26040135_AXI4.h"

void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_error_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ifu_error, IData/*31:0*/ &lsu_error, IData/*31:0*/ &master_validation_error);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_halt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_new_instr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &new_instr);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_pipeline_bottleneck_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ifu_out_valid, IData/*31:0*/ &exu_in_ready, IData/*31:0*/ &exu_out_valid, IData/*31:0*/ &lsu_in_ready, IData/*31:0*/ &lsu_out_valid, IData/*31:0*/ &wbu_in_ready);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_wen_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &wen);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP(Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 32> &dbg_regs, IData/*31:0*/ &pc, IData/*31:0*/ &mstatus, IData/*31:0*/ &mepc, IData/*31:0*/ &mcause, IData/*31:0*/ &mtvec, QData/*63:0*/ &mcycle, IData/*31:0*/ &instr);
void Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_read_gpr_TOP(Vtop__Syms* __restrict vlSymsp, VlUnpacked<IData/*31:0*/, 32> &gprs, IData/*31:0*/ &pc);

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
    , TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint{this, Verilated::catName(namep, "difftest_top.soc.asic.cpu.cpu.bus_clint")}
    , TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache{this, Verilated::catName(namep, "difftest_top.soc.asic.cpu.cpu.bus_icache")}
    , TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu{this, Verilated::catName(namep, "difftest_top.soc.asic.cpu.cpu.bus_ifu")}
    , TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu{this, Verilated::catName(namep, "difftest_top.soc.asic.cpu.cpu.bus_lsu")}
    , TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master{this, Verilated::catName(namep, "difftest_top.soc.asic.cpu.cpu.bus_master")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint = &TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint;
    TOP.__PVT__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache = &TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache;
    TOP.__PVT__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu = &TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu;
    TOP.__PVT__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu = &TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu;
    TOP.__PVT__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master = &TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.__Vconfigure(true);
    TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.__Vconfigure(false);
    TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.__Vconfigure(false);
    TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.__Vconfigure(false);
    TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.__Vconfigure(false);
    // Setup scopes
    __Vscope_difftest_top__soc__asic__axi42apb.configure(this, name(), "difftest_top.soc.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__axi4frag.configure(this, name(), "difftest_top.soc.asic.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__axi4xbar.configure(this, name(), "difftest_top.soc.asic.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__axi4xbar_1.configure(this, name(), "difftest_top.soc.asic.axi4xbar_1", "axi4xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__axi4yank.configure(this, name(), "difftest_top.soc.asic.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__axi4yank__unnamedblk1.configure(this, name(), "difftest_top.soc.asic.axi4yank.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__cpu__cpu.configure(this, name(), "difftest_top.soc.asic.cpu.cpu", "cpu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__asic__lmrom.configure(this, name(), "difftest_top.soc.asic.lmrom", "lmrom", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__flash.configure(this, name(), "difftest_top.soc.flash", "flash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_difftest_top__soc__flash__flash_cmd_i.configure(this, name(), "difftest_top.soc.flash.flash_cmd_i", "flash_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "check_error", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_error_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "check_halt", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_halt_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "check_new_instr", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_new_instr_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "check_pipeline_bottleneck", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_pipeline_bottleneck_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "check_wen", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__check_wen_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "debug_read_all", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_read_all_TOP));
        __Vscope_difftest_top__soc__asic__cpu__cpu.exportInsert(__Vfinal, "difftest_read_gpr", (void*)(&Vtop___024root____Vdpiexp_difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_read_gpr_TOP));
    }
}
