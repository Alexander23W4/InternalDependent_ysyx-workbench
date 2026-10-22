
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

单个情况: (清掉iag0即可
ll两个不同rd: 清掉iag0即可
ll两个相同rd: 
*/

module ysyx_26040135_WBU(
    input clock,
    input reset,

    input in_valid_exu,
    output reg in_ready_exu,

    input [4:0] rd_exu,
    input [31:0] wdata_exu,

    input in_valid_lsu,
    output reg in_ready_lsu,

    input [4:0] rd_lsu,
    input [31:0] wdata_lsu,

    output [4:0] rd_release   // 清除记录在inaccessible_gprs的未写入rd, 只给一个周期, 要么就清0
);
// 这里处理两路写入的时候, 读到任何一路valid, 读取rd, 如果inaccessible_gprs[1][rd]里面对应的
// 握手前后顺序的问题
// 需要兼容多次同rd写入, 保证最后一次写入的覆盖

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_ready_exu <= 1'b1;
            in_ready_lsu <= 1'b1;
        end else begin
            
        end
    end

endmodule