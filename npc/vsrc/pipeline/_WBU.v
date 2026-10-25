
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

首先就现在这个设计, 最多会有2个在途 rd 
只有两种可能 ll 和 le(先l后e) 
总共 l/e/ll/le 4种可能, 接收时有 l/e/ll(两个同rd/两个不同rd)/le(两个同rd但e先来/两个同rd但l先来/两个不同rd但e先来/两个不同rd但l先来)

iag0 -> 这个是否有在途
iag1 -> 这个有几个在途
iag2 -> 最后一个在途的是哪个模式 e/l

收到valid信号之后, 读rd, 读iag, 出现下述情况:
iag0为1, iag1为1, 则将iag0清0
iag0为1, iag1为2, iag2不对应, 则将iag1减1, 不进行wb
iag0为1, iag1为2, iag1对应(来早了), 则将iag

单个情况: (iag0 = 1, iag1 = 1) 清掉iag0, wb
ll两个不同rd: (iag0 = 1, iag1 = 1) 清掉iag0, wb
ll两个相同rd: (iag0 = 1, iag1 = 2) iag1 - 1, 不wb
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = e) iag1 - 1, 不wb
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = e) 清掉iag0, wb
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb
l来了之后: (iag0 = 0) 不wb

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

    output [4:0] rd_release,   // 清除记录在inaccessible_gprs的未写入rd, 只给一个周期, 要么就清0

    input [31:0] iag,
    input [31:0] iag_type,

    input [1:0] iag_amt [31:0],

    output wen,
    output reg [31:0] wdata,
    output reg [4:0] rd
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
        end else begin   // 优先级 lsu > exu
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
            
            if(state == WB) begin
                in_ready <= 1'b1;
            end
        end
    end

    always @(*) begin
        
        next = state;
        wen = 1'b0;
        rd_release = 5'b0;
        case(state);
            IDLE: begin
                if((in_ready && in_valid_lsu) || (in_ready && in_valid_exu)) begin
                    next = WB;
                end
            end
            WB: begin
                rd_release = rd;
                if(!(!iag[rd] || (iag_amt[rd] == 2'b01 && wb_type == 1'b1))) begin
                    wen = 1'b1;
                end 
                next = IDLE;
            end
        endcase
    end

endmodule