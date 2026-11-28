module ysyx_26040135_dbg_register(
    input clock,
    input reset,
    input wen,
    input ren,
    
    input [4:0] raddr1,   // rs1
    input [4:0] raddr2,   // rs2
    input [4:0] waddr,    // rd 

    input [31:0] wdata, 
    output reg [31:0] rdata1,  
    output reg [31:0] rdata2,

    output [32*16-1 : 0] dbg_regs
);

    reg [31:0] gpr [15:0];
    wire [3:0] raddr1_idx = raddr1[3:0];
    wire [3:0] raddr2_idx = raddr2[3:0];
    wire [3:0] waddr_idx = waddr[3:0];

    wire wen_r = wen & (|waddr_idx);

    always @(posedge clock) begin
        if(ren) begin
            rdata1 <= gpr[raddr1_idx];
            rdata2 <= gpr[raddr2_idx];
        end
    end

    genvar i;
    generate
        for (i = 0; i < 16; i = i + 1) begin
            always @(posedge clock) begin      
                if(wen_r && (waddr_idx == i[3:0])) gpr[i] <= wdata;
            end
        end
    endgenerate


    genvar j;
    generate
        for (j = 0; j < 16; j = j + 1) begin
            assign dbg_regs[32*j +: 32] = gpr[j];
        end
    endgenerate

endmodule


