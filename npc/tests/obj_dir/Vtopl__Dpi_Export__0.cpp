// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtopl.h"
#include "Vtopl__Syms.h"
#include "verilated_dpi.h"


void Vtopl::halt(int* endprog) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root::halt\n"); );
    // Init
    IData/*31:0*/ endprog__Vcvt;
    endprog__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("halt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtopl__Vcb_halt_t __Vcb = (Vtopl__Vcb_halt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtopl__Syms*)(__Vscopep->symsp()), endprog__Vcvt);
    for (size_t endprog__Vidx = 0; endprog__Vidx < 1; ++endprog__Vidx) *endprog = endprog__Vcvt;
}

void Vtopl::get_decode_signals(int* instr_val, int* addi_s, int* add_s, int* jalr_s, int* lui_s, int* lw_s, int* lbu_s, int* sw_s, int* sb_s, int* ebreak_s, int* rd_val, int* rs1_val, int* rs2_val, int* immI_val, int* immU_val, int* immS_val, int* wdata_val, int* rdata1_val, int* rdata2_val, int* wen_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root::get_decode_signals\n"); );
    // Init
    IData/*31:0*/ instr_val__Vcvt;
    instr_val__Vcvt = 0;
    IData/*31:0*/ addi_s__Vcvt;
    addi_s__Vcvt = 0;
    IData/*31:0*/ add_s__Vcvt;
    add_s__Vcvt = 0;
    IData/*31:0*/ jalr_s__Vcvt;
    jalr_s__Vcvt = 0;
    IData/*31:0*/ lui_s__Vcvt;
    lui_s__Vcvt = 0;
    IData/*31:0*/ lw_s__Vcvt;
    lw_s__Vcvt = 0;
    IData/*31:0*/ lbu_s__Vcvt;
    lbu_s__Vcvt = 0;
    IData/*31:0*/ sw_s__Vcvt;
    sw_s__Vcvt = 0;
    IData/*31:0*/ sb_s__Vcvt;
    sb_s__Vcvt = 0;
    IData/*31:0*/ ebreak_s__Vcvt;
    ebreak_s__Vcvt = 0;
    IData/*31:0*/ rd_val__Vcvt;
    rd_val__Vcvt = 0;
    IData/*31:0*/ rs1_val__Vcvt;
    rs1_val__Vcvt = 0;
    IData/*31:0*/ rs2_val__Vcvt;
    rs2_val__Vcvt = 0;
    IData/*31:0*/ immI_val__Vcvt;
    immI_val__Vcvt = 0;
    IData/*31:0*/ immU_val__Vcvt;
    immU_val__Vcvt = 0;
    IData/*31:0*/ immS_val__Vcvt;
    immS_val__Vcvt = 0;
    IData/*31:0*/ wdata_val__Vcvt;
    wdata_val__Vcvt = 0;
    IData/*31:0*/ rdata1_val__Vcvt;
    rdata1_val__Vcvt = 0;
    IData/*31:0*/ rdata2_val__Vcvt;
    rdata2_val__Vcvt = 0;
    IData/*31:0*/ wen_val__Vcvt;
    wen_val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_decode_signals");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtopl__Vcb_get_decode_signals_t __Vcb = (Vtopl__Vcb_get_decode_signals_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtopl__Syms*)(__Vscopep->symsp()), instr_val__Vcvt, addi_s__Vcvt, add_s__Vcvt, jalr_s__Vcvt, lui_s__Vcvt, lw_s__Vcvt, lbu_s__Vcvt, sw_s__Vcvt, sb_s__Vcvt, ebreak_s__Vcvt, rd_val__Vcvt, rs1_val__Vcvt, rs2_val__Vcvt, immI_val__Vcvt, immU_val__Vcvt, immS_val__Vcvt, wdata_val__Vcvt, rdata1_val__Vcvt, rdata2_val__Vcvt, wen_val__Vcvt);
    for (size_t instr_val__Vidx = 0; instr_val__Vidx < 1; ++instr_val__Vidx) *instr_val = instr_val__Vcvt;
    for (size_t addi_s__Vidx = 0; addi_s__Vidx < 1; ++addi_s__Vidx) *addi_s = addi_s__Vcvt;
    for (size_t add_s__Vidx = 0; add_s__Vidx < 1; ++add_s__Vidx) *add_s = add_s__Vcvt;
    for (size_t jalr_s__Vidx = 0; jalr_s__Vidx < 1; ++jalr_s__Vidx) *jalr_s = jalr_s__Vcvt;
    for (size_t lui_s__Vidx = 0; lui_s__Vidx < 1; ++lui_s__Vidx) *lui_s = lui_s__Vcvt;
    for (size_t lw_s__Vidx = 0; lw_s__Vidx < 1; ++lw_s__Vidx) *lw_s = lw_s__Vcvt;
    for (size_t lbu_s__Vidx = 0; lbu_s__Vidx < 1; ++lbu_s__Vidx) *lbu_s = lbu_s__Vcvt;
    for (size_t sw_s__Vidx = 0; sw_s__Vidx < 1; ++sw_s__Vidx) *sw_s = sw_s__Vcvt;
    for (size_t sb_s__Vidx = 0; sb_s__Vidx < 1; ++sb_s__Vidx) *sb_s = sb_s__Vcvt;
    for (size_t ebreak_s__Vidx = 0; ebreak_s__Vidx < 1; ++ebreak_s__Vidx) *ebreak_s = ebreak_s__Vcvt;
    for (size_t rd_val__Vidx = 0; rd_val__Vidx < 1; ++rd_val__Vidx) *rd_val = rd_val__Vcvt;
    for (size_t rs1_val__Vidx = 0; rs1_val__Vidx < 1; ++rs1_val__Vidx) *rs1_val = rs1_val__Vcvt;
    for (size_t rs2_val__Vidx = 0; rs2_val__Vidx < 1; ++rs2_val__Vidx) *rs2_val = rs2_val__Vcvt;
    for (size_t immI_val__Vidx = 0; immI_val__Vidx < 1; ++immI_val__Vidx) *immI_val = immI_val__Vcvt;
    for (size_t immU_val__Vidx = 0; immU_val__Vidx < 1; ++immU_val__Vidx) *immU_val = immU_val__Vcvt;
    for (size_t immS_val__Vidx = 0; immS_val__Vidx < 1; ++immS_val__Vidx) *immS_val = immS_val__Vcvt;
    for (size_t wdata_val__Vidx = 0; wdata_val__Vidx < 1; ++wdata_val__Vidx) *wdata_val = wdata_val__Vcvt;
    for (size_t rdata1_val__Vidx = 0; rdata1_val__Vidx < 1; ++rdata1_val__Vidx) *rdata1_val = rdata1_val__Vcvt;
    for (size_t rdata2_val__Vidx = 0; rdata2_val__Vidx < 1; ++rdata2_val__Vidx) *rdata2_val = rdata2_val__Vcvt;
    for (size_t wen_val__Vidx = 0; wen_val__Vidx < 1; ++wen_val__Vidx) *wen_val = wen_val__Vcvt;
}
