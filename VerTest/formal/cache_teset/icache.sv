
/*
屏蔽写操作, 你可以将写使能相关的信号置为0

让cache缺失时从mem中读出数据, 由于测试对象不产生写操作, 因此DUT和REF可以使用相同的存储器

由于REF直接从mem中读出数据, 没有任何延迟, 而DUT从cache中读出数据时需要经历若干周期, 因此需要对assert()的时机进行同步: 
REF读出数据后, 需要等待DUT返回读结果后才能进行检查, 显然, 这很容易通过状态机来实现

由于形式化验证工具会遍历每个周期的所有输入情况, 因此输入信号每个周期都会变化, 你可能需要借助寄存器暂存一些结果

借助"形式化验证工具会遍历每个周期的所有输入情况"的特性, 我们可以在测试的顶层定义一些block信号, 用于测试AXI相关的代码能否在随机延迟的场景下工作, 
例如dut.io.axi.ar.ready := arready_ok & ~block1, dut.io.axi.r.valid := rvalid_ok & ~block2

*/

module CacheTest (
    input  logic        clock,
    input  logic        reset,

    // 对应 io.req
    // 具体信号根据你的 req Bundle 定义展开
    input  logic [31:0] req_addr,
    // ...

    input  logic        block
);

    localparam int MEM_SIZE = 128;  // byte


    logic [31:0] mem [0:31];

    Cache dut (
        .clock (clock),
        .reset (reset),
        .req_addr (req_addr)
        // ...
    );


    logic [31:0] refRData;

    assign refRData = mem[req_addr];

    always_ff @(posedge clock) begin
        if (dut.resp_valid) begin
            assert (dut.rdata === refRData)
                else $error(
                    "Cache mismatch: DUT=%h REF=%h",
                    dut.rdata,
                    refRData
                );
        end
    end

endmodule

