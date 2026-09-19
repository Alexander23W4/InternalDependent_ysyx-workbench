// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vxbar_tb.h"
#include "Vxbar_tb__Syms.h"

//============================================================
// Constructors

Vxbar_tb::Vxbar_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vxbar_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__xbar_tb__DOT__ifu{vlSymsp->TOP.__PVT__xbar_tb__DOT__ifu}
    , __PVT__xbar_tb__DOT__lsu{vlSymsp->TOP.__PVT__xbar_tb__DOT__lsu}
    , __PVT__xbar_tb__DOT__mm{vlSymsp->TOP.__PVT__xbar_tb__DOT__mm}
    , __PVT__xbar_tb__DOT__cm{vlSymsp->TOP.__PVT__xbar_tb__DOT__cm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vxbar_tb::Vxbar_tb(const char* _vcname__)
    : Vxbar_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vxbar_tb::~Vxbar_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vxbar_tb___024root___eval_debug_assertions(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vxbar_tb___024root___eval_static(Vxbar_tb___024root* vlSelf);
void Vxbar_tb___024root___eval_initial(Vxbar_tb___024root* vlSelf);
void Vxbar_tb___024root___eval_settle(Vxbar_tb___024root* vlSelf);
void Vxbar_tb___024root___eval(Vxbar_tb___024root* vlSelf);

void Vxbar_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxbar_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vxbar_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vxbar_tb___024root___eval_static(&(vlSymsp->TOP));
        Vxbar_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vxbar_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vxbar_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vxbar_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vxbar_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vxbar_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vxbar_tb___024root___eval_final(Vxbar_tb___024root* vlSelf);

VL_ATTR_COLD void Vxbar_tb::final() {
    Vxbar_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vxbar_tb::hierName() const { return vlSymsp->name(); }
const char* Vxbar_tb::modelName() const { return "Vxbar_tb"; }
unsigned Vxbar_tb::threads() const { return 1; }
