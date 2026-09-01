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
    output [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid
);

    reg [31:0] pc;   // reg
    assign _pc = pc;

    reg [31:0] mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid;  // reg
    assign _mstatus = mstatus;
    assign _mepc = mepc;
    assign _mcause = mcause;
    assign _mtvec = mtvec;
    assign _mcycle = mcycle;
    assign _mcycleh = mcycleh;
    assign _mvendorid = mvendorid;
    assign _marchid = marchid;

    wire addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    wire lb, lh, lw, lbu, lhu, sb, sh, sw;
    wire beq, bne, blt, bge, bltu, bgeu;
    wire jal, jalr;
    wire lui, auipc;
    wire ebreak, ecall;
    wire mret, csrrw, csrrs, csrrc;

    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;

    wire [31:0] immI;
    wire [31:0] immU;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immJ;
    wire [31:0] immCSR;


    wire [31:0] wdata;
    wire [31:0] rdata1;
    wire [31:0] rdata2;
    wire wen;

    wire [31:0] pc_next_dft;

    assign pc_next_dft = pc + 32'd4;


    decode Decode(
        .instr(instr),

        .addi(addi),
        .slti(slti),
        .sltiu(sltiu),
        .xori(xori),
        .ori(ori),
        .andi(andi),
        .slli(slli),
        .srli(srli),
        .srai(srai),

        .add(add), 
        .sub(sub), 
        .sll(sll), 
        .slt(slt), 
        .sltu(sltu), 
        .xor_inst(xor_inst), 
        .srl(srl), 
        .sra(sra), 
        .or_inst(or_inst), 
        .and_inst(and_inst), 

        .lb(lb),
        .lh(lh),
        .lw(lw),
        .lbu(lbu),
        .lhu(lhu),
        .sb(sb),
        .sh(sh),
        .sw(sw),

        .beq(beq),
        .bne(bne),
        .blt(blt),
        .bge(bge),
        .bltu(bltu),
        .bgeu(bgeu),
        .jal(jal),
        .jalr(jalr),

        .lui(lui),
        .auipc(auipc),
        .ebreak(ebreak),
        .ecall(ecall),
        .mret(mret),
        .csrrw(csrrw),
        .csrrs(csrrs),
        .csrrc(csrrc),

        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .immI(immI),
        .immU(immU),
        .immS(immS),
        .immB(immB), 
        .immJ(immJ),
        .immCSR(immCSR)
    );

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



    assign wen = add | addi | sub | lui | auipc | 
                 and_inst | or_inst | xor_inst | andi | ori | xori | 
                 sll | srl | sra | slli | srli | srai | 
                 slt | sltu | slti | sltiu | 
                 jal | jalr | 
                 lb | lh | lw | lbu | lhu | 
                 csrrw | csrrs | csrrc; 


    wire [31:0] add1 = (auipc | jal | blt | bltu | bge | bgeu | bne | beq) ? pc : rdata1;

    wire [31:0] add2 = ({32{add}} & rdata2) |
                       ({32{sw | sb | sh}} & immS) |
                       ({32{auipc}} & immU) |
                       ({32{jal}} & immJ) |
                       ({32{jalr | lbu | lw | lhu | lh | lb | addi}} & immI) |
                       ({32{blt | bltu | bge | bgeu | bne | beq}} & immB);


    wire [31:0] add_rst = add1 + add2;


    // other arithm/logic
    wire[31:0] sub_rst = rdata1 - rdata2;
    wire[31:0] xor_rst = rdata1 ^ rdata2;
    wire[31:0] xori_rst = rdata1 ^ immI;
    wire[31:0] or_rst = rdata1 | rdata2;
    wire[31:0] ori_rst = rdata1 | immI;
    wire[31:0] and_rst = rdata1 & rdata2;
    wire[31:0] andi_rst = rdata1 & immI;

    wire[31:0] slt_rst  = {31'b0, ($signed(rdata1) < $signed(rdata2))};
    wire[31:0] sltu_rst = {31'b0, (rdata1 < rdata2)};
    wire[31:0] slti_rst = {31'b0, ($signed(rdata1) < $signed(immI))};
    wire[31:0] sltiu_rst= {31'b0, (rdata1 < immI)};

    wire[4:0]  shamt_r  = rdata2[4:0];
    wire[4:0]  shamt_i  = immI[4:0];
    wire[31:0] sll_rst  = rdata1 << shamt_r;
    wire[31:0] slli_rst = rdata1 << shamt_i;
    wire[31:0] srl_rst  = rdata1 >> shamt_r;
    wire[31:0] srli_rst = rdata1 >> shamt_i;
    wire[31:0] sra_rst  = $signed(rdata1) >>> shamt_r;
    wire[31:0] srai_rst = $signed(rdata1) >>> shamt_i;

    reg [31:0] csrw_rst;
    always @(*) begin
        case(immCSR) 
            32'h00000300: csrw_rst = mstatus;
            32'h00000305: csrw_rst = mtvec;
            32'h00000341: csrw_rst = mepc;
            32'h00000342: csrw_rst = mcause;
            32'h00000b00: csrw_rst = mcycle;
            32'h00000b80: csrw_rst = mcycleh;
            32'h00000f11: csrw_rst = mvendorid;
            32'h00000f12: csrw_rst = marchid;
            default: csrw_rst = 0;
        endcase
    end 

/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(rd) = (rd == 0) ? R(rd) : isa_csr_read(imm), isa_csr_write(imm, src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) | src1, rs1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) & ~(src1), rs1));

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);   // mstatus to go 

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0xb, s->pc)); 


    #define CSR_MSTATUS 0x300
    #define CSR_MTVEC   0x305
    #define CSR_MEPC    0x341
    #define CSR_MCAUSE  0x342
