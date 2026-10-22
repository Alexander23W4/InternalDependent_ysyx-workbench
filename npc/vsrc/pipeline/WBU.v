
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

*/

module ysyx_26040135_WBU(
    input in_valid_exu,
    output in_ready_exu,

    input [4:0] rd_exu,
    input [31:0] wdata_exu,

    input in_valid_lsu,
    output in_ready_lsu,

    input [4:0] rd_lsu,
    input [31:0] wdata_lsu,

    output [4:0] rd_release   // 清除记录在inaccessible_gprs的未写入rd, 只给一个周期, 要么就清0
);




endmodule