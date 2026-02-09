// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest2.h"
#include "Vtest2__Syms.h"

//============================================================
// Constructors

Vtest2::Vtest2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest2__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest2::Vtest2(const char* _vcname__)
    : Vtest2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest2::~Vtest2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest2___024root___eval_debug_assertions(Vtest2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest2___024root___eval_static(Vtest2___024root* vlSelf);
void Vtest2___024root___eval_initial(Vtest2___024root* vlSelf);
void Vtest2___024root___eval_settle(Vtest2___024root* vlSelf);
void Vtest2___024root___eval(Vtest2___024root* vlSelf);

void Vtest2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest2___024root___eval_static(&(vlSymsp->TOP));
        Vtest2___024root___eval_initial(&(vlSymsp->TOP));
        Vtest2___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest2::eventsPending() { return false; }

uint64_t Vtest2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtest2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest2___024root___eval_final(Vtest2___024root* vlSelf);

VL_ATTR_COLD void Vtest2::final() {
    Vtest2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest2::hierName() const { return vlSymsp->name(); }
const char* Vtest2::modelName() const { return "Vtest2"; }
unsigned Vtest2::threads() const { return 1; }
