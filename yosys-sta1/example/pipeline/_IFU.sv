
module ysyx_26040135_AXI_IFU (
    output logic [31:0] bus_araddr,
    output logic        bus_arvalid,
    input  logic        bus_arready,
    output logic [3:0]  bus_arid,
    output logic [7:0]  bus_arlen,
    output logic [2:0]  bus_arsize,
    output logic [1:0]  bus_arburst,
    input  logic [31:0] bus_rdata,
    input  logic [1:0]  bus_rresp,
    input  logic        bus_rvalid,
    output logic        bus_rready,
    input  logic [3:0]  bus_rid,
    input  logic        bus_rlast,

    output logic [31:0] bus_awaddr,
    output logic        bus_awvalid,
    input  logic        bus_awready,
    output logic [3:0]  bus_awid,
    output logic [7:0]  bus_awlen,
    output logic [2:0]  bus_awsize,
    output logic [1:0]  bus_awburst,
    output logic [31:0] bus_wdata,
    output logic [3:0]  bus_wstrb,
    output logic        bus_wvalid,
    output logic        bus_wlast,
    input  logic        bus_wready,
    input  logic [3:0]  bus_bid,
    input  logic [1:0]  bus_bresp,
    input  logic        bus_bvalid,
    output logic        bus_bready,

    input clock,
    input reset,

    output reg [31:0] out_instr,    // 产生了新instr就更新, 缓冲寄存工作交给下一级
    output reg out_valid,           // 产生新instr置1, 收到out_ready 清0
    input out_ready, 

    output reg [31:0] out_pc,   

    input flush,
    input [31:0] pc_flush
);

    // 外部控制信号与返回外部的信号:
    reg [1:0] error_save;
    reg flush_save;
    reg [31:0] pc_flush_save;


    // 内部寄存器
    reg [31:0] pc;       // pc完全由IFU控制


    // 状态
    parameter [1:0] IDLE = 2'd0,
                   AR    = 2'd1,
                   R     = 2'd2;
    reg [1:0] state, next;



// 状态 及 反馈信号 更新
    always @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= 32'b0;
            out_valid <= 1'b0;  
            out_pc <= 32'b0;

            error_save <= 2'b00;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;

        end else begin
            if(flush) begin  // 分支预测失败, 冲刷
                flush_save <= 1'b1;
                pc_flush_save <= pc_flush;

            end 

            state <= next;
            
            if(state == IDLE && out_ready && out_valid) begin   //
                out_valid <= 1'b0;
            end

            if(state == R && bus_rvalid) begin
                if(flush_save) begin  // 如果在访存期间收到flush, 必须完成这次fetch才能够正式冲刷
                    pc <= pc_flush_save;  // 不给out_valid, 不读rdata, 废掉这次读取
                end else begin
                    if(bus_rresp == 2'b00) begin
                        out_instr  <= bus_rdata;
                        out_pc <= pc;
                        out_valid  <= 1'b1;
                        error_save <= 2'b00;
                        pc <= pc + 32'd4;   // 默认分支预测
                    end else begin
                        error_save <= bus_rresp;    // 取指出错: 不产出指令, 只记错误
                    end 
                end

            end
        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        bus_arvalid = 1'b0;
        bus_araddr = pc;       
        bus_arid = 4'b0000;
        bus_arlen = 8'h00;    // 每次传输一个beat
        bus_arsize = 3'b010;
        bus_arburst = 2'b00;   // 每个beat使用相同地址   01递增 10回绕
        bus_rready = 1'b0;

        bus_awvalid = 1'b0;
        bus_awaddr = '0;
        bus_wdata = '0;
        bus_wstrb = '0;
        bus_awid = 4'b0000;
        bus_awsize = 3'b010;
        bus_awlen = 8'h00;
        bus_awburst = 2'b00;
        bus_wvalid = 1'b0;
        bus_bready = 1'b0;

        next = state;
            
        case(state)
            IDLE: begin  // IFU的 IDLE的作用就是等ready握手
                if(out_ready) begin   // 可以阻塞到IDLE, 但是不能阻塞系统总线, 所以必须在这里等out_ready
                    next = AR;
                end
            end

            AR: begin
                bus_arvalid = 1'b1;
                if(bus_arready == 1'b1) begin
                    next = R;
                end
            end

            R: begin
                if(bus_rvalid == 1'b1) begin
                    bus_rready = 1'b1;  
                    next = IDLE;
                end
            end

        endcase
    end


endmodule
