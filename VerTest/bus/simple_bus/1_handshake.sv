/*
总线通常包含几十甚至上百根信号（地址、数据、控制、握手等）。如果用 module 端口一个个列出来，很容易连错顺序或遗漏。
总线就是一个 ⭐接口, 包含 ⭐信号线 & 协议(主要写在各个模块里面)

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

⭐ 模块里面的 总线协议应该写成 state machine  状态机
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

// ⭐: 总线示例: 
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
// ⭐: 顶层top 示例:
// 顶层：实例化接口
module top (
    input logic clk,
    input logic rst_n
);

// *** 在顶层模块中，接口需要被实例化为一个信号，并且将其作为连接传递到子模块
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

*/

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
    input logic clk,
    input logic rst,
    bus.master bus
);

    // 内部信号:
    logic [31:0] instr_to_send;
    logic        instr_fetch_ready;

    logic        fetch_pending;

    // ⭐: 模块内的的总线逻辑应当写成 基于内部和外部寄存器信号的 状态机
    typedef enum {
        SEND, PREPARE, WAITING
    } state_t;

    state_t state, next;

    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            fetch_pending <= 1'b0;
            bus.instr <= `0;
            bus.valid <= 1'b0;
        end
        else begin
            state <= next;
            unique case(state)
                SNED: begin
                    if(!bus.ready) next <= WAITING;
                    else begin
                        if(instr_fetch_ready) next <= state;
                        else next <= PREPARE;
                    end
                end
                PREPARE: begin
                    if(!instr_fetch_ready) next <= state;
                    else begin
                        if(bus.ready) next <= SEND;
                        else next <= WAITING;
                    end
                end
                WAITING: begin
                    if(!bus.ready) next <= state;
                    else begin
                        if(instr_fetch_ready) next <= SEND;
                        else next <= PREPARE;
                    end
                end
            endcase
        end
    end

endmodule



module IFU (
    input  logic clk,
    input  logic rst,
    bus.master bus
);

    // ===== 内部信号 =====
    logic [31:0] instr_to_send;
    logic        instr_fetch_ready;
    logic        fetch_pending;

    // ===== 状态定义 =====       ⭐: 状态的数量 = 需要等待的不同情况的数量
    typedef enum logic [1:0] {
        IDLE,       // 空闲：没有待发送的指令, valid = 0
        WAIT    // 等待握手完成：valid=1，ready=0，保持数据
    } state_t;

    state_t state, next_state;

    // ===== 数据保持寄存器 =====
    logic [31:0] instr_holding;

    // ===== 第一段：状态寄存器 + 数据保持 =====
    always_ff @(posedge clk or posedge rst) begin   // 总时序逻辑
        if (rst) begin
            state         <= IDLE;
            instr_holding <= '0;
        end else begin
            state <= next_state;
            // 在 IDLE 状态锁存新指令
            if (state == IDLE && instr_fetch_ready) begin
                instr_holding <= instr_to_send;
            end
        end
    end


    // ===== 第二段：下一状态逻辑 + 输出逻辑（组合逻辑） =====    // next_state 组合逻辑
    always_comb begin 

        // ⭐: 默认值（防止锁存器）
        next_state    = state;
        bus.valid     = 1'b0;
        bus.instr     = instr_holding;   // 默认输出保持的数据
        fetch_pending = 1'b0;

        case (state)
            IDLE: begin
                bus.valid = 1'b0;
                if (instr_fetch_ready) begin
                    // 有新指令，准备发送
                    bus.instr = instr_to_send;
                    bus.valid = 1'b1;
                    if (bus.ready) begin
                        // 同时握手完成，回到 IDLE
                        next_state = IDLE;
                    end else begin
                        // 从设备未就绪，进入等待
                        next_state = WAIT_RDY;
                    end
                end
            end

            WAIT_RDY: begin
                // 保持 valid=1，等待 ready
                bus.instr     = instr_holding;
                bus.valid     = 1'b1;
                fetch_pending = 1'b1;
                if (bus.ready) begin
                    // 握手完成，回到 IDLE
                    next_state = IDLE;
                end
            end
        endcase
    end

    // ===== 第三段（可选）：寄存输出信号，去除毛刺 =====
    // 如果希望输出信号干净，可以加这一段
    // always_ff @(posedge clk or posedge rst) begin
    //     if (rst) begin
    //         bus.valid <= 1'b0;
    //         bus.instr <= '0;
    //     end else begin
    //         // 将组合逻辑的输出打一拍
    //     end
    // end

endmodule



module IDU (
    input  logic clk,
    input  logic rst,
    bus.slave bus
);
    logic [31:0] instr_holding;   // IDU用来保存instr的寄存器
    logic        busy;

    // bus.instr   bus.valid     bus.ready
    // 只要 busy = 0  valid = 1就可以接收了

    typedef enum  logic [1:0] { 
        WAIT_INSTR,   // 无法接收到instr
        WAIT_DECODE   // 还没有decode完成, 无法递送instr
    } state_t;

    state_t state, next;

    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            state <= WAIT_INSTR;
        end
        else begin
            state <= next;
            if(!busy && bus.valid) begin   
                instr_holding <= bus.instr;               
            end
        end
    end


    always_comb begin 
        bus.ready = 1'b0;
        next = state;

        case (state)
            WAIT_INSTR: begin
                bus.ready = 1'b1;
                if(bus.valid) begin
                    bus.ready = 1'b0;   // 握手成功, 立刻拉低成1
                    next = WAIT_DECODE;
                end
            end
            WAIT_DECODE: begin
                if(!busy) begin
                    next = WAIT_INSTR;
                end
            end
        endcase
    end

endmodule