// DPI-C interfaces(SV feature):

// 在cpp中, 仿真的时候 会自动生成 Vtop_Dpi.h, 声明 extern int halt(int *endprog);

export "DPI-C" task halt;
task halt(output int endprog); 
    begin
        endprog = {{31{1'b0}}, ebreak};
    end
endtask


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


import "DPI-C" function void perf_event(
    input bit ifu_instr_valid,
    input bit lsu_read_complete,
    input bit lsu_write_complete
);

import "DPI-C" function void instr_type_event(
    input bit event_alu,
    input bit event_branch,
    input bit event_load,
    input bit event_store,
    input bit event_jump,
    input bit event_csr,
    input bit event_system
);

export "DPI-C" function get_unit_cycles;
function void get_unit_cycles(
    output longint unsigned out_ifu_cycles,
    output longint unsigned out_lsu_cycles,
    output longint unsigned out_lsu_read_cycles,
    output longint unsigned out_lsu_write_cycles
);
    out_ifu_cycles       = ifu_cycles;
    out_lsu_cycles       = lsu_cycles;
    out_lsu_read_cycles  = lsu_read_cycles;
    out_lsu_write_cycles = lsu_write_cycles;
endfunction


// ⭐ 下面这一组照着 get_unit_cycles 写: 把 IFU/LSU 的 cycles 与 count 再按访存区域
//    (flash / sram / sdram / other) 各切 4 份出来.

export "DPI-C" function get_ifu_region_cycles;
function void get_ifu_region_cycles(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = ifu_fetch_flash_cycles;
    out_sram  = ifu_fetch_sram_cycles;
    out_sdram = ifu_fetch_sdram_cycles;
    out_other = ifu_fetch_other_cycles;
endfunction

export "DPI-C" function get_ifu_region_counts;
function void get_ifu_region_counts(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = ifu_fetch_flash_count;
    out_sram  = ifu_fetch_sram_count;
    out_sdram = ifu_fetch_sdram_count;
    out_other = ifu_fetch_other_count;
endfunction

export "DPI-C" function get_lsu_read_region_cycles;
function void get_lsu_read_region_cycles(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = lsu_read_flash_cycles;
    out_sram  = lsu_read_sram_cycles;
    out_sdram = lsu_read_sdram_cycles;
    out_other = lsu_read_other_cycles;
endfunction

export "DPI-C" function get_lsu_read_region_counts;
function void get_lsu_read_region_counts(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = lsu_read_flash_count;
    out_sram  = lsu_read_sram_count;
    out_sdram = lsu_read_sdram_count;
    out_other = lsu_read_other_count;
endfunction

export "DPI-C" function get_lsu_write_region_cycles;
function void get_lsu_write_region_cycles(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = lsu_write_flash_cycles;
    out_sram  = lsu_write_sram_cycles;
    out_sdram = lsu_write_sdram_cycles;
    out_other = lsu_write_other_cycles;
endfunction

export "DPI-C" function get_lsu_write_region_counts;
function void get_lsu_write_region_counts(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = lsu_write_flash_count;
    out_sram  = lsu_write_sram_count;
    out_sdram = lsu_write_sdram_count;
    out_other = lsu_write_other_count;
endfunction

// 区域聚合(IFU + LSU读 + LSU写)
export "DPI-C" function get_region_cycles;
function void get_region_cycles(
    output longint unsigned out_flash,
    output longint unsigned out_sram,
    output longint unsigned out_sdram,
    output longint unsigned out_other
);
    out_flash = flash_cycles;
    out_sram  = sram_cycles;
    out_sdram = sdram_cycles;
    out_other = other_cycles;
endfunction

