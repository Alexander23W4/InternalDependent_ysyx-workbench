module T_ins_add (
    input clk,
    input en,
    input rst,
    input [1:0] rs1,
    input [1:0] rs2,
    input [1:0] rd,
    output reg finish,
    // debug outputs
    output [7:0] dbg0,
    output [7:0] dbg1,
    output [7:0] dbg2,
    output [7:0] dbg3
);

    wire [7:0] data_in;
    wire [7:0] data_out;
    wire [1:0] read_addr;
    wire [1:0] write_addr;
    wire we;

    Instr_add ins_add(
        .clk(clk), 
        .en(en),
        .rst(rst),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .data_in(data_in),
        .data_out(data_out),
        .read_addr(read_addr),
        .write_addr(write_addr),
        .we(we),
        .finish(finish)
    );

    debug_ram1 #(8, 2, "./Tests/debug_ram.hex") gpr (
        .clk(clk),
        .we(we),
        .inaddr(write_addr),
        .outaddr(read_addr),
        .din(data_out),
        .dout(data_in),
        .debug0(dbg0),
        .debug1(dbg1),
        .debug2(dbg2),
        .debug3(dbg3)
    );

endmodule


