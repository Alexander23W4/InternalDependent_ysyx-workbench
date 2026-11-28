
module ysyx_26040135_AXI_IFU (

    input clock,
    input reset,

    // icache
    output reg fetch_valid,
    input instr_valid,   
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

    // 内部寄存器
    reg [31:0] pc;       
    assign fetch_addr = pc;

    reg flush_save;
    reg [31:0] pc_flush_save;

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

            if(state == FETCH && !instr_valid) begin 
                if(flush) begin
                    flush_save <= 1'b1;
                    pc_flush_save <= pc_flush;
                end
            end


            if(out_valid && (flush | out_ready)) begin   
                out_valid <= 1'b0;
            end


            if(state == IDLE) begin  
                if(flush) begin
                    pc <= pc_flush;
                end
            end

            if(instr_valid) begin   
                flush_save <= 1'b0;

                if(flush_save) begin
                    pc <= pc_flush_save;
                end
                else if(flush) begin
                    pc <= pc_flush;
                end 
                else begin 
                    if(pc == btb_pc[pc[2]] && valid[pc[2]] && pc > btb_target[pc[2]]) begin   // BT
                        pc <= btb_target[pc[2]];   
                        taken <= 1'b1;
                    end else begin
                        pc <= pc + 32'd4;  // FN & default
                        taken <= 1'b0;
                    end

                    out_instr <= instr;  
                    out_valid <= 1'b1;  
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
                        default: ;
                            
                    endcase
                end
            end
        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        next = state;
        fetch_valid = 1'b0;
            
        case(state)
            IDLE: begin  
                if((out_ready && !cbi) || (flush && cbi)) begin     
                    next = FETCH;
                end
            end

            FETCH: begin
                fetch_valid = 1'b1;
                if(instr_valid) begin
                    next = IDLE;
                end
            end

            default: ;
        endcase
    end

endmodule


