/* verilator lint_off UNUSEDSIGNAL */

/*
The CSR register address space in RISC-V is 12 bits, i.e., 4096 registers, but RISC-V has only defined over 300 CSRs; 
if we exclude performance counters and PMP (Physical Memory Protection) related CSRs, there are only 78 left; 
if we further only count M-mode CSRs, there are only 28; 
if we only consider the few CSRs necessary for running RT-Thread that were implemented in NEMU, there are less than 5 left. 
Therefore, there is no need for us to instantiate hundreds or even 4096 CSRs. 
Although this would only take up some memory for NEMU, it would result in significant area overhead for NPC. 
Specifically, we only need to instantiate the CSRs we need, then read and write them according to their addresses.


The CSRs that need to be implemented currently do not have any special side effects. Although the RISC-V manual describes various functions for mstatus, we don't need to use them at present. We just need to initialize them correctly to pass DiffTest.
Only a few CSR instructions will be used currently, but unlike general instructions, CSR instructions atomically read and write the same CSR register. Additionally, we can ignore the read and write attributes of each field in the CSRs for now (if you haven't heard of them, you need to carefully RTFM), including WPRI, WLRL, and WARL, which define the behavior when illegal values are written to CSR fields. The programs we are running currently do not depend on these behaviors, so we can temporarily skip implementing these read and write attributes.
Both ecall and mret will cause NPC to jump, which can be easily implemented by reusing the data path of the next address logic.
Currently, we only need to implement the ecall exception, which is a trap exception that NPC must respond to unconditionally. We just need to set mcause and mepc simultaneously, then jump to the exception entry stored in mtvec.
*/

/*
implement 5 CSRs     mstatus  mepc  mtvec  mcause mcycle

*/

/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(rd) = (rd == 0) ? R(rd) : isa_csr_read(imm), isa_csr_write(imm, src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) | src1, rs1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) & ~(src1), rs1));

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);   // mstatus to go 

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0xb, s->pc)); 
*/


/*

实现后, 尝试通过内联汇编多次读出mcycle寄存器, 检查其值是否自动递增. 在内联汇编中可以使用伪指令csrr, 其对应的真实指令即为csrrs.

为了标识不同同学的NPC, 我们可以利用CSR中的标识寄存器. 具体地, RISC-V中定义了mvendorid和marchid这两个CSR, 我们可以利用它们存放一些标识信息. 
之后, 程序在运行时刻可以通过CSR指令将这些标识信息读到通用寄存器中, 并进一步打印这些信息.



mvendorid - 从中读出ysyx的ASCII码, 即0x79737978
marchid - 从中读出学号数字部分的十进制表示, 假设你的学号为ysyx_22068888, 若将读出的信息解释为整数, 则应为22068888, 即0x150be98

实现后, 可在TRM进入main()函数前, 通过内联汇编读出上述两个CSR的值, 然后通过printf()输出它们.
*/

/*
写verilog / SV之前, 要画好硬件框图: 组合逻辑块  寄存器  IP核  连线

硬件描述部分: 变量定义(wire reg logic)   连线   时序逻辑块  组合逻辑和组合逻辑块

UVM部分

// ⭐  打⭐标注的都是cpu的 流控制 信号, 流控制信号固定使用寄存器, 用时序逻辑赋值
*/

