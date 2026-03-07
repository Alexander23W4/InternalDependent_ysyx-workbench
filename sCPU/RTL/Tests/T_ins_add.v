module T_ins_add (
    input clk,
    input en,    // enable
    input rst,
    input [1:0] rs1,   // get rs1 from instr
    input [1:0] rs2,   // get rs2 from instr
    input [1:0] rd,    // get rd from instr
    output reg finish   // the instr operation is finished (flag for controller)
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

    ram1 #(8, 2) gpr (
        .clk(clk),
        .we(we),
        .inaddr(write_addr),
        .outaddr(read_addr),
        .din(data_out),
        .dout(data_in)
    );

endmodule



