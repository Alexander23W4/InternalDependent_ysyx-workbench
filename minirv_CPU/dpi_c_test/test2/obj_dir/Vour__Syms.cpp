// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vour__Syms.h"
#include "Vour.h"
#include "Vour___024root.h"

void Vour___024root____Vdpiexp_our__DOT__publicSetBool_TOP(Vour__Syms* __restrict vlSymsp, IData/*31:0*/ in_bool);

// FUNCTIONS
Vour__Syms::~Vour__Syms()
{
}

Vour__Syms::Vour__Syms(VerilatedContext* contextp, const char* namep, Vour* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_our.configure(this, name(), "our", "our", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_our.exportInsert(__Vfinal, "publicSetBool", (void*)(&Vour___024root____Vdpiexp_our__DOT__publicSetBool_TOP));
    }
}
