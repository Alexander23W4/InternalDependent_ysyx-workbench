// vsrc/difftest_top.sv
module difftest_top(
    input clock, 
    input reset,

    input  ref_clk,                 
    input  ref_rst,
    output [31:0]  ref_pc,
    output [1023:0] ref_gpr,
    output  ref_wen,
    output [31:0] ref_instr,
    output [31:0] ref_last_pc
);
    ysyxSoCFull soc (
        .clock(clock), 
        .reset(reset)
        // 暂时用不到io口   做到不报错不影响仿真即可
    );

    ref_top u_ref (
        .clk(ref_clk), 
        .rst(ref_rst),
        ._pc(ref_pc), 
        ._wen(ref_wen), 
        ._instr(ref_instr),
        .dbg_reg(ref_gpr),
        ._last_pc(ref_last_pc)
    );

endmodule


