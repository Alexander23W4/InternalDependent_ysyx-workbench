
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

首先就现在这个设计, 最多会有2个在途 rd 



单个情况: (iag0 = 1, iag1 = 1) 清掉iag0, wb                         跳比
ll两个不同rd: (iag0 = 1, iag1 = 1) 清掉iag0, wb                     跳比
ll两个相同rd: (iag0 = 1, iag1 = 2) iag1 - 1, 不wb                   跳比
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = e) iag1 - 1, 不wb    跳比
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = e) 清掉iag0, wb      跳2次, 比
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = l) 清掉iag0, wb      跳2次, 比
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = l) iag1 - 1, 不wb    跳比
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = e 跳比    
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = l 跳比    
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = l 跳一次 这次不比
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = e 跳一次 这次不比
l/e来了之后: (iag0 = 0) 不wb                                        不跳, 不比



单个情况: (iag0 = 1, iag1 = 1) 清掉iag0, wb                       
ll两个不同rd: (iag0 = 1, iag1 = 1) 清掉iag0, wb                   
ll两个相同rd: (iag0 = 1, iag1 = 2) iag1 - 1, wb           

le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = e(0)) iag1 - 1, wb

⭐: 下面两个是相同rd, 后方数据先来的情况
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = e) 清掉iag0, wb   冲刷
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = l(1)) 清掉iag0, wb   冲刷

le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = l) iag1 - 1, wb

le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb             
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb             
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb             
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb             



总结: 1, 1: 清掉iag0, wb
     1, 2: l-> iag1 - 1, 不wb
     1, 2: e-> 清掉iag0, wb
     0 -> 不wb
*/

module ysyx_26040135_WBU(
    input clock,
    input reset, 

    input in_valid_exu,
    output in_ready_exu,

    input [4:0] rd_exu,
    input [31:0] wdata_exu,

    input in_valid_lsu,
    output in_ready_lsu,

    input [4:0] rd_lsu,
    input [31:0] wdata_lsu,

    output reg [4:0] rd_release,   // 清除记录在inaccessible_gprs的未写入rd, 只给一个周期, 要么就清0

    input [31:0] iag,
    input [31:0] iag_type,

    input [1:0] iag_amt [31:0],

    output reg wen,
    output reg [31:0] wdata,
    output reg [4:0] rd,

    output reg [63:0] wbu_blockf_cyc,
    output reg [63:0] wbu_work_cyc,

    output reg wbu_blockf
);
// 两个同时来, 先处理l

    reg in_ready;
    assign in_ready_exu = in_ready;
    assign in_ready_lsu = in_ready;

    reg wb_type;  // 0 -> exu  1 -> lsu

// state: IDLE  WB
    localparam IDLE = 1'b0, WB = 1'b1;
    reg state, next;
    

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_ready <= 1'b1;
            state <= IDLE;
            rd <= 5'b0;
            wdata <= 31'b0;
            wb_type <= 1'b0;

            wbu_blockf_cyc <= 0;
            wbu_work_cyc <= 0;
            wbu_blockf <= 0;

        end else begin   // 优先级 lsu > exu
            state <= next;
            if(state == IDLE && in_ready && in_valid_lsu) begin
                in_ready <= 1'b0;
                rd <= rd_lsu;
                wdata <= wdata_lsu;
                wb_type <= 1'b1;  // ls
            end
            else if(state == IDLE && in_ready && in_valid_exu) begin
                in_ready <= 1'b0;
                rd <= rd_exu;
                wdata <= wdata_exu;
                wb_type <= 1'b0;  // ex
            end

            if(in_ready && !in_valid_exu && !in_valid_lsu) begin
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
        rd_release = 5'b0;
        case (state)
            IDLE: begin
                if((in_ready && in_valid_lsu) || (in_ready && in_valid_exu)) begin
                    next = WB;
                end
            end
            WB: begin
                rd_release = rd;
                if(!(!iag[rd] || (iag_amt[rd] == 2'b10 && wb_type == 1'b1))) begin
                    wen = 1'b1;
                end 
                next = IDLE;
            end
        endcase
    end

endmodule