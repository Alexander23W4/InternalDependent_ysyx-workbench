
module ysyx_26040135_AXI_IFU (
    output logic [31:0] bus_araddr,
    output logic        bus_arvalid,
    input  logic        bus_arready,
    input  logic [31:0] bus_rdata,
    input  logic [1:0]  bus_rresp,
    input  logic        bus_rvalid,
    output logic        bus_rready,

    
    input clock,
    input reset,

    output [1:0] __error,   //  普通错误号
    output __master_validation_error,   // 该 master 非法访问


    output reg [31:0] out_instr,    // 产生了新instr就更新, 缓冲寄存工作交给下一级
    output reg out_valid,           // 产生新instr置1, 收到out_ready 清0
    input out_ready, 

    output reg [31:0] out_pc,   

    input flush,
    input [31:0] pc_flush
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



    // 外部控制信号与返回外部的信号:
    reg [1:0] error_save;   // 储存器出现错误
    reg master_validation_error_save;    // 访问不合法地址
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
    always @( posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
            pc <= 32'h30000000;

            out_instr <= '0;
            out_valid <= 1'b0;  

            error_save <= 2'b00;
            master_validation_error_save <= 1'b0;
            flush_save <= 1'b0;
            pc_flush_save <= 32'b0;


        end else begin

            if(flush && ((state == AR) || (state == R && !bus_rvalid))) begin  // flush_save 是给正在访存, 不能及时冲刷准备的
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
                end
            end



            if(state == R && bus_rvalid) begin
                if(flush_save) begin
                    pc <= pc_flush_save;
                    flush_save <= 1'b0;
                end 
                else if(flush) begin
                    pc <= pc_flush;
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

            if(state == IDLE) begin  // 如果都到IDLE了, 不可能还存有flush_save, 直接监视flush即可
                if(flush) begin
                    pc <= pc_flush;
                end 
            end

        end
    end


// 状态 及 总线信号 赋值
    always_comb begin
        bus_arvalid = 1'b0;
        bus_araddr = pc;       
        bus_rready = 1'b0;

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
                bus_rready = 1'b1;   // 原来是等rvalid才给rready, 现在直接给, 断掉组合环
                if(bus_rvalid == 1'b1) begin 
                    next = IDLE;
                end
            end

            default: ;
        endcase
    end


endmodule
