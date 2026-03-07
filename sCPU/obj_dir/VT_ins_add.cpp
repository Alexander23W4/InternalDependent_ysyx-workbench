// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VT_ins_add.h"
#include "VT_ins_add__Syms.h"

//============================================================
// Constructors

VT_ins_add::VT_ins_add(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VT_ins_add__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rd{vlSymsp->TOP.rd}
    , finish{vlSymsp->TOP.finish}
    , dbg0{vlSymsp->TOP.dbg0}
    , dbg1{vlSymsp->TOP.dbg1}
    , dbg2{vlSymsp->TOP.dbg2}
    , dbg3{vlSymsp->TOP.dbg3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VT_ins_add::VT_ins_add(const char* _vcname__)
    : VT_ins_add(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VT_ins_add::~VT_ins_add() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VT_ins_add___024root___eval_debug_assertions(VT_ins_add___024root* vlSelf);
#endif  // VL_DEBUG
void VT_ins_add___024root___eval_static(VT_ins_add___024root* vlSelf);
void VT_ins_add___024root___eval_initial(VT_ins_add___024root* vlSelf);
void VT_ins_add___024root___eval_settle(VT_ins_add___024root* vlSelf);
void VT_ins_add___024root___eval(VT_ins_add___024root* vlSelf);

void VT_ins_add::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VT_ins_add::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VT_ins_add___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VT_ins_add___024root___eval_static(&(vlSymsp->TOP));
        VT_ins_add___024root___eval_initial(&(vlSymsp->TOP));
        VT_ins_add___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VT_ins_add___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VT_ins_add::eventsPending() { return false; }

uint64_t VT_ins_add::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VT_ins_add::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VT_ins_add___024root___eval_final(VT_ins_add___024root* vlSelf);

VL_ATTR_COLD void VT_ins_add::final() {
    VT_ins_add___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VT_ins_add::hierName() const { return vlSymsp->name(); }
const char* VT_ins_add::modelName() const { return "VT_ins_add"; }
unsigned VT_ins_add::threads() const { return 1; }
