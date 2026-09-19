// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vxbar_tb__Syms.h"
#include "Vxbar_tb.h"
#include "Vxbar_tb___024root.h"
#include "Vxbar_tb_ysyx_26040135_AXI4.h"

// FUNCTIONS
Vxbar_tb__Syms::~Vxbar_tb__Syms()
{
}

Vxbar_tb__Syms::Vxbar_tb__Syms(VerilatedContext* contextp, const char* namep, Vxbar_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__xbar_tb__DOT__cm{this, Verilated::catName(namep, "xbar_tb.cm")}
    , TOP__xbar_tb__DOT__ifu{this, Verilated::catName(namep, "xbar_tb.ifu")}
    , TOP__xbar_tb__DOT__lsu{this, Verilated::catName(namep, "xbar_tb.lsu")}
    , TOP__xbar_tb__DOT__mm{this, Verilated::catName(namep, "xbar_tb.mm")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__xbar_tb__DOT__cm = &TOP__xbar_tb__DOT__cm;
    TOP.__PVT__xbar_tb__DOT__ifu = &TOP__xbar_tb__DOT__ifu;
    TOP.__PVT__xbar_tb__DOT__lsu = &TOP__xbar_tb__DOT__lsu;
    TOP.__PVT__xbar_tb__DOT__mm = &TOP__xbar_tb__DOT__mm;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__xbar_tb__DOT__cm.__Vconfigure(true);
    TOP__xbar_tb__DOT__ifu.__Vconfigure(false);
    TOP__xbar_tb__DOT__lsu.__Vconfigure(false);
    TOP__xbar_tb__DOT__mm.__Vconfigure(false);
}
