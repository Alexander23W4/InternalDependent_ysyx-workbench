module dbg_register #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
    input clk,
    input wen,
    
    input [ADDR_WIDTH-1:0] raddr1,   // rs1
    input [ADDR_WIDTH-1:0] raddr2,   // rs2
    input [ADDR_WIDTH-1:0] waddr,    // rd 

    input [DATA_WIDTH-1:0] wdata, 
    output [DATA_WIDTH-1:0] rdata1,  
    output [DATA_WIDTH-1:0] rdata2,

    output [(DATA_WIDTH * (2**ADDR_WIDTH)) - 1 : 0] dbg_regs
);
    reg [DATA_WIDTH-1:0] gpr [2**ADDR_WIDTH-1:0];

    assign rdata1 = gpr[raddr1];
    assign rdata2 = gpr[raddr2];

    always @(posedge clk) begin
        if (wen && waddr != 0) gpr[waddr] <= wdata;
    end

    genvar i;
    generate
        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin : gen_dbg
            assign dbg_regs[DATA_WIDTH*i +: DATA_WIDTH] = gpr[i];
        end
    endgenerate

endmodule

