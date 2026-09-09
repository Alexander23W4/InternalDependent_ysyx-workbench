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
    
    input __pc_is_updated,   // cpu 应当只拉高此信号一个周期 (外围对cpu的控制信号提要求)

    input [31:0] pc,     // ⭐$$: 遗留问题: 这个pc该让cpu保持多久
    output [31:0] rdata,

    output __instr_valid,   //  提示cpu fetch 完成, 可以decode了 (外围给自己输出给cpu的 反馈信号 定要求)
    output [1:0] __error,   //  普通错误号
    output __master_validation_error    // 该master 非法访问
);
// 外部控制信号与返回外部的信号:

    // PMA

    localparam PMA_ENTRIES = 2;

    typedef struct packed {
        logic [31:0] base;
        logic [31:0] size;
        logic        executable;
        logic        readable;
        logic        writable;
    } pma_entry_t;

    pma_entry_t pma_table [PMA_ENTRIES] = '{
        '{base: 32'h80000000, size: 32'h07ffffff, executable: 1'b1, readable: 1'b1, writable: 1'b1},  // SRAM
        '{base: 32'h10000000, size: 32'h00001000, executable: 1'b0, readable: 1'b0, writable: 1'b1}   // UART (只写)
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



    logic [31:0] rdata_save;
    logic [1:0] error_save;
    logic instr_valid_save;
    logic master_validation_error_save;

    assign rdata = rdata_save;
    assign __instr_valid = instr_valid_save;
    assign __error = error_save;
    assign __master_validation_error = master_validation_error_save;

    typedef enum [1:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;


    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 2'b00;
            instr_valid_save <= 1'b0;
            master_validation_error_save <= 1'b0;

        end else begin
            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                if(bus.rresp == 2'b00) begin
                    rdata_save <= bus.rdata;
                    instr_valid_save <= 1'b1;                       
                end
                else begin
                    error_save <= bus.rresp;
                end
            end

            if(state == IDLE || state == AR) begin
                instr_valid_save <= 1'b0;
            end

            if(state == IDLE || __pc_is_updated) begin
                if(!is_executable(pc)) begin
                    master_validation_error_save <= 1'b1;
                end
            end

            state <= next;
        end
    end
/*
    先保证所有output信号默认都是0    
    在slave_status为0的时候, 先发LSU_request, 下个周期接收 valid_master_ID, 如果是自己的, 再跳到AR/AW, 将arvalid置为1
*/

    always_comb begin
        bus.arvalid = 1'b0;
        bus.araddr = pc;
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

        next = state;
        
        case(state)
            IDLE: begin
                if(__pc_is_updated) begin
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
                    next = IDLE;
                end
            end

            default: begin
                next = IDLE;
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
