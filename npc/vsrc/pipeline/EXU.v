module ysyx_26040135_EXU (

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

    input [4:0] rd;


    output reg wen,  ///

    output reg [31:0] add_rst,  

    output reg read,
    output reg write,
    output reg [1:0] io_type,  ///
    output reg read_is_u, ///
    output reg rd_out,  ///
    output reg [31:0] lsu_wdata,
    output reg [31:0] ic_wb_wdata  // incomplete WB data, lack of l.._rst

);
    
    wire [4:0] shamt_r = rdata2[4:0];
    wire [4:0] shamt_i = immI[4:0];
    wire [31:0] add1 = (auipc | jal | blt | bltu | bge | bgeu | bne | beq) ? pc : rdata1;
    wire [31:0] add2 = ({32{add}} & rdata2) |
                       ({32{sw | sb | sh}} & immS) |
                       ({32{auipc}} & immU) |
                       ({32{jal}} & immJ) |
                       ({32{jalr | lbu | lw | lhu | lh | lb | addi}} & immI) |
                       ({32{blt | bltu | bge | bgeu | bne | beq}} & immB);
    wire [31:0] sub_rst  = rdata1 - rdata2;
    wire [31:0] xor_rst  = rdata1 ^ rdata2;
    wire [31:0] xori_rst = rdata1 ^ immI;
    wire [31:0] or_rst   = rdata1 | rdata2;
    wire [31:0] ori_rst  = rdata1 | immI;
    wire [31:0] and_rst  = rdata1 & rdata2;
    wire [31:0] andi_rst = rdata1 & immI;

    wire [31:0] slt_rst   = {31'b0, ($signed(rdata1) < $signed(rdata2))};
    wire [31:0] sltu_rst  = {31'b0, (rdata1 < rdata2)};
    wire [31:0] slti_rst  = {31'b0, ($signed(rdata1) < $signed(immI))};
    wire [31:0] sltiu_rst = {31'b0, (rdata1 < immI)};


    wire [31:0] sll_rst   = rdata1 << shamt_r;
    wire [31:0] slli_rst  = rdata1 << shamt_i;
    wire [31:0] srl_rst   = rdata1 >> shamt_r;
    wire [31:0] srli_rst  = rdata1 >> shamt_i;
    wire [31:0] sra_rst   = $signed(rdata1) >>> shamt_r;
    wire [31:0] srai_rst  = $signed(rdata1) >>> shamt_i;

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
            default: csrw_rst = 32'b0;
        endcase
    end

    reg pc_save;
    reg ..save  
// ... ..save 补充


    reg in_valid_r;
    wire can_decode = in_valid_r && (!out_valid || out_ready);
    assign in_ready = !in_valid_r; 

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_valid_r <= 1'b0;
            out_valid <= 1'b0;
        end else begin
            if(in_valid && in_ready) begin
                in_valid_r <= 1'b1;   
                instr_save <= instr;
                // ..save <= ..
            end

            if(out_ready && out_valid) begin
                out_valid <= 1'b0;
            end
            
            if(can_execute) begin
                case(1'b1)
                    lw_save | sw_save: io_type <= 2'b10;
                    lhu_save | lh_save | sh_save: io_type <= 2'b01;
                    lbu_save | lb_save | sb_save: io_type <= 2'b00;
                    default: io_type <= 2'b11;
                endcase
                read <= lw_save | sw_save | lhu_save | lh_save | lb_save | lbu_save;
                write <= sw_save | sb_save | sh_save;

                read_is_u <= (lhu_save | lbu_save) ? 1'b1 : 1'b0;
                rd_out <= rd_save

                lsu_wdata <= rdata2_save;

                wen <= add | addi | sub | lui | auipc |
                            and_inst | or_inst | xor_inst | andi | ori | xori |
                            sll | srl | sra | slli | srli | srai |
                            slt | sltu | slti | sltiu |
                            jal | jalr |
                            lb | lh | lw | lbu | lhu |
                            csrrw | csrrs | csrrc;

                add_rst <= add1 + add2;

                ic_wb_wdata <= ({32{lui}} & immU) |
                        ({32{add | addi | auipc}} & add_rst) |
                        ({32{jalr | jal}} & (pc + 32'b4)) |
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