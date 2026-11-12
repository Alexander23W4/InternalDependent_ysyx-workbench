// vsrc/difftest_top.sv
module difftest_top(
    input clock, 
    input reset,

    input  ref_clk,                 
    input  ref_rst,
    output [31:0]  ref_pc,
    output         ref_wen,
    output [1023:0] ref_gpr
);
    ysyxSoCFull soc (
        .clock(clock), 
        .reset(reset)
        // 暂时用不到io口
    );

    ref_top u_ref (
        .clk(ref_clk), 
        .rst(ref_rst),
        ._pc(ref_pc), 
        ._wen(ref_wen), 
        .dbg_reg(ref_gpr)
    );
endmodule