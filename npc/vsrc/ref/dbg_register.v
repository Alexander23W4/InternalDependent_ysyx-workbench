module dbg_register(
    input clk,
    input rst,
    input wen,
    
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

    assign rdata1 = gpr[raddr1_idx];
    assign rdata2 = gpr[raddr2_idx];

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            for (int i = 0; i < 16; i = i + 1) begin 
                gpr[i] <= '0;
            end
        end 
        else begin
            if (wen && waddr_idx != 0) gpr[waddr_idx] <= wdata;
        end
    end


    genvar i;
    generate
        for (i = 0; i < 16; i = i + 1) begin
            assign dbg_regs[32*i +: 32] = gpr[i];
        end
    endgenerate

endmodule



