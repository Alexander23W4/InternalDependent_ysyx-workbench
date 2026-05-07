/* verilator lint_off UNUSEDSIGNAL */
module top(
    input clk,
    input rst,
    input [31:0] instr,
    output [32*32-1:0] dbg_reg,
    output [31:0] _pc
);
    // DPI-C interfaces:
    export "DPI-C" task halt;
    task halt(output int endprog); 
        begin
            endprog = {{31{1'b0}}, ebreak};
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


// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------

    reg [31:0] pc;
    assign _pc = pc;

    wire addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    wire lb, lh, lw, lbu, lhu, sb, sh, sw;
    wire beq, bne, blt, bge, bltu, bgeu;
    wire jal, jalr;
    wire lui, auipc;
    wire ebreak;

    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;

    wire [31:0] immI;
    wire [31:0] immU;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immJ;


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

        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .immI(immI),
        .immU(immU),
        .immS(immS),
        .immB(immB), 
        .immJ(immJ)
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
                 lb | lh | lw | lbu | lhu;


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
                   ({32{sltiu}} & sltiu_rst);   

    // read ram
    wire [31:0] lw_rst;
    wire [31:0] lbu_rst;
    wire [31:0] lhu_rst;
    wire [31:0] lb_rst;
    wire [31:0] lh_rst;

    assign lw_rst = ram_read(add_rst, 4);
    assign lbu_rst = ram_read(add_rst, 1);
    assign lhu_rst = ram_read(add_rst, 2);
    assign lb_rst = {{25{lbu_rst[7]}}, lbu_rst[6:0]};
    assign lh_rst = {{17{lhu_rst[15]}}, lhu_rst[14:0]};

    
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 32'h80000000;
        end
        else begin
            // pc update
            if(jalr) begin
                pc <= add_rst & ~32'h1;
            end
            else if(jal) begin
                pc <= add_rst;
            end
            else if (blt) begin
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
            else begin
                pc <= pc_next_dft;
            end

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
        end
    end

endmodule
/* verilator lint_off UNUSEDSIGNAL */
