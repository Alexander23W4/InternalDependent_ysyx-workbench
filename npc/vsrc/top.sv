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

*/

/*


*/
module top(
    input clk,
    input rst,
    input [31:0] instr,
    output [32*32-1:0] dbg_reg,
    output [31:0] _pc,
    output [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid  // 
);
    `include "dpi_tasks.v"

    reg [31:0] pc;   // reg
    assign _pc = pc;

    reg [31:0] mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid;
    assign {_mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid} = {mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid};

    

    wire addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    wire lb, lh, lw, lbu, lhu, sb, sh, sw;
    wire beq, bne, blt, bge, bltu, bgeu;
    wire jal, jalr, lui, auipc;
    wire ebreak, ecall, mret, csrrw, csrrs, csrrc;

    wire [4:0] rd, rs1, rs2;
    wire [31:0] immI, immU, immS, immB, immJ, immCSR;

    wire [31:0] wdata, rdata1, rdata2;
    wire wen;

    wire [31:0] pc_next_dft;
    assign pc_next_dft = pc + 32'd4;


    decode Decode(.*);

    dbg_register #(5, 32) GPR (
        .clk(clk),
        .wen(wen),
        .raddr1(rs1),
        .raddr2(rs2),
        .waddr(rd),
        .wdata(wdata),
        .rdata1(rdata1),
        .rdata2(rdata2),
        .dbg_regs(dbg_reg)
    );

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/


    AXI4_Lite bus_ifu ();
    AXI4_Lite bus_lsu ();

    ALU alu_inst (.*);

    wire        ifu_instr_valid;
    wire [1:0]  ifu_error;
    wire        ifu_master_validation_error;
    wire [31:0] ifu_rdata;

    AXI_IFU ifu (
        .bus    (bus_ifu),              // AXI4_Lite.master 接口
        .clk    (clk),
        .reset  (rst),
        .__pc_is_updated   (pc_is_updated),
        .pc                (pc),
        .rdata             (ifu_rdata),
        .__instr_valid     (ifu_instr_valid),
        .__error           (ifu_error),
        .__master_validation_error (ifu_master_validation_error)
    );


    wire        lsu_error;
    wire        lsu_read_complete;
    wire        lsu_write_complete;
    wire [31:0] lsu_rdata;

    AXI_LSU lsu (
        .bus    (bus_lsu),              // AXI4_Lite.master 接口
        .clk    (clk),
        .reset  (rst),
        .__read              (lsu_read),
        .__write             (lsu_write),
        .__sw                (lsu_sw),
        .__sh                (lsu_sh),
        .__sb                (lsu_sb),
        .__decode_addr_ready (lsu_decode_addr_ready),
        .__decode_data_ready (lsu_decode_data_ready),
        .addr                (lsu_addr),
        .wdata               (lsu_wdata),
        .rdata               (lsu_rdata),
        .__error             (lsu_error),
        .__read_complete     (lsu_read_complete),
        .__write_complete    (lsu_write_complete)
    );



    // 用于总线交互的控制信号的状态机
    always_ff @( posedge clk or posedge rst ) begin : blockName
        
    end




    // read ram

    reg [31:0] read_ram_rst;
    reg [31:0] lw_rst, lbu_rst, lhu_rst, lb_rst, lh_rst;

    wire [31:0] add_rst;     
    wire [31:0] csrw_rst;    

    always @(*) begin
        // 默认值
        read_ram_rst = 0;
        lw_rst  = 0;
        lbu_rst = 0;
        lhu_rst = 0;
        lb_rst  = 0;
        lh_rst  = 0;

        // 只有在加载指令时才调用 ram_read
        if (lw | lb | lbu | lh | lhu) begin
            read_ram_rst = ram_read(add_rst, 4);
            case (1'b1)
                lw:  lw_rst  = read_ram_rst;
                lbu: lbu_rst = {24'b0, read_ram_rst[7:0]};
                lhu: lhu_rst = {16'b0, read_ram_rst[15:0]};
                lb:  lb_rst  = {{25{read_ram_rst[7]}}, read_ram_rst[6:0]};
                lh:  lh_rst  = {{17{read_ram_rst[15]}}, read_ram_rst[14:0]};
            endcase
        end
    end

    // 这个时序always块用来更新pc
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 32'h80000000;
            mstatus <= 32'h00001800;   //
            mcause <= 0;
            mepc <= 0;
            mtvec <= 0;
            mcycle <= 0;
            mcycleh <= 0;
            mvendorid <= 32'h79737978;
            marchid <= 32'h18d6687;   // id: ysyx_26040135
        end
        else begin
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
    
    // 这个时序always块用来更新 ram 和 privileged_reg
    always @(posedge clk or posedge rst) begin
        if(!rst) begin
            // write ram
            if(sw) begin
                ram_write(add_rst, rdata2, 4);
            end
            else if(sb) begin
                ram_write(add_rst, rdata2, 1);
            end
            else if(sh) begin
                ram_write(add_rst, rdata2, 2);
            end

            // privilege
            else if(csrrw) begin
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



