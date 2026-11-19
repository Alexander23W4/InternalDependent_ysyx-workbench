
module ysyx_26040135_AXI_IFU (

    input clock,
    input reset,

    output reg fetch_valid,
    input instr_valid,   // icache固定给一个周期
    input [31:0] instr,
    input [1:0] fetch_error,
    output [31:0] fetch_addr,
    
    output [1:0] __error,   //  普通错误号
    output __master_validation_error,   // 该 master 非法访问


    output reg [31:0] out_instr,    // 产生了新instr就更新, 缓冲寄存工作交给下一级
    output reg out_valid,           // 产生新instr置1, 收到out_ready 清0
    input out_ready, 

    output reg [31:0] out_pc,   

    input flush,
    input [31:0] pc_flush,

    input cbi,

    input bt_valid,
    input [31:0] b_pc,
    input [31:0] b_target,

    output reg taken,

    input fence_i_flush,
    output reg icache_flush,

    input [31:0] mtvec,

    output reg ifu_exception_0,
    output reg ifu_exception_1,
    output reg [31:0] ifu_exception_pc
);

    // PMA +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

    function automatic reg is_executable(input [31:0] addr);
        begin
            is_executable = 1'b0;
            if      (addr[31:28] == 4'h3)      is_executable = 1'b1;   // Flash
            else if (addr[31:27] == 5'b10100)  is_executable = 1'b1;   // SDRAM
        end
    endfunction

    // PMA +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-



    // BTB +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    // BTFN(Backward Taken, Forward Not-taken): 2 项直接映射 BTB, pc[2] 选表项

    reg [31:0] btb_pc [1:0];
    reg [31:0] btb_target [1:0];
    reg [1:0]  valid;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            valid <= 2'b00;
        end else begin
            if(bt_valid) begin
                btb_pc[b_pc[2]]     <= b_pc;
                btb_target[b_pc[2]] <= b_target;
                valid[b_pc[2]]      <= 1'b1;
            end
        end
    end

    // BTB +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

    // 外部控制信号与返回外部的信号:
    reg master_validation_error_save;
    reg flush_save;
    reg fence_i_flush_save;
    reg instr_addr_misaligned;
    reg instr_access_fault;
    reg [31:0] pc_flush_save;


    assign __error = fetch_error;   
    assign __master_validation_error = master_validation_error_save;


    // 内部寄存器
    reg [31:0] pc;       

    assign fetch_addr = pc;

    // 状态
    typedef enum logic [1:0]{ 
        IDLE, FETCH
    } state_t;
    state_t state, next;



// 状态 及 反馈信号 更新
    always @( posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= '0;
            out_valid <= 1'b0;  

            master_validation_error_save <= 1'b0;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;
            fence_i_flush_save <= 1'b0;

            instr_addr_misaligned <= 1'b0;
            instr_access_fault <= 1'b0;

        end else begin

            state <= next;

            if(state == IDLE) begin
                if(out_ready) begin
                    if(instr_addr_misaligned) begin
                        instr_addr_misaligned <= 1'b0;
                        pc <= mtvec;
                    end
                    else if(instr_access_fault) begin
                        instr_access_fault <= 1'b0;
                        pc <= mtvec;
                    end
                end
            end

            if(state == FETCH) begin
                if(pc[1:0] != 2'b00) begin
                    instr_addr_misaligned <= 1'b1;
                end
                if(!is_executable(pc)) begin
                    master_validation_error_save <= 1'b1;
                    instr_access_fault <= 1'b1;
                end
            end

            // ------------------- flush 相关

            if(state == FETCH && !instr_valid) begin  // flush_save 是给正在访存, 不能及时冲刷准备的
                if(flush) begin
                    flush_save <= 1'b1;
                    pc_flush_save <= pc_flush;
                end
                if(fence_i_flush) begin
                    fence_i_flush_save <= 1'b1;
                end
            end 
            
            if(state == IDLE && out_valid && (flush | fence_i_flush | out_ready)) begin   // ⭐: 这里利用exu的逻辑, flush和out_ready是不会一起来的
                out_valid <= 1'b0;
            end


            if(state == IDLE) begin  // 如果都到IDLE了, 不可能还存有flush_save, 直接监视flush即可
                if(flush) begin
                    pc <= pc_flush;
                    instr_addr_misaligned <= 1'b0;
                    instr_access_fault <= 1'b0;
                end 
            end

            if(instr_valid) begin   // 下个周期就是IDLE, 可以握手, 在这里判断是否冲刷, 给不给握手
               if(flush_save) begin
                    pc <= pc_flush_save;
                    flush_save <= 1'b0;
                    instr_addr_misaligned <= 1'b0;
                    instr_access_fault <= 1'b0;
               end
               else if(flush) begin
                    pc <= pc_flush;
                    instr_addr_misaligned <= 1'b0;
                    instr_access_fault <= 1'b0;
               end 
               else if(fence_i_flush_save | fence_i_flush) begin   // 丢掉这次 fetch, 同时让 icache 整体失效
                    fence_i_flush_save <= 1'b0;
               end
               else begin
                    out_valid <= 1'b1; 
                    if(pc == btb_pc[pc[2]] && valid[pc[2]] && (pc > btb_target[pc[2]])) begin
                        pc    <= btb_target[pc[2]];   // BT
                        taken <= 1'b1;
                    end else begin
                        pc    <= pc + 32'd4;          // FN & default
                        taken <= 1'b0;
                    end
                    out_pc <= pc;
                    out_instr <= instr;
               end
            end

        end
    end


// 状态 及 总线信号 赋值
    always_comb begin

        next = state;
        fetch_valid = 1'b0;
        icache_flush = 1'b0;

        ifu_exception_0 = 1'b0;
        ifu_exception_1 = 1'b0;
        ifu_exception_pc = 32'b00;
            
        case(state)
            IDLE: begin  // IFU的 IDLE的作用就是等ready握手
                if((out_ready && !cbi) || (flush && cbi)) begin   // 必跳指令在流水线里时先不取指, 等 flush 来了直接取目标
                    next = FETCH;
                end

                if(out_ready) begin
                    if(instr_addr_misaligned) begin
                        ifu_exception_0 = 1'b1;
                        ifu_exception_pc = out_pc;
                    end
                    else if(instr_access_fault) begin
                        ifu_exception_1 = 1'b1;
                        ifu_exception_pc = out_pc;
                    end
                end
            end

            FETCH: begin
                if(pc[1:0] == 2'b00 && is_executable(pc)) begin
                    fetch_valid = 1'b1;
                    if(instr_valid) begin
                        next = IDLE;
                    end
                end else begin
                    next = IDLE;       // 非对齐 / 不可执行: 不取指, 回 IDLE 处理异常
                end
            end

            default: ;
        endcase

        if(state == IDLE || instr_valid) begin
            if(fence_i_flush_save || fence_i_flush) begin
                icache_flush = 1'b1;
            end
        end
    end



endmodule
