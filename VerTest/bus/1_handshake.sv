/*
总线通常包含几十甚至上百根信号（地址、数据、控制、握手等）。如果用 module 端口一个个列出来，很容易连错顺序或遗漏。
总线就是一个 ⭐接口, 包含 ⭐信号线 & 协议

可以在 interface 中嵌入断言（assertions），实时检查协议是否被违反：
通过 modport，同一个 interface 可以定义不同的角色方向：
*/

/*
一个标准的system verilog 总线结构:

// 文件: bus_if.sv
interface bus_if #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
) (
    input logic clk,
    input logic rst_n
);

    // ===== 信号声明 =====
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] wdata;
    logic [DATA_WIDTH-1:0] rdata;
    logic                  we;
    logic                  valid;
    logic                  ready;

    // ===== Modport：定义不同角色 =====
    modport master (
        output addr, wdata, we, valid,
        input  rdata, ready,
        input  clk, rst_n
    );

    modport slave (
        input  addr, wdata, we, valid,
        output rdata, ready,
        input  clk, rst_n
    );

    // ===== 协议逻辑 (分情况) ======
    简单的握手协议写在interface里；复杂的、需要状态机或仲裁的协议，写在独立的模块（如协议控制器、仲裁器）里，interface只负责连线。


    // ===== 协议断言（可选） =====  用于调试和验证，确保没有人违反协议。
    // 当 valid=1 且 ready=0 时，addr 和 wdata 不能变
    property valid_stable;
        @(posedge clk) (valid && !ready) |=> $stable(addr) && $stable(wdata);
    endproperty
    assert property (valid_stable);

endinterface

*/
// 文件: message_if.sv
// 定义一个通用的 Valid-Ready 握手总线接口
interface message_if #(
    parameter DATA_WIDTH = 32
) (
    input logic clk,
    input logic rst_n
);

    // 接口信号
    logic        valid;    // 主设备数据有效信号
    logic        ready;    // 从设备准备好接收信号
    logic [DATA_WIDTH-1:0] data;  // 数据负载

    // 断言：当 valid 和 ready 同时为高时，数据完成传输
    property handshake_done;
        @(posedge clk) (valid && ready) |=> (1);
    endproperty
    assert property (handshake_done);

    // Modport：定义主设备和从设备的信号方向
    modport master (
        output valid,
        input  ready,
        output data
    );

    modport slave (
        input  valid,
        output ready,
        input  data
    );

endinterface


interface handshake (
    input logic clk,
    input logic rst
);
    logic valid;
    logic ready;
    logic [31:0] data;




endinterface