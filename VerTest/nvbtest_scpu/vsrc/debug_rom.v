
module debug_rom #(
    parameter WORD_WIDTH = 8,
    parameter ADDR_WIDTH = 4,       // 2^4 = 16 words
    parameter INIT_FILE = ""        // hex init file
)(
    input  [ADDR_WIDTH-1:0] addr,
    output [WORD_WIDTH-1:0] out,
    // debug interface: 观察前4个地址
    output [WORD_WIDTH-1:0] debug0,
    output [WORD_WIDTH-1:0] debug1,
    output [WORD_WIDTH-1:0] debug2,
    output [WORD_WIDTH-1:0] debug3
);

    // ROM 内存
    reg [WORD_WIDTH-1:0] mem [0:(2**ADDR_WIDTH)-1];

    // 初始化
    initial begin
        if (INIT_FILE != "")
            $readmemh(INIT_FILE, mem);
    end

    // 输出
    assign out = mem[addr];

    // debug 输出前4个单元
    assign debug0 = mem[0];
    assign debug1 = mem[1];
    assign debug2 = mem[2];
    assign debug3 = mem[3];

endmodule

