/*
总线通常包含几十甚至上百根信号（地址、数据、控制、握手等）。如果用 module 端口一个个列出来，很容易连错顺序或遗漏。
总线就是一个 ⭐接口, 包含 ⭐信号线 & 协议

可以在 interface 中嵌入断言（assertions），实时检查协议是否被违反
通过 modport，同一个 interface 可以定义不同的角色方向

元电路怎么连到总线上面呢: module ahb_master (ahb_if.master bus);
// 一个模块拥有两个不同的总线接口
module my_complex_core (
    // ... 其他普通端口
    axi_if.master   mem_bus,   // 接口1：作为 Master 连接到 AXI 总线，用于取指/取数据
    ahb_if.slave    debug_bus  // 接口2：作为 Slave 连接到 AHB 总线，用于调试访问
);

    // 内部逻辑会分别处理这两种总线上的事务
    // mem_bus.addr, mem_bus.wdata ... 用于访问内存
    // debug_bus.addr, debug_bus.rdata ... 用于响应调试器

endmodule
*/
module xxx (
    input clk,
    input rst,
    axi_if.master mem_bus,
    ahb_if.slave  debug_bus
);

endmodule


/*
--> 一个标准的system verilog 总线结构:

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

--> 总线使用:
// 顶层：实例化接口
module top (
    input logic clk,
    input logic rst_n
);

// ⭐ 在顶层模块中，接口需要被实例化为一个信号，并且将其作为连接传递到子模块
    bus_if #(.ADDR_WIDTH(32), .DATA_WIDTH(32)) bus (
        .clk(clk),
        .rst_n(rst_n)
    );

    master u_master (.bus(bus.master));
    slave  u_slave  (.bus(bus.slave));
endmodule

// Master 模块
module master (bus_if.master bus);
    // 直接使用 bus.addr, bus.wdata, bus.valid ...
endmodule

// Slave 模块
module slave (bus_if.slave bus);
    // 直接使用 bus.rdata, bus.ready ...
endmodule

*/



// 文件: message_if.sv
// 定义一个通用的 Valid-Ready 握手总线接口
/*
+-----+ inst  ---> +-----+
| IFU | valid ---> | IDU |
+-----+ <--- ready +-----+

当收到ready时, 发出 instr
当没有收到ready时, 保存 instr

当没有收到instr是, valid为0
收到为1
*/

interface bus (
    input clk,
    input rst
);
// accliam signals:
    logic [31:0] instr;
    logic valid;
    logic ready;

// define characters:
    modport master (
        input ready,
        output valid,
        output [31:0] instr
    );

    modport slave (
        input valid,
        input [31:0] instr,
        output ready
    );

endinterface

module IFU (
    input clk,
    input rst,
    bus.master bus
);
    logic [31:0] instr;
    logic instr_ready;
    logic cease_fetch;

    always_ff @(posedge clk) begin
        if(instr_ready) begin
            bus.valid <= 1'b0;
        end
        else begin
            bus.valid <= 1'b1;
        end

        if(valid) begin
            bus.instr <= instr;
            cease_fetch <= 1'b0;
        end
        else begin
            cease_fetch <= 1'b1;
        end
    end

endmodule

module IDU (
    input clk,
    input rst,
    bus.slave bus
);
    logic [31:0] instr;
    logic ready;

    always_ff @(posedge clk) begin
        if(valid) begin
            instr <= bus.instr;
        end
        else begin
            instr <= instr;
        end

        if(ready) begin
            bus.ready <= 1'b1;
        end
        else begin
            bus.ready <= 1'b0;
        end
    end

endmodule

// ------------------------------------------

interface bus
    // 所有信号: 
    logic [31:0] instr;
    logic        valid;
    logic        ready;

    // 各元电路接口:
    modport master (
        input  ready,
        output valid,
        output [31:0] instr
    );

    modport slave (
        input  valid,
        input  [31:0] instr,
        output ready
    );
endinterface


module IFU (
    input  logic clk,
    input  logic rst,
    bus.master bus
);

/*
    modport master (
        input  ready,
        output valid,
        output [31:0] instr
    );
    目标是发出instr
    当ready = 1 且 instr_fetch_ready时 发出 instr

*/
    // 内部信号
    // 内部传来信号
    logic [31:0] instr_to_send;  // 现在fetch好的instr
    logic        instr_fetch_ready;

    // 反馈给内部的信号
    logic        send_pending;   // 停止fetch的信号

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            bus.valid   <= 1'b0;
            bus.instr   <= '0;
            send_pending <= 1'b0;  // 启动fetch
        end else begin

            // 先安内
            if(instr_fetch_ready) begin   
                bus.valid <= 1'b1;
            end
            else begin  // 这个周期没有fetch
                bus.valid <= 1'b0;
            end



            // 当有数据待发送且从设备准备好时，完成一次握手
            if (send_pending && bus.ready) begin  // ready=1 且 send_pending
                bus.valid   <= 1'b0;
                send_pending <= 1'b0;  // 启动fetch
            end
            // 产生新指令（示例）
            else if (!send_pending) begin   
                // 模拟生成新指令
                instr_to_send <= 32'hA5A5_5A5A;
                bus.instr     <= 32'hA5A5_5A5A;
                bus.valid     <= 1'b1;
                send_pending  <= 1'b1;
            end
            // 如果从设备未准备好，保持 valid 为高，数据不变
            else begin
                bus.valid <= 1'b1;
                bus.instr <= instr_to_send;  // 保持数据
            end
        end
    end
endmodule

module IDU (
    input  logic clk,
    input  logic rst,
    bus.slave bus
);
    logic [31:0] received_instr;
    logic        busy;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            bus.ready <= 1'b0;
            busy      <= 1'b0;
            received_instr <= '0;
        end else begin
            // 默认：空闲时准备好接收
            if (!busy) begin
                bus.ready <= 1'b1;
                if (bus.valid && bus.ready) begin  // 完整握手条件
                    received_instr <= bus.instr;
                    bus.ready      <= 1'b0;
                    busy           <= 1'b1;
                end
            end else begin
                // 模拟处理延迟
                bus.ready <= 1'b0;
                // 2 周期后释放 busy
                // （这里简化，实际可用计数器）
                busy <= 1'b0;
            end
        end
    end
endmodule