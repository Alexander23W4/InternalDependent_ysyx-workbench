
/*
-> 设计:
分支预测算法
BTFN(Backward Taken, Forward Not-taken)  认为分支指令更倾向于向上跳, 不倾向于向下跳
*/

module ysyx_26040135_AXI_IFU (

    input clock,
    input reset,

    // icache
    output reg fetch_valid,
    input instr_valid,   // icache固定给一个周期
    input [31:0] instr,
    input [1:0] fetch_error,
    output [31:0] fetch_addr,

    // pipeline
    output reg out_valid,           
    input out_ready, 

    output reg [31:0] out_instr,    
    output reg [31:0] out_pc,   

    // flush (including exception)
    input flush,
    input [31:0] pc_flush,

    input cbi,

    // branch prediction
    input bt_valid,
    input [31:0] b_pc,
    input [31:0] b_target,

    output reg taken,

    // exception pass
    output reg exception_0,
    output reg exception_1
);

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
    reg flush_save;
    reg [31:0] pc_flush_save;
    reg _btb_hit;


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
    always_ff @(posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= '0;
            out_valid <= 1'b0;  

            flush_save <= 1'b0;

        end else begin

            state <= next;             

        // --------------- 以下都是flush的逻辑, 覆盖flush信号在IFU状态机的不同时刻到来的所有情况:

            if(state == FETCH && !instr_valid) begin  // flush_save 是给正在访存, 不能及时冲刷准备的
                if(flush) begin
                    flush_save <= 1'b1;
                    pc_flush_save <= pc_flush;
                end
            end


            if(out_valid && (flush | out_ready)) begin   // ⭐: 这里利用exu的逻辑, flush和out_ready是不会一起来的
                out_valid <= 1'b0;
            end


            if(state == IDLE) begin  // 如果都到IDLE了, 不可能还存有flush_save, 直接监视flush即可
                if(flush) begin
                    pc <= pc_flush;
                end
            end

            if(instr_valid) begin   

                // 要flush的, 在这里先把该清的flag都清理掉
                flush_save <= 1'b0;

                // 这里按照优先级置pc, exception优先.  (按理来说应该越深的指令优先级越高)

                if(flush_save) begin
                    pc <= pc_flush_save;
                end
                else if(flush) begin
                    pc <= pc_flush;
                end 
                else begin 
                    // 更新pc   如果这条没有触发意外, 则正常更新pc, 分为default(+4) 和 触发b-type的分支预测
                    if(pc == btb_pc[pc[2]] && valid[pc[2]] && pc > btb_target[pc[2]]) begin   // BT
                        pc <= btb_target[pc[2]];   
                        taken <= 1'b1;
                    end else begin
                        pc <= pc + 32'd4;  // FN & default
                        taken <= 1'b0;
                    end

                    out_instr <= instr;  
                    out_valid <= 1'b1;    // 现在除了flush, 固定都会给out_valid
                    out_pc <= pc;
                    
                    case(fetch_error)
                        2'b00: begin
                            exception_0 <= 1'b0;
                            exception_1 <= 1'b0;
                        end    
                        2'b01: begin
                            exception_0 <= 1'b1;
                            exception_1 <= 1'b0;
                        end
                        2'b10: begin
                            exception_0 <= 1'b0;
                            exception_1 <= 1'b1;
                        end
                            
                    endcase
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
            
        case(state)
            IDLE: begin  // IFU 的 IDLE的作用就是等ready握手
                if((out_ready && !cbi) || (flush && cbi)) begin     // 这里因为cbi必然会被flush, 所以先把cbi卡在这里, 直到收到flush
                    next = FETCH;
                end
            end

            FETCH: begin
                fetch_valid = 1'b1;
                if(instr_valid) begin
                    _fetch_done = 1'b1;
                    next = IDLE;
                end
            end

            default: ;
        endcase



        // Veri
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


