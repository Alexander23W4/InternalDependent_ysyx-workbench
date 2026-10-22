/*
    新pc的判断要加在这里, 如果有跳转则要推翻分支预测, 洗刷流水线
*/

module ysyx_26040135_EXU (

    input clock,
    input reset,

    input  [31:0] inaccessible_gprs,

    input  [31:0] pc,   //

// 这里直接从GPR取数据, 要把这个存下来再给in_ready, 给in_ready之前IDU输出给GPR的rs1和rs2是不会变化的
    input  [31:0] rdata1, 
    input  [31:0] rdata2,  ///

// ⭐ 立即数已经在IDU里按指令类型选好了, 这里只收一份
    input  [31:0] imm,



    input add, addi, sub, lui, auipc,
    input and_inst, or_inst, xor_inst, andi, ori, xori,
    input sll, srl, sra, slli, srli, srai,
    input slt, sltu, slti, sltiu,
    input jal, jalr,
    input lb, lh, lw, lbu, lhu,
    input sb, sh, sw,
    input beq, bne, blt, bge, bltu, bgeu,
    input csrrw, csrrs, csrrc,


    input [31:0] mstatus, mtvec, mepc, mcause,
    input [31:0] mcycle, mcycleh, mvendorid, marchid,

    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,


    input in_valid,
    output reg in_ready,

    output reg out_valid_lsu, out_valid_wbu,
    input out_ready_lsu, out_ready_wbu,

    output reg [31:0] add_rst,  

    output reg io;
    output reg [1:0] io_type,  //
    output reg read_is_u, //
    output reg [4:0] rd_out,  ///
    output reg [31:0] lsu_wdata,
    output reg [31:0] ic_wb_wdata  // incomplete WB data, lack of l.._rst

    output reg [4:0] rs1_out,
    output reg [4:0] rs2_out,

    output reg is_exu_rd,
    output reg is_lsu_rd,

    output reg [4:0] rd_exu
);
    // ==== ID/EX 流水段寄存器(本级的输入缓存) ====
    //      讲义: in.bits 由下游的 RegEnable 保存, 所以寄存器在本级
    reg [31:0] pc_save;
    reg [31:0] imm_save;

    reg add_save, addi_save, sub_save, lui_save, auipc_save;
    reg and_inst_save, or_inst_save, xor_inst_save, andi_save, ori_save, xori_save;
    reg sll_save, srl_save, sra_save, slli_save, srli_save, srai_save;
    reg slt_save, sltu_save, slti_save, sltiu_save;
    reg jal_save, jalr_save;
    reg lb_save, lh_save, lw_save, lbu_save, lhu_save;
    reg sb_save, sh_save, sw_save;
    reg beq_save, bne_save, blt_save, bge_save, bltu_save, bgeu_save;
    reg csrrw_save, csrrs_save, csrrc_save;

    reg [4:0] rd_save;
    reg [31:0] rs1_save;
    reg [31:0] rs2_save;


    wire [4:0] shamt_r = rdata2[4:0];
    wire [4:0] shamt_i = imm_save[4:0];
    wire [31:0] add1 = (auipc_save | jal_save | blt_save | bltu_save | bge_save | bgeu_save | bne_save | beq_save) ? pc_save : rdata1;
    wire [31:0] add2 = add_save ? rdata2 : imm_save;  
    wire [31:0] add_rst_w = add1 + add2;
    wire [31:0] sub_rst  = rdata1 - rdata2;
    wire [31:0] xor_rst  = rdata1 ^ rdata2;
    wire [31:0] xori_rst = rdata1 ^ imm_save;
    wire [31:0] or_rst   = rdata1 | rdata2;
    wire [31:0] ori_rst  = rdata1 | imm_save;
    wire [31:0] and_rst  = rdata1 & rdata2;
    wire [31:0] andi_rst = rdata1 & imm_save;

    wire [31:0] slt_rst   = {31'b0, ($signed(rdata1) < $signed(rdata2))};
    wire [31:0] sltu_rst  = {31'b0, (rdata1 < rdata2)};
    wire [31:0] slti_rst  = {31'b0, ($signed(rdata1) < $signed(imm_save))};
    wire [31:0] sltiu_rst = {31'b0, (rdata1 < imm_save)};


    wire [31:0] sll_rst   = rdata1 << shamt_r;
    wire [31:0] slli_rst  = rdata1 << shamt_i;
    wire [31:0] srl_rst   = rdata1 >> shamt_r;
    wire [31:0] srli_rst  = rdata1 >> shamt_i;
    wire [31:0] sra_rst   = $signed(rdata1) >>> shamt_r;
    wire [31:0] srai_rst  = $signed(rdata1) >>> shamt_i;


    // 这些是存输入之前(输入握手之前)的判断信号, 用原始信号, 不用save信号, 而后续的所有信号和输出信号都要用save信号
    wire read = lw | lh | lb | lbu | lhu;
    wire write = sw | sh | sb;
    wire is_ls = read | write;
    wire is_branch = beq | bne | blt | bge | bltu | bgeu;

    wire gpr_read_invalid = inaccessible_gprs[rs1] | inaccessible_gprs[rs2];



// ⭐ CSR 直接从CSR模块的组合输出里选, 不再往流水线里搬 8 个影子寄存器
    reg [31:0] csrw_rst;
    always @(*) begin
        case(imm_save)
            32'h00000300: csrw_rst = mstatus;
            32'h00000305: csrw_rst = mtvec;
            32'h00000341: csrw_rst = mepc;
            32'h00000342: csrw_rst = mcause;
            32'h00000b00: csrw_rst = mcycle;
            32'h00000b80: csrw_rst = mcycleh;
            32'h00000f11: csrw_rst = mvendorid;
            32'h00000f12: csrw_rst = marchid;
            default: csrw_rst = 32'b0;
        endcase
    end

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            out_valid_lsu <= 1'b0;
            out_valid_wbu <= 1'b0;
            in_ready <= 1'b1;
            rd_exu <= 0;
        end else begin
            if(in_valid && in_ready) begin
                in_ready <= 1'b0;

                if(is_ls && !gpr_read_invalid) begin
                    out_valid_lsu <= 1'b1; 
                end
                else if (!is_branch && !gpr_read_invalid) begin
                    out_valid_wbu <= 1'b1;
                end

                pc_save    <= pc;

                imm_save   <= imm;

                rd_save    <= rd;
                rs1_save   <= rs1;
                rs2_save   <= rs2;

                add_save      <= add;
                addi_save     <= addi;
                sub_save      <= sub;
                lui_save      <= lui;
                auipc_save    <= auipc;
                and_inst_save <= and_inst;
                or_inst_save  <= or_inst;
                xor_inst_save <= xor_inst;
                andi_save     <= andi;
                ori_save      <= ori;
                xori_save     <= xori;
                sll_save      <= sll;
                srl_save      <= srl;
                sra_save      <= sra;
                slli_save     <= slli;
                srli_save     <= srli;
                srai_save     <= srai;
                slt_save      <= slt;
                sltu_save     <= sltu;
                slti_save     <= slti;
                sltiu_save    <= sltiu;
                jal_save      <= jal;
                jalr_save     <= jalr;
                lb_save       <= lb;
                lh_save       <= lh;
                lw_save       <= lw;
                lbu_save      <= lbu;
                lhu_save      <= lhu;
                sb_save       <= sb;
                sh_save       <= sh;
                sw_save       <= sw;
                beq_save      <= beq;
                bne_save      <= bne;
                blt_save      <= blt;
                bge_save      <= bge;
                bltu_save     <= bltu;
                bgeu_save     <= bgeu;
                csrrw_save    <= csrrw;
                csrrs_save    <= csrrs;
                csrrc_save    <= csrrc;

                rd_exu <= rd;
            end

            if(!in_ready && rd_exu != 0) begin
                rd_exu <= 0;
            end

            if(out_ready_lsu && out_valid_lsu) begin
                out_valid_lsu <= 1'b0;
                in_ready <= 1'b1;
            end
            if(out_ready_wbu && out_valid_wbu) begin
                out_valid_wbu <= 1'b0;
                in_ready <= 1'b1;
            end
            
        end
    end

    always @(*) begin
        
        case(1'b1)
            lw_save | sw_save: io_type = 2'b10;
            lhu_save | lh_save | sh_save: io_type = 2'b01;
            lbu_save | lb_save | sb_save: io_type = 2'b00;
            default: io_type = 2'b11;
        endcase

        rs1_out = rs1_save;
        rs2_out = rs2_save;    

        is_lsu_rd = lw_save | lh_save | lb_save | lbu_save | lhu_save;
        is_exu_rd = ~(lw_save | lh_save | lb_save | lbu_save | lhu_save | sw_save | sb_save | sh_save) & 
                    ~(beq_save | bne_save | blt_save | bge_save | bltu_save | bgeu_save);

        io = read ? 1'b0 : 1'b1;

        read_is_u = (lhu_save | lbu_save) ? 1'b1 : 1'b0;
        rd_out = rd_save;

        lsu_wdata = rdata2;

        ic_wb_wdata = ({32{lui_save}} & imm_save) |
                ({32{add_save | addi_save | auipc_save}} & add_rst_w) |
                ({32{jalr_save | jal_save}} & (pc_save + 32'd4)) |
                ({32{sub_save}} & sub_rst) |
                ({32{xor_inst_save}} & xor_rst) |
                ({32{xori_save}} & xori_rst) |
                ({32{or_inst_save}} & or_rst) |
                ({32{ori_save}} & ori_rst) |
                ({32{and_inst_save}} & and_rst) |
                ({32{andi_save}} & andi_rst) |
                ({32{sll_save}} & sll_rst) |
                ({32{slli_save}} & slli_rst) |
                ({32{srl_save}} & srl_rst) |
                ({32{srli_save}} & srli_rst) |
                ({32{sra_save}} & sra_rst) |
                ({32{srai_save}} & srai_rst) |
                ({32{slt_save}} & slt_rst) |
                ({32{slti_save}} & slti_rst) |
                ({32{sltu_save}} & sltu_rst) |
                ({32{sltiu_save}} & sltiu_rst) |
                ({32{csrrw_save | csrrs_save | csrrc_save}} & csrw_rst);
    end


endmodule



