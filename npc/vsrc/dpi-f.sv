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
    instr = _instr;
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


// ⭐: 引出EXU"新收一条指令"的脉冲, 给C++侧统计执行的指令数
export "DPI-C" task check_new_instr;
task check_new_instr(output int new_instr);
    begin
        new_instr = {{31{1'b0}}, _new_instr};
    end
endtask

export "DPI-C" task check_wen;
task check_wen(output int wen);
    begin
       wen = {{31{1'b0}}, _wen}; 
    end
endtask


export "DPI-C" task difftest_read_gpr;
task difftest_read_gpr(output int gprs[32], output int pc);
    begin
        for (int i = 0; i < 32; i++) begin
            gprs[i] = dbg_reg[i*32 +: 32];  // 提取第 i 个 GPR
        end
        pc = _wbu_pc;
    end
endtask


export "DPI-C" task check_pipeline_bottleneck;
task check_pipeline_bottleneck(
    output int ifu_out_valid,
    output int exu_in_ready,
    output int exu_out_valid,
    output int lsu_in_ready,
    output int lsu_out_valid,
    output int wbu_in_ready
);
    begin
        ifu_out_valid = {{31{1'b0}}, _ifu_out_valid};
        exu_in_ready  = {{31{1'b0}}, _exu_in_ready};
        exu_out_valid = {{31{1'b0}}, _exu_out_valid};
        lsu_in_ready  = {{31{1'b0}}, _lsu_in_ready};
        lsu_out_valid = {{31{1'b0}}, _lsu_out_valid};
        wbu_in_ready  = {{31{1'b0}}, _wbu_in_ready};
    end
endtask

