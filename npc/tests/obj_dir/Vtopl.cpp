// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtopl.h"
#include "Vtopl__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtopl::Vtopl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtopl__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , instr{vlSymsp->TOP.instr}
    , dbg_reg{vlSymsp->TOP.dbg_reg}
    , _pc{vlSymsp->TOP._pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtopl::Vtopl(const char* _vcname__)
    : Vtopl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtopl::~Vtopl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtopl___024root___eval_debug_assertions(Vtopl___024root* vlSelf);
#endif  // VL_DEBUG
void Vtopl___024root___eval_static(Vtopl___024root* vlSelf);
void Vtopl___024root___eval_initial(Vtopl___024root* vlSelf);
void Vtopl___024root___eval_settle(Vtopl___024root* vlSelf);
void Vtopl___024root___eval(Vtopl___024root* vlSelf);

void Vtopl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtopl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtopl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtopl___024root___eval_static(&(vlSymsp->TOP));
        Vtopl___024root___eval_initial(&(vlSymsp->TOP));
        Vtopl___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtopl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtopl::eventsPending() { return false; }

uint64_t Vtopl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtopl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtopl___024root___eval_final(Vtopl___024root* vlSelf);

VL_ATTR_COLD void Vtopl::final() {
    Vtopl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtopl::hierName() const { return vlSymsp->name(); }
const char* Vtopl::modelName() const { return "Vtopl"; }
unsigned Vtopl::threads() const { return 1; }