*/
    // wen 和 wdata 传到 registers 里面用来更新 GPR
    assign wdata = ({32{lui}} & immU) | 
                   ({32{add | addi | auipc}} & add_rst) | 
                   ({32{jalr | jal}} & pc_next_dft) |
                   ({32{lw}} & lw_rst) |
                   ({32{lbu}} & lbu_rst) |
                   ({32{lhu}} & lhu_rst) |
                   ({32{lb}} & lb_rst) |
                   ({32{lh}} & lh_rst) |
                   ({32{sub}} & sub_rst) |
                   ({32{xor_inst}} & xor_rst) |
                   ({32{xori}} & xori_rst) |
                   ({32{or_inst}} & or_rst) |
                   ({32{ori}} & ori_rst) |
                   ({32{and_inst}} & and_rst) |
                   ({32{andi}} & andi_rst) |
                   ({32{sll}} & sll_rst) |
                   ({32{slli}} & slli_rst) |
                   ({32{srl}} & srl_rst) |
                   ({32{srli}} & srli_rst) |
                   ({32{sra}} & sra_rst) |
                   ({32{srai}} & srai_rst) |
                   ({32{slt}} & slt_rst) |
                   ({32{slti}} & slti_rst) |
                   ({32{sltu}} & sltu_rst) |
                   ({32{sltiu}} & sltiu_rst) |
                   {{32{csrrw | csrrs | csrrc}} & csrw_rst};

    // read ram
    wire [31:0] read_ram_rst;

    wire [31:0] lw_rst;
    wire [31:0] lbu_rst;
    wire [31:0] lhu_rst;
    wire [31:0] lb_rst;
    wire [31:0] lh_rst;

    assign read_ram_rst = {lw | lbu | lhu | lb | lh} ? ram_read(add_rst, 4) : 0;

    assign lw_rst  = read_ram_rst;
    assign lbu_rst = {24'b0, read_ram_rst[7:0]};
    assign lhu_rst = {16'b0, read_ram_rst[15:0]};
    assign lb_rst  = {{25{read_ram_rst[7]}}, read_ram_rst[6:0]};
    assign lh_rst  = {{17{read_ram_rst[15]}}, read_ram_rst[14:0]};

    // 这个时序always块用来更新pc
    always @(posedge clk or posedge rst) begin
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
            else if(ecall) begin
                mepc <= pc;
                mcause <= 32'h0000000b;
                pc <= mtvec;
            end
            else if(mret) begin
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
                    // 32'h00000b00: mcycle <= rdata1;
                    // 32'h00000b80: mcycleh <= rdata1;
                endcase
            end
            else if (|{{5{csrrs}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= rdata1 | csrw_rst;
                    32'h00000305: mtvec <= rdata1 | csrw_rst;
                    32'h00000341: mepc <= rdata1 | csrw_rst;
                    32'h00000342: mcause <= rdata1 | csrw_rst;
                    // 32'h00000b00: mcycle <= rdata1 | csrw_rst;
                    // 32'h00000b80: mcycleh <= rdata1 | csrw_rst;
                endcase
            end
            else if (|{{5{csrrc}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= csrw_rst & (~rdata1);
                    32'h00000305: mtvec <= csrw_rst & (~rdata1);
                    32'h00000341: mepc <= csrw_rst & (~rdata1);
                    32'h00000342: mcause <= csrw_rst & (~rdata1);
                    // 32'h00000b00: mcycle <= rdata1 & (~csrw_rst);
                    // 32'h00000b80: mcycleh <= rdata1 & (~csrw_rst);
                endcase
            end
        end
    end


// ------------------------------------------------------------------------------------------------------------
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ------------------------------------------------------------------------------------------------------------

    // DPI-C interfaces(SV feature):

    // 在cpp中, 仿真的时候 会自动生成 Vtop_Dpi.h, 声明 extern int halt(int *endprog);
    export "DPI-C" task halt;
    task halt(output int endprog); 
        begin
            endprog = {{31{1'b0}}, ebreak};
        end
    endtask

    export "DPI-C" task check_ram_op;
    task check_ram_op(output int ram_op);
        begin
            if(lb | lh | lw | lbu | lhu) begin
                ram_op = 32'd1;
            end
            else if(sb | sh | sw) begin
                ram_op = 32'd2;
            end
            else begin
                ram_op = 0;
            end
        end
    endtask


    import "DPI-C" function int unsigned ram_read(
        input int unsigned addr,
        input int amount
    );

    import "DPI-C" function void ram_write(
        input int unsigned addr, 
        input int unsigned data, 
        input int amount
    );

endmodule
/* verilator lint_off UNUSEDSIGNAL */


