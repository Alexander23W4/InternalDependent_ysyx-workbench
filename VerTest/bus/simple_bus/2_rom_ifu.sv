
/*
    实现 SimpleBus 的 访存总线逻辑

           --\ /----------\ /----------\ /----------\ /----------\ /--
 ifu_raddr    X 0x80000000 X     (1)    X 0x80000004 X            X
           --/ \----------/ \----------/ \----------/ \----------/ \--
           --\ /----------\ /----------\ /----------\ /----------\ /--
 ifu_rdata    X            X 0x00000413 X     (2)    X 0x80051137 X
           --/ \----------/ \----------/ \----------/ \----------/ \--
                    idle        wait
    存储器延迟一个周期后才返回读出的指令

    在idle状态下, NPC不应该将ifu_rdata视为有效的指令来执行, 而是应该不执行任何指令.

    在idle状态下, 需要将ifu_raddr设置为pc, 并跳转到wait状态
    在wait状态下, 将ifu_rdata作为有效指令继续执行, 并跳转到idle状态
*/

// 此为simple_bus 的  ROM-IFU interface
interface simple_bus;

    logic [31:0] ifu_rdata;
    logic [31:0] ifu_raddr;

    modport ifu(
        output [31:0] ifu_raddr,
        input  [31:0] ifu_rdata,
    );

endinterface

module ifu(
    input clk,
    input rst,
    simple_bus.ifu simple_bus
);
    logic [31:0] pc;
    logic [31:0] instr_storage;

    logic update_pc;

    typedef enum  { 
        IDLE,       // 传pc, 等存储器处理   不处理instr
        ARRANGE     // 拿到instr, 处理instr
    } state_t;

    state_t state, next;

    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            instr_storage <= `0;
            state <= IDLE;
            update_pc <= 1'b0;
            pc <= 32'h80000000;
            //
        end
        else begin
            state <= next;
            if(state == ARRANGE) begin
                instr_storage <= simple_bus.rdata;
                update_pc <= 1'b1;
            end
            else begin
                update_pc <= 1'b0;
            end
        end
        
    end

    always_comb begin
        // default:
        simple_bus.ifu_raddr = pc;   // 有了update_pc, 在IDLE的时候, 有新pc; ARRANGE的时候, 不收取新pc
        next = state;

        case(state)
            IDLE: begin
                next = ARRANGE;
            end
            ARRANGE: begin
                next = IDLE;
                simple_bus.ifu_raddr = simple_bus.ifu_raddr;
            end
        endcase
    end

endmodule