/*


*/
module top(
    input clk,
    input rst,
    output [32*32-1:0] dbg_reg,
    output [31:0] _pc,
    output [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid  
);
    `include "dpi_tasks.v"

    reg [31:0] pc;   // reg
    assign _pc = pc;

    reg [31:0] mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid;
    assign {_mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid} = {mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid};

    
    // from decode
    logic addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    logic add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    logic lb, lh, lw, lbu, lhu, sb, sh, sw;
    logic beq, bne, blt, bge, bltu, bgeu;
    logic jal, jalr, lui, auipc;
    logic ebreak, ecall, mret, csrrw, csrrs, csrrc;

    logic [4:0] rd, rs1, rs2;
    logic [31:0] immI, immU, immS, immB, immJ, immCSR;

    // from alu
    logic [31:0] add_rst;     
    logic [31:0] csrw_rst;    
    logic [31:0] wdata, rdata1, rdata2;
    logic wen;

    logic [31:0] pc_next_dft;
    assign pc_next_dft = pc + 32'd4;


    decode Decode(.*);

    logic __GPR_wvalid;  // ⭐

    dbg_register #(5, 32) GPR (
        .clk(clk),
        .wen(wen),
        .raddr1(rs1),
        .raddr2(rs2),
        .waddr(rd),
        .wdata(wdata),
        .rdata1(rdata1),
        .rdata2(rdata2),
        .dbg_regs(dbg_reg),
        .__GPR_wvalid(__GPR_wvalid)
    );

    ALU alu_inst (.*);

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/


    AXI4_Lite bus_ifu ();
    AXI4_Lite bus_lsu ();

    logic [31:0] instr;


    logic        __ifu_instr_valid;
    logic [1:0]  __ifu_error;
    logic        __ifu_master_validation_error;
    logic        __pc_is_updated;    // ⭐  // 和pc被update的上升沿的下一个周期同一个周期, 将此拉高一个周期

    AXI_IFU ifu (
        .bus    (bus_ifu),              // AXI4_Lite.master 接口
        .clk    (clk),
        .reset  (rst),
        .__pc_is_updated   (__pc_is_updated),   
        .pc                (pc),
        .rdata             (instr),
        .__instr_valid     (__ifu_instr_valid),   // @@-->
        .__error           (__ifu_error),
        .__master_validation_error (__ifu_master_validation_error)
    );


    logic        __lsu_error;
    logic        __lsu_read_complete;   // cpu读到这个, 需要立刻拿走数据启动GPR操作
    logic        __lsu_write_complete;   // cpu读到这个, 需要立刻启动更新pc操作
    logic [31:0] lsu_rdata;

    logic __addr_ready;  // ⭐  // 这两个信号只持续一个周期 (在__ifu_instr_valid出来的瞬时拉高一个周期)
    logic __data_ready;  // ⭐


    logic __sw = sw;
    logic __sh = sh;
    logic __sb = sb;
    logic __read = lb | lh | lw | lbu | lhu;
    logic __write = sb | sh | sw;
__
    AXI_LSU lsu (
        .bus    (bus_lsu),              // AXI4_Lite.master 接口
        .clk    (clk),
        .reset  (rst),
        .__read              (__read),
        .__write             (__write),
        .__sw                (__sw),
        .__sh                (__sh),
        .__sb                (__sb),
        .__addr_ready        (__addr_ready),   
        .__data_ready        (__data_ready),   
        .addr                (add_rst),
        .wdata               (rdata2),
        .rdata               (lsu_rdata),
        .__error             (__lsu_error),
        .__read_complete     (__lsu_read_complete),   // @@-->
        .__write_complete    (__lsu_write_complete)   // @@-->
    );

    AXI_XBAR xbar (
        .clk(clk),
        .reset(rst),
        .m0(bus_ifu),  
        .m1(bus_lsu),
        .s0(bus_uart),  
        .s1(bus_sram)
    );

    logic [31:0] lw_rst, lbu_rst, lhu_rst, lb_rst, lh_rst;

    lw_rst  = lsu_rdata;
    lbu_rst = {24'b0, lsu_rdata[7:0]};
    lhu_rst = {16'b0, lsu_rdata[15:0]};
    lb_rst  = {{25{lsu_rdata[7]}}, lsu_rdata[6:0]};
    lh_rst  = {{17{lsu_rdata[15]}}, lsu_rdata[14:0]};




    typedef enum [2:0]{ 
        FETCH, IO, UDGPR, UDPC
    } state_t;
    state_t state, next;


    always_comb begin : Stat_Machine
        next = state;
        case(state)
            FETCH: begin
                if(__ifu_instr_valid) begin
                    next = IO;
                end
            end
            IO: begin
                if(__lsu_read_complete) begin
                    next = UDGPR;
                end
                else if(__lsu_write_complete) begin
                    next = UDPC;
                end
            end
            GPR: begin    // 固定一周期
                next = UDPC;
            end
            UDPC: begin   // 固定一周期
                next = FETCH;
            end
        endcase 
    end




    // 主状态机时序逻辑
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 32'h80000000;
            mstatus <= 32'h00001800;   
            mcause <= 0;
            mepc <= 0;
            mtvec <= 0;
            mcycle <= 0;
            mcycleh <= 0;
            mvendorid <= 32'h79737978;
            marchid <= 32'h18d6687;   // id: ysyx_26040135

            __pc_is_updated <= 1'b0;
            __GPR_wvalid <= 1'b0;
            __addr_ready <= 1'b0;
            __data_ready <= 1'b0;

            state <= FETCH;
        end
        else begin
            if(state == FETCH) begin
                __pc_is_update <= 1'b0;
                if(__ifu_instr_valid) begin
                    __addr_ready <= 1'b1;
                    __data_ready <= 1'b1;
                end
            end

            if(state == IO) begin
                __addr_ready <= 1'b0;
                __data_ready <= 1'b0;
                if(__lsu_read_complete) begin
                    __GPR_wvalid <= 1'b1;
                end
            end

            if(state == UDGPR) begin
                __GPR_wvalid <= 1'b0;
            end


            if(state == UDPC) begin
                __pc_is_update <= 1'b1;
                {mcycleh, mcycle} <= {mcycleh, mcycle} + 64'd1;
                // pc update
                if(jalr) begin
                    pc <= add_rst & ~32'h1;
                end
                else if(jal) begin
                    pc <= add_rst;
                end
                else if(blt) begin
                    pc <= ($signed(rdata1) < $signed(rdata2)) ? add_rst : pc_next_dft;
                end
                else if(beq) begin
                    pc <= (rdata1 == rdata2) ? add_rst : pc_next_dft;
                end
                else if(bne) begin
                    pc <= (rdata1 != rdata2) ? add_rst : pc_next_dft;
                end
                else if(bge) begin
                    pc <= ($signed(rdata1) >= $signed(rdata2)) ? add_rst : pc_next_dft;
                end
                else if(bltu) begin
                    pc <= (rdata1 < rdata2) ? add_rst : pc_next_dft;
                end
                else if(bgeu) begin
                    pc <= (rdata1 >= rdata2) ? add_rst : pc_next_dft;
                end

                // system
                else if(ecall) begin    //
                    mepc <= pc;
                    mcause <= 32'h0000000b;
                    pc <= mtvec;
                end
                else if(mret) begin     //
                    pc <= mepc;
                end
                else begin
                    pc <= pc_next_dft;
                end
            end
        end
    end
    
    // 仅用来更新 CSR
    always_ff @(posedge clk or posedge rst) begin
        if((!rst) && state == UDPC) begin
            // privilege
            if(csrrw) begin
                case(immCSR)  // case CSR addr
                    32'h00000300: mstatus <= rdata1;
                    32'h00000305: mtvec <= rdata1;
                    32'h00000341: mepc <= rdata1;
                    32'h00000342: mcause <= rdata1;
                endcase
            end
            else if (|{{5{csrrs}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= rdata1 | csrw_rst;
                    32'h00000305: mtvec <= rdata1 | csrw_rst;
                    32'h00000341: mepc <= rdata1 | csrw_rst;
                    32'h00000342: mcause <= rdata1 | csrw_rst;
                endcase
            end
            else if (|{{5{csrrc}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= csrw_rst & (~rdata1);
                    32'h00000305: mtvec <= csrw_rst & (~rdata1);
                    32'h00000341: mepc <= csrw_rst & (~rdata1);
                    32'h00000342: mcause <= csrw_rst & (~rdata1);
                endcase
            end
        end
    end




endmodule
/* verilator lint_off UNUSEDSIGNAL */




