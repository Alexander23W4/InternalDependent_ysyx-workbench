// DPI-C interfaces(SV feature):

// 在cpp中, 仿真的时候 会自动生成 Vtop_Dpi.h, 声明 extern int halt(int *endprog);

// ⭐: 引出ebreak到顶层
export "DPI-C" task check_halt;
task check_halt(output int endprog); 
    begin
        endprog = {{31{1'b0}}, __ebreak_end};
    end
endtask

// ⭐: 引到顶层
export "DPI-C" function debug_read_all;
function void debug_read_all(
    output int dbg_regs[32],  // 数组，32个寄存器
    output int pc,
    output int mstatus,
    output int mepc,
    output int mcause,
    output int mtvec,
    output longint mcycle,
    output int instr
);
    instr = __instr;
    for (int i = 0; i < 32; i++) begin
        dbg_regs[i] = dbg_reg[i*32 +: 32];  // 提取第 i 个 GPR
    end
    pc = _pc;
    mstatus = _mstatus;
    mepc = _mepc;
    mcause = _mcause;
    mtvec = _mtvec;
    mcycle = {_mcycleh, _mcycle};  // 合并

endfunction



export "DPI-C" function check_error;
function void check_error(
    output int ifu_error,
    output int lsu_error,
    output int master_validation_error
);
    ifu_error = {30'b0, __ifu_error};
    lsu_error = {30'b0, __lsu_error};
    master_validation_error = {31'b0, __ifu_master_validation_error};

endfunction



export "DPI-C" function check_end;
function void check_end(
    output int period_end
);
    period_end = {31'b0, __period_end};
endfunction


export "DPI-C" function get_cycs;
function void get_cycs(
    output longint ifu_work_cyc_val,
    output longint ifu_block_cyc_val,
    output longint exu_blockf_cyc_val,
    output longint exu_blcokbl_cyc_val,
    output longint exu_blcokbw_cyc_val,
    output longint exu_work_cyc_val,
    output longint lsu_blockf_cyc_val,
    output longint lsu_blcokb_cyc_val,
    output longint lsu_work_cyc_val,
    output longint wbu_blockf_cyc_val,
    output longint wbu_work_cyc_val
);
    ifu_work_cyc_val       = ifu_work_cyc;
    ifu_block_cyc_val      = ifu_block_cyc;
    exu_blockf_cyc_val     = exu_blockf_cyc;
    exu_blcokbl_cyc_val   = exu_blcokbl_cyc;
    exu_blcokbw_cyc_val   = exu_blcokbw_cyc;
    exu_work_cyc_val       = exu_work_cyc;
    lsu_blockf_cyc_val     = lsu_blockf_cyc;
    lsu_blcokb_cyc_val    = lsu_blcokb_cyc;
    lsu_work_cyc_val       = lsu_work_cyc;
    wbu_blockf_cyc_val    = wbu_blockf_cyc;
    wbu_work_cyc_val      = wbu_work_cyc;
endfunction


