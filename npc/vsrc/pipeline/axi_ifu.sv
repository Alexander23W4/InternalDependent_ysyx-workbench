// 注意, 给其他模块的控制信号并不是 拉高1周期 就完事了, 而是要等到 被控制模块 给一个反馈信号(被控制模块有这个义务), 
//      代表知道了, 然后 控制模块 将控制信号及时清理(同样有义务)

// 总之, 控制信号 和 反馈信号都是 外围给cpu提要求, 让cpu兼容外围

// 后续还需补充 input __error_is_arranged, 我现在默认是只要error出现, __error就一直为0, 然后cpu处理__error的逻辑直接设置成崩溃报错 (NPC_CRASH)

// ⭐: 因为接上总线的master的 本质工作就是 访地址(访存+访外设), 所以我们把 PMA 就直接加到每一个总线 master 里面 (错误的尽早出发原则)

// ⭐: 不要让状态机卡在 除了IDLE的其他状态, 卡在IDLE是可以的




module ysyx_26040135_AXI_IFU (
    ysyx_26040135_AXI4.master bus,
    
    input clock,
    input reset,

    output [1:0] __error,   //  普通错误号
    output __master_validation_error    // 该 master 非法访问

    // pipeline 
    input [31:0] in_pc,
    input in_valid,
    output in_ready,

    output [31:0] out_instr,
    output out_valid,
    input out_ready
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


    // 返回值 以及 反馈信号
    logic [31:0] rdata_save;
    logic [1:0] error_save;
    logic master_validation_error_save;

    assign rdata = rdata_save;
    assign __error = error_save;
    assign __master_validation_error = master_validation_error_save;


    // 状态
    typedef enum [1:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;


// 状态 及 反馈信号 更新
    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 2'b00;
            master_validation_error_save <= 1'b0;

        end else begin
            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                if(bus.rresp == 2'b00) begin
                    rdata_save <= bus.rdata;                   
                end
                else begin
                    error_save <= bus.rresp;
                end
            end

            if(state == IDLE || in_valid) begin
                if(!is_executable(in_pc)) begin
                    master_validation_error_save <= 1'b1;
                end
            end

            state <= next;
        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        bus.arvalid = 1'b0;
        bus.araddr = in_pc;
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

        in_ready = 1'b0;

        next = state;
        
        case(state)
            IDLE: begin
                if(in_valid) begin
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
                    bus.rready = 1'b1;
                    in_ready = 1'b1;
                    next = IDLE;
                end
            end

        endcase
    end



// assert
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

endmodule
