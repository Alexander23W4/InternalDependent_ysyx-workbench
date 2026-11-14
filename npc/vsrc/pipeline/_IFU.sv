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
    ysyx_26040135_AXI4.master bus,
    
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

    function automatic reg is_executable(input [31:0] addr);
        begin
            is_executable = 1'b0;
            if      (addr[31:28] == 4'h3)      is_executable = 1'b1;   // Flash
            else if (addr[31:27] == 5'b10100)  is_executable = 1'b1;   // SDRAM
            // else if (addr[31:13] == 19'h07800) is_executable = 1'b1;   // SRAM
            // else if (addr[31:22] == 10'h200)   is_executable = 1'b1;   // PSRAM
            // else if (addr[31:12] == 20'h20000) is_executable = 1'b1;   // MROM
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
    always_ff @( posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= '0;
            out_valid <= 1'b0;  

            error_save <= 2'b00;
            master_validation_error_save <= 1'b0;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;

            ifu_work_cyc <= 64'b0;
            ifu_block_cyc <= 64'b0;

        end else begin

            if(flush && ((state == AR) || (state == R && !bus.rvalid))) begin  // flush_save 是给正在访存, 不能及时冲刷准备的
                flush_save <= 1'b1;
                pc_flush_save <= pc_flush;
            end 

            state <= next;
            
            if(state == IDLE && out_valid && (flush | out_ready)) begin   //
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


            if(state == R && bus.rvalid) begin
                if(flush_save) begin
                    pc <= pc_flush_save;
                    flush_save <= 1'b0;
                end 
                else if(flush) begin
                    pc <= pc_flush;
                end else begin
                    if(bus.rresp == 2'b00) begin
                        out_instr <= bus.rdata;
                        out_pc <= pc;
                        out_valid <= 1'b1;
                        error_save <= 2'b00;
                        pc <= pc + 32'd4;   // 默认分支预测
                    end else begin
                        error_save <= bus.rresp;    // 取指出错: 不产出指令, 只记错误
                    end 
                end
            end

            if(state == IDLE) begin  // 如果都到IDLE了, 不肯能还存有flush_save, 直接监视flush即可
                if(flush) begin
                    pc <= pc_flush;
                end 
            end

        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        bus.arvalid = 1'b0;
        bus.araddr = pc;       
        bus.arid = 4'b0000;
        bus.arlen = 8'h00;    // 每次传输一个beat
        bus.arsize = 3'b010;
        bus.arburst = 2'b00;   // 每个beat使用相同地址   01递增 10回绕
        bus.rready = 1'b0;

        bus.awvalid = 1'b0;
        bus.awaddr = '0;
        bus.wdata = '0;
        bus.wstrb = '0;
        bus.awid = 4'b0000;
        bus.awsize = 3'b010;
        bus.awlen = 8'h00;
        bus.awburst = 2'b00;
        bus.wvalid = 1'b0;
        bus.wlast  = 1'b0;   // IFU 只读不写, 写通道的 wlast 恒 0
        bus.bready = 1'b0;

        next = state;
            
        case(state)
            IDLE: begin  // IFU的 IDLE的作用就是等ready握手
                if(out_ready) begin   // 可以阻塞到IDLE, 但是不能阻塞系统总线, 所以必须在这里等out_ready
                    next = AR;
                end
            end

            AR: begin
                bus.arvalid = 1'b1;
                if(bus.arready == 1'b1) begin
                    next = R;
                end
            end

            R: begin
                bus.rready = 1'b1;   // 原来是等rvalid才给rready, 现在直接给, 断掉组合环
                if(bus.rvalid == 1'b1) begin 
                    next = IDLE;
                end
            end

            default: ;
        endcase
    end



// assert +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

    property p_write_channels_zero;
        @(posedge clock) 
        (bus.awaddr == 32'b0) &&
        (bus.awvalid == 1'b0) &&
        (bus.wdata == 32'b0) &&
        (bus.wstrb == 4'b0) &&
        (bus.wvalid == 1'b0) &&
        (bus.bready == 1'b0);
    endproperty
    assert property (p_write_channels_zero) else $error("IFU: Write channel signals must be 0");

// assert +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

endmodule
