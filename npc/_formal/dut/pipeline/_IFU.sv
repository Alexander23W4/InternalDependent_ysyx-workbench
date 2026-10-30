// 注意, 给其他模块的控制信号并不是 拉高1周期 就完事了, 而是要等到 被控制模块 给一个反馈信号(被控制模块有这个义务), 
//      代表知道了, 然后 控制模块 将控制信号及时清理(同样有义务)

// 总之, 控制信号 和 反馈信号都是 外围给cpu提要求, 让cpu兼容外围

// 后续还需补充 input __error_is_arranged, 我现在默认是只要error出现, __error就一直为0, 然后cpu处理__error的逻辑直接设置成崩溃报错 (NPC_CRASH)


// ⭐: 因为接上总线的 master的 本质工作就是 访地址(访存+访外设), 所以我们把 PMA 就直接加到每一个总线 master 里面 (错误的尽早触发原则)

// ⭐: 不要让状态机卡在 除了IDLE的其他状态, 卡在IDLE是可以的



// Pipeline IFU:

// ⭐: 级间总线信号 + 流水线阻塞信号
// ⭐(对于流水线阻塞信号): 不阻塞上一级, 不阻塞系统总线

/*
-> 设计:
分支预测失败处理

-> 保证流水线的性能: 

每一级都要确定 时钟边界 (时钟边界寄存器 组合逻辑长度, 最长组合逻辑长度)   有没有专门的工具(或者在综合报告里面)查看哪个组合路径最长

所需时钟数
*/

module ysyx_26040135_AXI_IFU (
    output logic [31:0] bus_araddr,
    output logic [3:0] bus_arid,
    output logic [7:0] bus_arlen,
    output logic [2:0] bus_arsize,
    output logic [1:0] bus_arburst,
    output logic        bus_arvalid,
    input         bus_arready,
    input  [31:0] bus_rdata,
    input  [3:0] bus_rid,
    input  [1:0] bus_rresp,
    input         bus_rlast,
    input         bus_rvalid,
    output logic        bus_rready,
    output logic [31:0] bus_awaddr,
    output logic [3:0] bus_awid,
    output logic [7:0] bus_awlen,
    output logic [2:0] bus_awsize,
    output logic [1:0] bus_awburst,
    output logic        bus_awvalid,
    input         bus_awready,
    output logic [31:0] bus_wdata,
    output logic [3:0] bus_wstrb,
    output logic        bus_wlast,
    output logic        bus_wvalid,
    input         bus_wready,
    input  [3:0] bus_bid,
    input  [1:0] bus_bresp,
    input         bus_bvalid,
    output logic        bus_bready,
    
    input clock,
    input reset,

    output [1:0] __error,   //  普通错误号
    output __master_validation_error,   // 该 master 非法访问


    output reg [31:0] out_instr,    // 产生了新instr就更新, 缓冲寄存工作交给下一级
    output reg out_valid,           // 产生新instr置1, 收到out_ready 清0
    input out_ready, 

    output reg [31:0] out_pc,   

    input flush,
    input [31:0] pc_flush,

    output reg [63:0] ifu_work_cyc,
    output reg [63:0] ifu_block_cyc
);

    // PMA +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

    // PMA: 6 个窗口. 形式化用 if 链代替 '{...} 数组初始化(yosys 不支持)
    function automatic reg is_executable(input [31:0] addr);
        begin
            is_executable = 1'b0;
            if      (addr >= 32'h30000000 && addr < 32'h40000000) is_executable = 1'b1;  // Flash
            else if (addr >= 32'ha0000000 && addr < 32'ha8000000) is_executable = 1'b1;  // SDRAM
            else if (addr >= 32'h0f000000 && addr < 32'h0f002000) is_executable = 1'b1;  // SRAM
            else if (addr >= 32'h80000000 && addr < 32'h80400000) is_executable = 1'b1;  // PSRAM
            else if (addr >= 32'h20000000 && addr < 32'h20001000) is_executable = 1'b0;  // MROM
            else if (addr >= 32'h10000000 && addr < 32'h10001000) is_executable = 1'b0;  // UART
        end
    endfunction

    // PMA +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-



    // 外部控制信号与返回外部的信号:
    reg [1:0] error_save;
    reg master_validation_error_save;
    reg flush_save;
    reg [31:0] pc_flush_save;


    assign __error = error_save;   
    assign __master_validation_error = master_validation_error_save;


    // 内部寄存器
    reg [31:0] pc;       // pc完全由IFU控制


    // 状态
    typedef enum logic [1:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;



// 状态 及 反馈信号 更新
    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h80000000;

            out_instr <= '0;
            out_valid <= 1'b0;  
            out_pc <= '0;

            error_save <= 2'b00;
            master_validation_error_save <= 1'b0;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;

            ifu_work_cyc <= 64'b0;
            ifu_block_cyc <= 64'b0;

        end else begin
            if(flush) begin  // 分支预测失败, 冲刷
                flush_save <= 1'b1;
                pc_flush_save <= pc_flush;

            end 

            state <= next;
            
            if(state == IDLE && out_ready && out_valid) begin   //
                out_valid <= 1'b0;
            end

            if(state == IDLE) begin
                if(out_ready) begin
                    if(!is_executable(pc)) begin
                        master_validation_error_save <= 1'b1;
                    end    
                end else begin
                    ifu_block_cyc <= ifu_block_cyc + 64'b1; // 握手的周期是不算在里面的, 只算等待后级的周期
                end
            end

            if(state != IDLE) begin
                ifu_work_cyc <= ifu_work_cyc + 64'b1;
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



// assert +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

`ifndef SYNTHESIS
    // 原来这里是 SVA 的 assert property, yosys 不支持, 改成等价的立即 assert
    always @(posedge clock) begin
        assert((bus_awaddr  == 32'b0) &&
               (bus_awvalid == 1'b0) &&
               (bus_wdata   == 32'b0) &&
               (bus_wstrb   == 4'b0) &&
               (bus_wvalid  == 1'b0) &&
               (bus_bready  == 1'b0));
    end
`endif

// assert +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

endmodule
