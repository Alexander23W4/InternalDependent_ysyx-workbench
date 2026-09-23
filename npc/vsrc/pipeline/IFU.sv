// 注意, 给其他模块的控制信号并不是 拉高1周期 就完事了, 而是要等到 被控制模块 给一个反馈信号(被控制模块有这个义务), 
//      代表知道了, 然后 控制模块 将控制信号及时清理(同样有义务)

// 总之, 控制信号 和 反馈信号都是 外围给cpu提要求, 让cpu兼容外围

// 后续还需补充 input __error_is_arranged, 我现在默认是只要error出现, __error就一直为0, 然后cpu处理__error的逻辑直接设置成崩溃报错 (NPC_CRASH)

// ⭐: 因为接上总线的master的 本质工作就是 访地址(访存+访外设), 所以我们把 PMA 就直接加到每一个总线 master 里面 (错误的尽早出发原则)

// ⭐: 不要让状态机卡在 除了IDLE的其他状态, 卡在IDLE是可以的

// Pipeline IFU:

// ⭐: 级间总线信号 + 流水线阻塞信号
// ⭐(对于流水线阻塞信号): 不阻塞上一级, 不阻塞系统总线

module ysyx_26040135_AXI_IFU (
    ysyx_26040135_AXI4.master bus,
    
    input clock,
    input reset,

    output [1:0] __error,   //  普通错误号
    output __master_validation_error,   // 该 master 非法访问

    // pipeline 
    input [31:0] in_pc,    // 完成握手后, 要缓冲寄存
    input in_valid,        // valid 和 ready 同时为1, 达成握手 (我能收, 前一级能发)
    output logic in_ready,   // 只要输入寄存器空, 就是上一条消息我已经接收了, 就置1 (我能收)

    output logic [31:0] out_instr,    // 产生了新instr就更新, 缓冲寄存工作交给下一级
    output logic out_valid,   // 产生新instr置1, 收到out_ready 清0
    input out_ready,

    output logic [31:0] out_pc
);
// 外部控制信号与返回外部的信号:

    // PMA

    localparam PMA_ENTRIES = 6;

    typedef struct packed {
        logic [31:0] base;
        logic [31:0] size;
        logic        executable;
        logic        readable;
        logic        writable;
    } pma_entry_t;

    pma_entry_t pma_table [PMA_ENTRIES] = '{
        '{base: 32'h30000000, size: 32'h10000000, executable: 1'b1, readable: 1'b1, writable: 1'b0},  // Flash (16MB 窗口, 和 flash_read 的偏移一致)
        '{base: 32'ha0000000, size: 32'h08000000, executable: 1'b1, readable: 1'b1, writable: 1'b1},  // SDRAM (字扩展后 128MB)
        '{base: 32'h80000000, size: 32'h00400000, executable: 1'b1, readable: 1'b1, writable: 1'b1},  // PSRAM
        '{base: 32'h20000000, size: 32'h00001000, executable: 1'b1, readable: 1'b1, writable: 1'b0},  // MROM
        '{base: 32'h0f000000, size: 32'h00002000, executable: 1'b1, readable: 1'b1, writable: 1'b1},  // SRAM
        '{base: 32'h10000000, size: 32'h00001000, executable: 1'b0, readable: 1'b1, writable: 1'b1}   // UART16550
    };

    function automatic logic is_executable(input [31:0] addr);
        for (int i = 0; i < PMA_ENTRIES; i++) begin
            if (addr >= pma_table[i].base && 
                addr < pma_table[i].base + pma_table[i].size) begin
                return pma_table[i].executable;
            end
        end
        return 1'b0;  // 默认不可执行
    endfunction



    // 内部寄存器
    logic [31:0] pc_save;       // 握手成功后锁存下来的 PC(上游此时可以换下一条 PC 了)
    logic        in_valid_r;    // 输入寄存器里是否有一条待取指的 PC

    // 返回值 以及 反馈信号
    logic [1:0] error_save;
    logic master_validation_error_save;


    assign __error = error_save;
    assign __master_validation_error = master_validation_error_save;


    // 状态
    typedef enum logic [1:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;

    wire out_take   = out_valid && out_ready;          // 本拍输出寄存器被下游取走

    // ⭐[流水线阻塞信号]: 把几个级间总线信号都实现之后, 再考虑阻塞信号是什么逻辑
    wire can_fetch  = in_valid_r && (!out_valid || out_ready);   // 上一个instr被IDU取走, 才能下一次fetch


// 状态 及 反馈信号 更新
    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            pc_save    <= '0;
            in_valid_r <= 1'b0;

            out_instr <= '0;
            out_valid <= 1'b0;
            out_pc <= '0;

            error_save <= 2'b00;
            master_validation_error_save <= 1'b0;


        end else begin
            state <= next;

            // ---------- 输入侧: 上游握手成功, 锁存 PC(讲义第 5 条) ----------
            if(in_ready && in_valid) begin
                pc_save    <= in_pc;
                in_valid_r <= 1'b1;
                if(!is_executable(in_pc)) begin
                    master_validation_error_save <= 1'b1;
                end
            end

            // ---------- PC 被交给 AR 的那一拍, 输入寄存器就空了 ----------
            if(state == IDLE && can_fetch) begin
                in_valid_r <= 1'b0;
            end

            // ---------- 取指完成: 产出指令(讲义第 1/2 条) ----------
            if(state == R && bus.rvalid) begin
                if(bus.rresp == 2'b00) begin
                    out_instr  <= bus.rdata;
                    out_pc <= pc_save;
                    out_valid  <= 1'b1;
                    error_save <= 2'b00;
                end else begin
                    error_save <= bus.rresp;    // 取指出错: 不产出指令, 只记错误
                end
            end

            // ---------- 输出侧: 被下游取走就清掉 valid(讲义第 2 条) ----------
            if(out_take) begin
                out_valid <= 1'b0;
            end
        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        bus.arvalid = 1'b0;
        bus.araddr = pc_save;       
        bus.arid = 4'b0000;
        bus.arlen = 8'h00;
        bus.arsize = 3'b010;
        bus.arburst = 2'b00;
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
        bus.bready = 1'b0;

        // 讲义第 3 条: 本阶段不忙(输入寄存器空)就能收上游的消息
        in_ready = !in_valid_r;

        next = state;
        
        case(state)
            IDLE: begin

                if(can_fetch) begin  // 不管怎么样, 进入下一个ifu周期的一个clk内, out_invalid必定被清0
                    bus.arvalid = 1'b1;
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
                if(bus.rvalid == 1'b1) begin
                    bus.rready = 1'b1;  // 不管IDU有没有处理完, 都先把AXI总线的握手完成, 如果IDU没有处理完, 阻塞IFU的状态机, 不要阻塞总线
                    next = IDLE;
                end
            end

        endcase
    end



// assert
`ifndef SYNTHESIS
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
`endif

endmodule
