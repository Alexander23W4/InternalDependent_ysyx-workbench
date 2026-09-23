module ysyx_26040135_EXU (

    input clock,
    input reset,

    input  [31:0] pc,   //

    input  [31:0] rdata1, 
    input  [31:0] rdata2,  ///

    input  [31:0] immI,  
    input  [31:0] immU,
    input  [31:0] immS,
    input  [31:0] immB,
    input  [31:0] immJ,
    input  [31:0] immCSR,


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


    input in_valid,
    output in_ready,

    output reg out_valid,
    input out_ready,


    output reg wen,  ///

    output reg [31:0] add_rst,  

    output reg read,
    output reg write,
    output reg [1:0] io_type,  ///
    output reg read_is_u, ///
    output reg [4:0] rd_out,  ///
    output reg [31:0] lsu_wdata,
    output reg [31:0] ic_wb_wdata  // incomplete WB data, lack of l.._rst

);
    // ==== 输入缓存 ====
    reg [31:0] pc_save;

    reg [31:0] rdata1_save, rdata2_save;

    reg [31:0] immI_save, immU_save, immS_save, immB_save, immJ_save, immCSR_save;

    reg add_save, addi_save, sub_save, lui_save, auipc_save;
    reg and_inst_save, or_inst_save, xor_inst_save, andi_save, ori_save, xori_save;
    reg sll_save, srl_save, sra_save, slli_save, srli_save, srai_save;
    reg slt_save, sltu_save, slti_save, sltiu_save;
    reg jal_save, jalr_save;
    reg lb_save, lh_save, lw_save, lbu_save, lhu_save;
    reg sb_save, sh_save, sw_save;
    reg beq_save, bne_save, blt_save, bge_save, bltu_save, bgeu_save;
    reg csrrw_save, csrrs_save, csrrc_save;

    reg [31:0] mstatus_save, mtvec_save, mepc_save, mcause_save;
    reg [31:0] mcycle_save, mcycleh_save, mvendorid_save, marchid_save;
    reg [4:0] rd_save;



    reg in_valid_r;
    wire can_execute = in_valid_r && (!out_valid || out_ready);
    assign in_ready = !in_valid_r; 

    wire [4:0] shamt_r = rdata2_save[4:0];
    wire [4:0] shamt_i = immI_save[4:0];
    wire [31:0] add1 = (auipc_save | jal_save | blt_save | bltu_save | bge_save | bgeu_save | bne_save | beq_save) ? pc_save : rdata1_save;
    wire [31:0] add2 = ({32{add_save}} & rdata2_save) |
                       ({32{sw_save | sb_save | sh_save}} & immS_save) |
                       ({32{auipc_save}} & immU_save) |
                       ({32{jal_save}} & immJ_save) |
                       ({32{jalr_save | lbu_save | lw_save | lhu_save | lh_save | lb_save | addi_save}} & immI_save) |
                       ({32{blt_save | bltu_save | bge_save | bgeu_save | bne_save | beq_save}} & immB_save);
    wire [31:0] sub_rst  = rdata1_save - rdata2_save;
    wire [31:0] xor_rst  = rdata1_save ^ rdata2_save;
    wire [31:0] xori_rst = rdata1_save ^ immI_save;
    wire [31:0] or_rst   = rdata1_save | rdata2_save;
    wire [31:0] ori_rst  = rdata1_save | immI_save;
    wire [31:0] and_rst  = rdata1_save & rdata2_save;
    wire [31:0] andi_rst = rdata1_save & immI_save;

    wire [31:0] slt_rst   = {31'b0, ($signed(rdata1_save) < $signed(rdata2_save))};
    wire [31:0] sltu_rst  = {31'b0, (rdata1_save < rdata2_save)};
    wire [31:0] slti_rst  = {31'b0, ($signed(rdata1_save) < $signed(immI_save))};
    wire [31:0] sltiu_rst = {31'b0, (rdata1_save < immI_save)};


    wire [31:0] sll_rst   = rdata1_save << shamt_r;
    wire [31:0] slli_rst  = rdata1_save << shamt_i;
    wire [31:0] srl_rst   = rdata1_save >> shamt_r;
    wire [31:0] srli_rst  = rdata1_save >> shamt_i;
    wire [31:0] sra_rst   = $signed(rdata1_save) >>> shamt_r;
    wire [31:0] srai_rst  = $signed(rdata1_save) >>> shamt_i;

    reg [31:0] csrw_rst;
    always @(*) begin
        case(immCSR_save)
            32'h00000300: csrw_rst = mstatus_save;
            32'h00000305: csrw_rst = mtvec_save;
            32'h00000341: csrw_rst = mepc_save;
            32'h00000342: csrw_rst = mcause_save;
            32'h00000b00: csrw_rst = mcycle_save;
            32'h00000b80: csrw_rst = mcycleh_save;
            32'h00000f11: csrw_rst = mvendorid_save;
            32'h00000f12: csrw_rst = marchid_save;
            default: csrw_rst = 32'b0;
        endcase
    end

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_valid_r <= 1'b0;
            out_valid  <= 1'b0;
        end else begin
            if(in_valid && in_ready) begin
                in_valid_r <= 1'b1;   // 与上一级握手完毕, 输入缓存有效
                pc_save    <= pc;

                rdata1_save <= rdata1;
                rdata2_save <= rdata2;

                immI_save  <= immI;
                immU_save  <= immU;
                immS_save  <= immS;
                immB_save  <= immB;
                immJ_save  <= immJ;
                immCSR_save <= immCSR;

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

                mstatus_save  <= mstatus;
                mtvec_save    <= mtvec;
                mepc_save     <= mepc;
                mcause_save   <= mcause;
                mcycle_save   <= mcycle;
                mcycleh_save  <= mcycleh;
                mvendorid_save <= mvendorid;
                marchid_save  <= marchid;

                rd_save <= rd;
            end

            if(out_ready && out_valid) begin
                out_valid <= 1'b0;
            end
            
            if(can_execute) begin
                in_valid_r <= 1'b0;
                out_valid  <= 1'b1;

                case(1'b1)
                    lw_save | sw_save: io_type <= 2'b10;
                    lhu_save | lh_save | sh_save: io_type <= 2'b01;
                    lbu_save | lb_save | sb_save: io_type <= 2'b00;
                    default: io_type <= 2'b11;
                endcase
                read <= lw_save | lhu_save | lh_save | lb_save | lbu_save;
                write <= sw_save | sb_save | sh_save;

                read_is_u <= (lhu_save | lbu_save) ? 1'b1 : 1'b0;
                rd_out <= rd_save;

                lsu_wdata <= rdata2_save;

                wen <= add_save | addi_save | sub_save | lui_save | auipc_save |
                            and_inst_save | or_inst_save | xor_inst_save | andi_save | ori_save | xori_save |
                            sll_save | srl_save | sra_save | slli_save | srli_save | srai_save |
                            slt_save | sltu_save | slti_save | sltiu_save |
                            jal_save | jalr_save |
                            lb_save | lh_save | lw_save | lbu_save | lhu_save |
                            csrrw_save | csrrs_save | csrrc_save;

                add_rst <= add1 + add2;

                ic_wb_wdata <= ({32{lui_save}} & immU_save) |
                        ({32{add_save | addi_save | auipc_save}} & (add1 + add2)) |
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
        end
    end


endmodule



/*


    assign wdata = ({32{lui}} & immU) |
                   ({32{add | addi | auipc}} & add_rst) |
                   ({32{jalr | jal}} & pc_next_dft) |
                //    ({32{lw}} & lw_rst) |
                //    ({32{lbu}} & lbu_rst) |
                //    ({32{lhu}} & lhu_rst) |
                //    ({32{lb}} & lb_rst) |
                //    ({32{lh}} & lh_rst) |
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
                   ({32{csrrw | csrrs | csrrc}} & csrw_rst);
*/
