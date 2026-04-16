/* verilator lint_off UNUSEDSIGNAL */
module top(
    input clk,
    input rst,
    input [31:0] instr,
    output [32*32-1:0] dbg_reg,
    output [31:0] _pc
);

    reg [31:0] pc;
    assign _pc = pc;

    wire addi;
    wire add;
    wire jalr;
    wire lui;
    wire lw;
    wire lbu;
    wire sw;
    wire sb;
    wire ebreak;
    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;

    wire [31:0] immI;
    wire [31:0] immU;
    wire [31:0] immS;


    wire [31:0] wdata;
    wire [31:0] rdata1;
    wire [31:0] rdata2;
    wire wen;

    wire [31:0] pc_next_dft;

    assign pc_next_dft = pc + 32'd4;

    decode Decode(
        .instr(instr),
        .addi(addi),
        .add(add),
        .jalr(jalr),
        .lui(lui),
        .lw(lw),
        .lbu(lbu),
        .sw(sw),
        .sb(sb),
        .ebreak(ebreak),

        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .immI(immI),
        .immU(immU),
        .immS(immS)
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

/*
INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2); // @
INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->snpc, s->dnpc = (src1 + imm) & ~1);  // jump and link reg
INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm); // @
INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));  // @
INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2)); 
INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2)); 

INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0, NEMU_END
*/

// complete : add addi jalr lui

    assign wen = add | addi | jalr | lui | lw | lbu;
    wire [31:0] add1 = rdata1;
    wire [31:0] add2 = add ? rdata2 : 
                       (sw | sb) ? immS : immI;

    wire [31:0] add_rst = add1 + add2;

    wire [31:0] lw_rst;
    assign lw_rst = ram_read(add_rst, 4);
    wire [31:0] lbu_rst;
    assign lbu_rst = ram_read(add_rst, 1);

    assign wdata = ({32{lui}} & immU) |
                   ({32{add}} & add_rst) |
                   ({32{addi}} & add_rst) |
                   ({32{jalr}} & pc_next_dft) |
                   ({32{lw}} & lw_rst) |
                   ({32{lbu}} & lbu_rst);


    // update
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 32'h80000000;
        end
        else begin
            pc <= jalr ? (add_rst & ~32'h1) : pc_next_dft;  // update
            if(sw) begin
                ram_write(add_rst, rdata2, 4);
            end
            else if(sb) begin
                ram_write(add_rst, rdata2, 1);
            end
        end
    end



endmodule
/* verilator lint_off UNUSEDSIGNAL */
