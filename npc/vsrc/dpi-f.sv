// DPI-C interfaces(SV feature):

// 在cpp中, 仿真的时候 会自动生成 Vtop_Dpi.h, 声明 extern int halt(int *endprog);

export "DPI-C" task halt;
task halt(output int endprog); 
    begin
        endprog = {{31{1'b0}}, ebreak};
    end
endtask

export "DPI-C" task check_ram_op;
task check_ram_op(output int ram_op);
    begin
        if(lb | lh | lw | lbu | lhu) begin
            ram_op = 32'd1;
        end
        else if(sb | sh | sw) begin
            ram_op = 32'd2;
        end
        else begin
            ram_op = 0;
        end
    end
endtask

export "DPI-C" task 


import "DPI-C" function int unsigned ram_read(
    input int unsigned addr,
    input int amount
);

import "DPI-C" function void ram_write(
    input int unsigned addr, 
    input int unsigned data, 
    input int amount
);

export "DPI-C" function debug_read_all;

function void debug_read_all(
    output int dbg_regs[32],  // 数组，32个寄存器
    output int pc,
    output int mstatus,
    output int mepc,
    output int mcause,
    output int mtvec,
    output int mcycle,
    output int mcycleh,
    output int instr
);
    instr = instr;
    for (int i = 0; i < 32; i++) begin
        dbg_regs[i] = dbg_reg[i*32 +: 32];  // 提取第 i 个 GPR
    end
    pc = _pc;
    mstatus = _mstatus;
    mepc = _mepc;
    mcause = _mcause;
    mtvec = _mtvec;
    mcycle = _mcycle;
    mcycleh = _mcycleh;


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
    period_end = {30'b0, __pc_is_updated};
endfunction


