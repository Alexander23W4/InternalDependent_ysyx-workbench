
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

WBU: 写回, 冲刷, 清理

单个情况:                      
ll两个不同rd:  

ll两个相同rd:  

le两个相同rd,l先来: 


le两个相同rd,e先来: 
le两个相同rd,l先来: 

le两个相同rd,e先来: 

le两个不同rd,l先来: 
le两个不同rd,e先来: 
le两个不同rd,l先来: 
le两个不同rd,e先来: 

遍历wb_q -> 找到n的同时记录相同rd


WBW阻塞方案:

新方案要求两个相同rd, 也就是WBW的情况下, 必须按照顺序接收.  也就是说, WBU发消息告诉top 清理的时候, 只需要发送一个被清理的rd信号即可

这个时候top维护一个32*3的数组, 第一行表示
*/

`ifndef WB_Q_LEN 
`define WB_Q_LEN 3
`endif

module ysyx_26040135_WBU(
    input clock,
    input reset, 

    input in_valid,
    output in_ready,

    input [4:0] rd,
    input [31:0] wdata,


    output reg wen,   
    output reg [31:0] wdata_wb,
    output reg [4:0] rd_wb,

    output reg [63:0] wbu_blockf_cyc,
    output reg [63:0] wbu_work_cyc,
    output reg wbu_blockf,


    output reg [`WB_Q_LEN-1:0][5:0] wb_q_update,  
);


// state: IDLE  WB
    localparam IDLE = 1'b0, WB = 1'b1;
    reg state, next;
    

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_ready <= 1'b1;
            state <= IDLE;
            rd_wb <= 5'b0;
            wdata_wb <= 31'b0;

            wbu_blockf_cyc <= 0;
            wbu_work_cyc <= 0;
            wbu_blockf <= 0;

        end else begin   // 优先级 lsu > exu
            state <= next;
            if(state == IDLE && in_ready && in_valid) begin
                in_ready <= 1'b0;
                rd_wb <= rd;
                wdata_wb <= wdata;
            end

            if(in_ready && !in_valid) begin
                wbu_blockf_cyc <= wbu_blockf_cyc + 64'b1;
                wbu_blockf <= 1'b1;
            end else begin
                wbu_blockf <= 1'b0;
            end

            
            if(state == WB) begin
                wbu_work_cyc <= wbu_work_cyc + 64'b1;
                in_ready <= 1'b1;
            end
        end
    end

    always @(*) begin
        
        next = state;
        wen = 1'b0;
        wb_q_update = 0;

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


