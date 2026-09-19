// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vclint_tb__Syms.h"
#include "Vclint_tb.h"
#include "Vclint_tb___024root.h"
#include "Vclint_tb_ysyx_26040135_AXI4.h"

// FUNCTIONS
Vclint_tb__Syms::~Vclint_tb__Syms()
{
}

Vclint_tb__Syms::Vclint_tb__Syms(VerilatedContext* contextp, const char* namep, Vclint_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__clint_tb__DOT__bus{this, Verilated::catName(namep, "clint_tb.bus")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__clint_tb__DOT__bus = &TOP__clint_tb__DOT__bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__clint_tb__DOT__bus.__Vconfigure(true);
}
