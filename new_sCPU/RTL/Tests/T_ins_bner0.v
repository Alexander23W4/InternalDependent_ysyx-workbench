// VA
module T_ins_bner0(
    input clk,
    input en,
    input rst,
    input [1:0] rs2,
    output reg finish,
    output reg update,
    // debug outputs
    output [7:0] dbg0,
    output [7:0] dbg1,
    output [7:0] dbg2,
    output [7:0] dbg3
);

    wire [7:0] data_in;
    wire [1:0] read_addr;

    Instr_bner0 ins_bner0(
        .clk(clk),
        .en(en),
        .rst(rst),
        .rs2(rs2),
        .data_in(data_in),
        .read_addr(read_addr),
        .finish(finish),
        .update(update)
    );

    debug_ram1 #(8, 2, "./Tests/debug_ram.hex") gpr (
        .clk(clk),
        .we(1'b0),            // BNER0 
        .inaddr(2'b00),       // unused
        .outaddr(read_addr),
        .din(8'h00),          // unused
        .dout(data_in),
        .debug0(dbg0),
        .debug1(dbg1),
        .debug2(dbg2),
        .debug3(dbg3)
    );

endmodule
