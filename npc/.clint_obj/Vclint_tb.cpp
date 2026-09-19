// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclint_tb.h"
#include "Vclint_tb__Syms.h"

//============================================================
// Constructors

Vclint_tb::Vclint_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclint_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__clint_tb__DOT__bus{vlSymsp->TOP.__PVT__clint_tb__DOT__bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclint_tb::Vclint_tb(const char* _vcname__)
    : Vclint_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclint_tb::~Vclint_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclint_tb___024root___eval_debug_assertions(Vclint_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vclint_tb___024root___eval_static(Vclint_tb___024root* vlSelf);
void Vclint_tb___024root___eval_initial(Vclint_tb___024root* vlSelf);
void Vclint_tb___024root___eval_settle(Vclint_tb___024root* vlSelf);
void Vclint_tb___024root___eval(Vclint_tb___024root* vlSelf);

void Vclint_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclint_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclint_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclint_tb___024root___eval_static(&(vlSymsp->TOP));
        Vclint_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vclint_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclint_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclint_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vclint_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vclint_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclint_tb___024root___eval_final(Vclint_tb___024root* vlSelf);

VL_ATTR_COLD void Vclint_tb::final() {
    Vclint_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclint_tb::hierName() const { return vlSymsp->name(); }
const char* Vclint_tb::modelName() const { return "Vclint_tb"; }
unsigned Vclint_tb::threads() const { return 1; }
