// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__get_decode_signals_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &instr_val, IData/*31:0*/ &addi_s, IData/*31:0*/ &add_s, IData/*31:0*/ &jalr_s, IData/*31:0*/ &lui_s, IData/*31:0*/ &lw_s, IData/*31:0*/ &lbu_s, IData/*31:0*/ &sw_s, IData/*31:0*/ &sb_s, IData/*31:0*/ &ebreak_s, IData/*31:0*/ &rd_val, IData/*31:0*/ &rs1_val, IData/*31:0*/ &rs2_val, IData/*31:0*/ &immI_val, IData/*31:0*/ &immU_val, IData/*31:0*/ &immS_val, IData/*31:0*/ &wdata_val, IData/*31:0*/ &rdata1_val, IData/*31:0*/ &rdata2_val, IData/*31:0*/ &wen_val);
void Vtop___024root____Vdpiexp_top__DOT__halt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog);

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
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top.exportInsert(__Vfinal, "get_decode_signals", (void*)(&Vtop___024root____Vdpiexp_top__DOT__get_decode_signals_TOP));
        __Vscope_top.exportInsert(__Vfinal, "halt", (void*)(&Vtop___024root____Vdpiexp_top__DOT__halt_TOP));
    }
}
