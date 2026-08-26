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