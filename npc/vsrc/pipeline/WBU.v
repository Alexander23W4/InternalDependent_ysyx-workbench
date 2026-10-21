
/*
仅非(b和s)指令进入本级

*/

module ysyx_26040135_WBU(
    input in_valid_exu,
    output in_ready_exu,

    input in_valid_lsu,
    output in_ready_lsu,

    output rd_release   // 清除记录在inaccessible_gprs的未写入rd
);


endmodule