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
分支预测算法
BTFN(Backward Taken, Forward Not-taken)  认为分支指令更倾向于向上跳, 不倾向于向下跳
*/

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

    output reg [63:0] ifu_work_cyc,
    output reg [63:0] ifu_block_cyc,

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

    reg [31:0] btb_pc [1:0];
    reg [31:0] btb_target [1:0];
    reg [1:0] valid;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            valid <= 2'b00;
        end else begin
            if(bt_valid) begin
                btb_pc[b_pc[2]] <= b_pc;
                btb_target[b_pc[2]] <= b_target;
                valid[b_pc[2]] <= 1'b1;
            end
        end
    end

    // BTB +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

    // 外部控制信号与返回外部的信号:
    reg master_validation_error_save;
    reg flush_save;
    reg [31:0] pc_flush_save;
    reg fence_i_flush_save;
    reg _btb_hit;


    reg instr_addr_misaligned;
    reg instr_access_fault;

    assign __error = fetch_error;   
    assign __master_validation_error = master_validation_error_save;


    // 内部寄存器
    reg [31:0] pc;       

    assign fetch_addr = pc;

    wire _flush;
    reg  _fetch_done;    // 代表IFU 完成了一次fetch
    reg  _flush_ifu_blk;
    reg  _flush_ifu_blk_flg;

    assign _flush = flush;



    // 状态
    typedef enum logic [1:0]{ 
        IDLE, FETCH
    } state_t;
    state_t state, next;



// 状态 及 反馈信号 更新
    always_ff @( posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= '0;
            out_valid <= 1'b0;  

            master_validation_error_save <= 1'b0;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;
            fence_i_flush_save <= 1'b0;

            ifu_work_cyc <= 64'b0;
            ifu_block_cyc <= 64'b0;

            instr_addr_misaligned <= 1'b0;
            instr_access_fault <= 1'b0;

        end else begin

            state <= next;             

            if(state == IDLE) begin
                if(out_ready) begin
                    // 到这个状态, 说明这次fetch的这个instr有效(没有被flush), 则如果这次fetch周期出现exception, 统一在这个状态触发
                    // 然后如果有exception, 发信号给exu, invalid这次握手, 重置pc到mtvec, 改mepc和mcause
                    if(instr_addr_misaligned) begin
                        instr_addr_misaligned <= 1'b0;
                        pc <= mtvec;
                    end
                    else if(instr_access_fault) begin
                        instr_access_fault <= 1'b0;
                        pc <= mtvec;
                    end
                    
                end else begin
                    ifu_block_cyc <= ifu_block_cyc + 64'b1; // 握手的周期是不算在里面的, 只算等待后级的周期
                end
            end

            if(state != IDLE) begin
                ifu_work_cyc <= ifu_work_cyc + 64'b1;
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

        // ---- 以下都是flush的逻辑, 覆盖flush信号在IFU状态机的不同时刻到来的所有情况:

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
                    instr_addr_misaligned <= 1'b0;    // 这里同样, 碰到flush就清掉exception handle信号
                    instr_access_fault <= 1'b0;
                end 
            end

            if(instr_valid) begin   // 下个周期就是IDLE, 可以握手, 在这里判断是否冲刷, 给不给握手. 如果要冲刷, 则不给握手, 废掉这次fetch
               if(flush_save) begin
                    pc <= pc_flush_save;
                    flush_save <= 1'b0;
                    // 如果这条指令被flush了, 那么对于他的exception handle要取消掉, 后续一直到out_ready的时候检测exception, 都不会再收到新的excpetion
                    instr_addr_misaligned <= 1'b0;  
                    instr_access_fault <= 1'b0;
               end
               else if(flush) begin
                    pc <= pc_flush;
                    instr_addr_misaligned <= 1'b0;
                    instr_access_fault <= 1'b0;
               end 
               else if(fence_i_flush_save | fence_i_flush) begin   // 不更新pc, 也不给握手, 冲刷掉这次fetch, 同时发信号给icache冲刷, 下次再读同一个pc一次
                    fence_i_flush_save <= 1'b0;
               end
               else begin  // 如果没有这条没有被flush, 则正常更新pc, 分为default(+4) 和 触发b-type的分支预测
                    out_valid <= 1'b1;    // 没有被冲刷, 这次fetch有效, 给握手
                    if(pc == btb_pc[pc[2]] && valid[pc[2]] && pc > btb_target[pc[2]]) begin   // BT
                        pc <= btb_target[pc[2]];   
                        taken <= 1'b1;
                    end else begin
                        pc <= pc + 32'd4;  // FN & default
                        taken <= 1'b0;
                    end

                    if(fetch_error != 2'b00) begin
                        instr_access_fault <= 1'b1;
                    end

                    out_pc <= pc;   // 这里out_pc是旧值
                    out_instr <= instr;
               end
            end

        end
    end


// 状态 及 总线信号 赋值
    always_comb begin

        next = state;
        fetch_valid = 1'b0;
        _fetch_done = 1'b0;
        _flush_ifu_blk = 1'b0;
        _flush_ifu_blk_flg = 1'b0;
        _btb_hit = 1'b0;
        icache_flush = 1'b0;

        ifu_exception_0 = 1'b0;
        ifu_exception_1 = 1'b0;
        ifu_exception_pc = 32'b00;
            
        case(state)
            IDLE: begin  // IFU 的 IDLE的作用就是等ready握手
                if((out_ready && !cbi) || (flush && cbi)) begin   
                    next = FETCH;
                end

                if(out_ready) begin
                    if(instr_addr_misaligned) begin
                        ifu_exception_0 = 1'b1;
                        ifu_exception_pc = out_pc;  // out_pc取的是这次fetch的pc, 是旧值, 在这里使用
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
                        _fetch_done = 1'b1;
                        next = IDLE;
                    end
                end else begin
                    next = IDLE;
                end
            end

            default: ;
        endcase

        if(state == IDLE || instr_valid) begin
            if(fence_i_flush_save || fence_i_flush) begin
                icache_flush = 1'b1;
            end
        end

        if(flush && (state == FETCH && !instr_valid)) begin  // flush_save 是给正在访存, 不能及时冲刷准备的
            _flush_ifu_blk = 1'b1;
        end 
        if(flush_save) begin
            _flush_ifu_blk_flg = 1'b1;    
        end
         if(instr_valid && !flush && !flush_save && pc == btb_pc[pc[2]] && valid[pc[2]]) begin
            _btb_hit = 1'b1;
         end
    end



endmodule


