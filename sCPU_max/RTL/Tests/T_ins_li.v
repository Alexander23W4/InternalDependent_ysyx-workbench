/* verilator lint_off UNUSEDSIGNAL */
module T_ins_li (
    input clk,
    input en,
    input [1:0] rd,
    input [3:0] imm,
    output reg finish,
    // debug outputs
    output [7:0] dbg0,
    output [7:0] dbg1,
    output [7:0] dbg2,
    output [7:0] dbg3
);

    wire [7:0] data_in;
    wire [7:0] data_out;
    wire [1:0] write_addr;
    wire we;

    Instr_li li_inst (
        .clk(clk),
        .en(en),
        .rd(rd),
        .imm(imm),
        .data_out(data_out),
        .write_addr(write_addr),
        .we(we),
        .finish(finish)
    );


    debug_ram1 #(8, 2, "./Tests/debug_ram.hex") gpr (
        .clk(clk),
        .we(we),
        .inaddr(write_addr),
        .outaddr(rd),   
        .din(data_out),
        .dout(data_in),
        .debug0(dbg0),
        .debug1(dbg1),
        .debug2(dbg2),
        .debug3(dbg3)
    );

endmodule
/* verilator lint_off UNUSEDSIGNAL */

