
module ysyx_26040135_WBU(
    input clock,
    input reset, 

    input in_valid,
    output reg in_ready,

    input [4:0] rd,
    input [31:0] wdata,


    output reg wen,    // 这个信号同时也承担 wb_bypass_data_valid 的作用
    output reg [31:0] wdata_wb,
    output reg [4:0] rd_wb,

    output reg wbu_blockf,
);

// state: IDLE  WB
    localparam IDLE = 1'b0, WB = 1'b1;
    reg state, next;
    

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_ready <= 1'b1;
            state <= IDLE;
            rd_wb <= 5'b0;
            wdata_wb <= 32'b0;

            wbu_blockf <= 0;

        end else begin  
            state <= next;
            if(state == IDLE && in_ready && in_valid) begin
                in_ready <= 1'b0;
                rd_wb <= rd;
                wdata_wb <= wdata;
            end

            if(in_ready && !in_valid) begin
                wbu_blockf <= 1'b1;
            end else begin
                wbu_blockf <= 1'b0;
            end

            
            if(state == WB) begin
                in_ready <= 1'b1;
            end
        end
    end

    always @(*) begin
        
        next = state;
        wen = 1'b0;

        case (state)
            IDLE: begin
                if(in_ready && in_valid) begin
                    next = WB;
                end
            end
            WB: begin    
                wen = 1'b1;
                next = IDLE;
            end
        endcase
    end



endmodule


