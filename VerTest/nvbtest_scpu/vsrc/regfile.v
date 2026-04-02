module regfile #(
    parameter WIDTH = 8,
    parameter ADDR_WIDTH = 2
)(
    input clk,

    // write port
    input we,
    input [ADDR_WIDTH-1:0] waddr,
    input [WIDTH-1:0] wdata,

    // read port 1
    input [ADDR_WIDTH-1:0] raddr1,
    output [WIDTH-1:0] rdata1,

    // read port 2
    input [ADDR_WIDTH-1:0] raddr2,
    output [WIDTH-1:0] rdata2,

    // debug
    output [WIDTH-1:0] debug0,
    output [WIDTH-1:0] debug1,
    output [WIDTH-1:0] debug2,
    output [WIDTH-1:0] debug3
);

    reg [WIDTH-1:0] regs [0:(1<<ADDR_WIDTH)-1];

    always @(posedge clk) begin
        if (we)
            regs[waddr] <= wdata;
    end

    assign rdata1 = regs[raddr1];
    assign rdata2 = regs[raddr2];

    assign debug0 = regs[0];
    assign debug1 = regs[1];
    assign debug2 = regs[2];
    assign debug3 = regs[3];

endmodule

