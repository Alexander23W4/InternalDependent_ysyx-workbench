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
    output int dbg_regs,
    output int pc,
    output int mstatus,
    output int mepc,
    output int mcause,
    output int mtvec,
    output int mcycle,
    output int mcycleh,
    output int mvendorid,
    output int marchid,
    output int ifu_error,
    output int lsu_error,
    output int master_validation_error,
    output int instr
);
    instr = instr;
    dbg_regs = dbg_reg;
    pc = _pc;
    mstatus = _mstatus;
    mepc = _mepc;
    mcause = _mcause;
    mtvec = _mtvec;
    mcycle = _mcycle;
    mcycleh = _mcycleh;
    mvendorid = _mvendorid;
    marchid = _marchid;
    ifu_error = {30'b0, __ifu_error};
    lsu_error = {30'b0, __lsu_error};
    master_validation_error = {31'b0, __ifu_master_validation_error};
endfunction