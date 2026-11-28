module ysyx_26040135_EXU (

    input clock,
    input reset,

    input  [31:0] pc,   //

    input  [31:0] rdata1, 
    input  [31:0] rdata2,  ///

    input  [31:0] imm,

    input add, addi, sub, lui, auipc,
    input and_inst, or_inst, xor_inst, andi, ori, xori,
    input sll, srl, sra, slli, srli, srai,
    input slt, sltu, slti, sltiu,
    input jal, jalr,
    input lb, lh, lw, lbu, lhu,
    input sb, sh, sw,
    input beq, bne, blt, bge, bltu, bgeu,
    input ebreak, ecall, mret, fence_i,
    input csrrw, csrrs, csrrc,
    input exception_0, exception_1, exception_2,

    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,


// 用于清除rd_list
    input wen,
    input [4:0] rd_wb,


    input in_valid,
    output reg in_ready,

    output reg out_valid,
    input out_ready,

    output is_ls,
    output reg io,
    output reg [1:0] io_type,
    output reg read_is_u,
    output reg [4:0] rd_out,
    output reg [31:0] lsu_wdata,
    output reg [31:0] lsu_addr,
    output reg [31:0] ic_wb_wdata,

    output reg [4:0] rs1_out,
    output reg [4:0] rs2_out,

    output reg flush,   //
    output reg [31:0] pc_flush,  //

    // 
    output reg ren,   // 使能读

    // btb (BTFN)
    output reg bt_valid,
    output reg [31:0] b_pc,
    output reg [31:0] b_target,
    input taken,

    // fence_i
    output reg icache_flush
);

    // RAW
    reg [31:0] rd_list;
    reg [31:0] rd_amt;

    reg wen_save;
    reg [4:0] rd_wb_save;

    // input存储
    reg [31:0] mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid;   // csr 都放到这里

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
    reg ebreak_save, ecall_save, mret_save, fence_i_save;
    reg csrrw_save, csrrs_save, csrrc_save;
    reg exception_0_save, exception_1_save, exception_2_save;

    reg [4:0] rd_save;
    reg [4:0] rs1_save;
    reg [4:0] rs2_save;
    reg [31:0] csr_rst_save;

    reg [31:0] csrw_rst;

    reg taken_save;



    always @(*) begin   // 这个在没in握手的时候就完成, 握手时用csr_rst_save锁存
        case(imm[11:0])
            12'h300: csrw_rst = mstatus;
            12'h305: csrw_rst = mtvec;
            12'h341: csrw_rst = mepc;
            12'h342: csrw_rst = mcause;
            12'hb00: csrw_rst = mcycle;
            12'hb80: csrw_rst = mcycleh;
            12'hf11: csrw_rst = mvendorid;
            12'hf12: csrw_rst = marchid;
            default: csrw_rst = 32'b0;
        endcase
    end


    localparam IDLE = 3'b000, BLOCK = 3'b001, EX = 3'b011, BRANCH = 3'b010;   
    reg [2:0] state, next;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            out_valid <= 1'b0;
            in_ready <= 1'b1;

            rd_list <= 32'b0;
            rd_amt <= 32'b0;
            wen_save <= 1'b0;

            mstatus <= 32'h00001800;   
            mcycle <= 0;
            mcycleh <= 0;
            mvendorid <= 32'h79737978;
            marchid <= 32'h18d6687;   // id: ysyx_26040135

            state <= IDLE;

        end else begin
            {mcycleh, mcycle} <= {mcycleh, mcycle} + 64'd1;

            state <= next;

            if(in_ready && in_valid) begin

                in_ready <= 1'b0;
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
                ebreak_save   <= ebreak;
                ecall_save    <= ecall;
                mret_save     <= mret;
                fence_i_save  <= fence_i;
                csrrw_save    <= csrrw;
                csrrs_save    <= csrrs;
                csrrc_save    <= csrrc;

                exception_0_save <= exception_0;
                exception_1_save <= exception_1;
                exception_2_save <= exception_2;

                csr_rst_save  <= csrw_rst;

                taken_save <= taken;
            end

        // ------------------------------------------

            if(out_ready && out_valid) begin  
                out_valid <= 1'b0;
                in_ready <= 1'b1;
            end

            if (state == BRANCH) begin
                if (is_nlwb | exception) begin
                    in_ready <= 1'b1;
                end else begin
                    out_valid <= 1'b1;
                end
            end

            if(wen) begin
                if(|rd_wb) begin // 不是0
                    wen_save <= 1'b1;
                    rd_wb_save <= rd_wb;
                end
            end

            if(state == EX) begin
                // 需要wb的instr  
                if(!is_nlwb && !write && (|rd_save)) begin  // 不是0
                    if(rd_list[rd_save]) begin          // 已经有没有完成的同一个rd了
                        rd_amt[rd_save] <= 1'b1;
                    end else begin
                        rd_list[rd_save] <= 1'b1;
                        rd_amt[rd_save] <= 1'b0;
                    end
                end 
            end else begin
                if(wen_save) begin
                    wen_save <= 1'b0;
                    if(rd_amt[rd_wb_save]) begin
                        rd_amt[rd_wb_save] <= 1'b0;
                    end else begin
                        rd_list[rd_wb_save] <= 1'b0;
                    end
                end
            end


            if(state == EX) begin   
                
                if(|csrr_wb_en) begin
                    case(imm_save[11:0])   // 这里对没有实现的csr, 默认忽略不写
                        12'h300: mstatus <= csrr_wb;
                        12'h305: mtvec <= csrr_wb;
                        12'h341: mepc <= csrr_wb;
                        12'h342: mcause <= csrr_wb;
                        default: ;
                    endcase
                end

                if(ecall_save) begin
                    mepc <= pc_save;
                    mcause <= 32'hb;
                end
                if(ebreak_save) begin
                    mepc <= pc_save;
                    mcause <= 32'h3;
                end
                if(exception_0_save) begin
                    mepc <= pc_save;
                    mcause <= 32'h0;
                end
                if(exception_1_save) begin
                    mepc <= pc_save;
                    mcause <= 32'h1;
                end
                if(exception_2_save) begin
                    mepc <= pc_save;
                    mcause <= 32'h2;
                end

            end
        end
    end

    always @(*) begin
        next = state;

        flush = 1'b0;
        ren = 1'b0;

        bt_valid = 1'b0;
        b_pc = 32'b0;
        b_target = 32'b0;

        icache_flush = 1'b0;
        
        case (state)
            IDLE: begin
                if(in_valid && in_ready) begin
                    next = BLOCK;
                end
            end

            BLOCK: begin   
                if(gpr_read_valid) begin  // 没有RAW
                    next = EX;
                end 
            end

            EX: begin   
                next = BRANCH;
            end

            BRANCH: begin
                if(b_type) begin
                    bt_valid = 1'b1;
                    b_pc = pc_save;
                    b_target = add_rst_w_save;
                end
                flush = jalr_save | jal_save | (b_type & (br_taken != taken_save)) | fence_i_save | ebreak_save | ecall_save | mret_save |
                            exception_0_save | exception_1_save | exception_2_save;

                icache_flush = fence_i_save;
                next = IDLE;
            end

            default: ;
        endcase

        if(next == EX) begin
            ren = 1'b1;
        end

    end 

    // ------------------------ 控制RAW阻塞的相关信号  
    wire read = lw_save | lh_save | lb_save | lbu_save | lhu_save;
    wire write = sw_save | sh_save | sb_save;
    assign is_ls = read | write;
    wire is_nlwb = beq_save | bne_save | blt_save | bge_save | bltu_save | bgeu_save | ecall_save | ebreak_save | fence_i_save | mret_save | exception;
    wire exception = exception_0_save | exception_1_save | exception_2_save;

    // rs 读寄存器相关
    wire nrs = jal_save | lui_save | auipc_save | fence_i_save | ecall_save | ebreak_save | exception;  // 这几个不需要读取, 没有gpr依赖问题
    wire r_type = add_save | sub_save | sll_save | slt_save | sltu_save | xor_inst_save | srl_save | sra_save | or_inst_save | and_inst_save;
    wire s_type = sb_save | sh_save | sw_save;
    wire b_type = beq_save | bne_save | blt_save | bge_save | bltu_save | bgeu_save;
    wire rsb_type = r_type | s_type | b_type;   // 要读rs1 和 rs2 的
    wire single_rs = ~rsb_type & ~nrs;    // ⭐: 注意, 这个是会有变化的, 如果其他类型支持的instr增加, 就不一定对了

    // gpr_read_valid = 没有 RAW 冒险 (注意: 不读 GPR 的指令也必须为 1, 否则会卡死)
    wire gpr_read_valid = !((rsb_type && (rd_list[rs1_save] || rd_list[rs2_save])) || (single_rs && rd_list[rs1_save]));   // 会读gpr且gpr存在io前后依赖问题





    // ------------------------ EX阶段的组合计算逻辑(EX)    ⭐: 这里用来计算的信号已经全部是寄存器信号了, 所以不会有向前的组合路径延伸

    wire [4:0] shamt_r = rdata2[4:0];
    wire [4:0] shamt_i = imm_save[4:0];
    wire [31:0] add1 = (auipc_save | jal_save | blt_save | bltu_save | bge_save | bgeu_save | bne_save | beq_save) ? pc_save : rdata1;
    wire [31:0] add2 = add_save ? rdata2 : imm_save;  
    wire [31:0] add_rst_w = add1 + add2;      // ⭐
    wire [31:0] sub_rst  = rdata1 - rdata2;
    wire [31:0] xor_rst  = rdata1 ^ rdata2;
    wire [31:0] xori_rst = rdata1 ^ imm_save;
    wire [31:0] or_rst   = rdata1 | rdata2;
    wire [31:0] ori_rst  = rdata1 | imm_save;
    wire [31:0] and_rst  = rdata1 & rdata2;
    wire [31:0] andi_rst = rdata1 & imm_save;

    wire [31:0] slt_rst   = {31'b0, cmp_lt};
    wire [31:0] sltu_rst  = {31'b0, cmp_ltu};
    wire [31:0] slti_rst  = {31'b0, ($signed(rdata1) < $signed(imm_save))};
    wire [31:0] sltiu_rst = {31'b0, (rdata1 < imm_save)};


    wire [31:0] sll_rst   = rdata1 << shamt_r;
    wire [31:0] slli_rst  = rdata1 << shamt_i;
    wire [31:0] srl_rst   = rdata1 >> shamt_r;
    wire [31:0] srli_rst  = rdata1 >> shamt_i;
    wire [31:0] sra_rst   = $signed(rdata1) >>> shamt_r;
    wire [31:0] srai_rst  = $signed(rdata1) >>> shamt_i;

    reg [31:0] csrr_wb;
    reg [2:0] csrr_wb_en;
    

    always @(*) begin
        if (lw_save || sw_save) begin
            io_type = 2'b10;
        end else if (lhu_save || lh_save || sh_save) begin
            io_type = 2'b01;
        end else if (lbu_save || lb_save || sb_save) begin
            io_type = 2'b00;
        end else begin
            io_type = 2'b11;
        end

        rs1_out = rs1_save;
        rs2_out = rs2_save;    

        io = read ? 1'b0 : 1'b1;

        read_is_u = (lhu_save | lbu_save) ? 1'b1 : 1'b0;
        rd_out = rd_save;

        lsu_wdata = rdata2;
        lsu_addr = add_rst_w_save;



        csrr_wb_en = {|{{5{csrrc_save}} & rs1_save}, |{{5{csrrs_save}} & rs1_save}, csrrw_save};

        case(csrr_wb_en) 
            3'b001: csrr_wb = rdata1;
            3'b010: csrr_wb = rdata1 | csr_rst_save;
            3'b100: csrr_wb = ~rdata1 & csr_rst_save;
            default: csrr_wb = '0;
        endcase


// ⭐: 大MUX, 待优化  and->or阵列(选并阵列)
        ic_wb_wdata = ({32{lui_save}} & imm_save) |   //
                ({32{add_save | addi_save | auipc_save}} & add_rst_w_save) |
                ({32{jalr_save | jal_save}} & pc_next_dft) |   //
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
                ({32{csrrw_save | csrrs_save | csrrc_save}} & csr_rst_save);

    end

    reg [31:0] pc_next_dft;
    reg [31:0] add_rst_w_save;
    reg cmp_lt;
    reg cmp_eq;
    reg cmp_ltu;

    always @(posedge clock) begin
        if(state == EX) begin
            add_rst_w_save <= add_rst_w;
            pc_next_dft <= pc_save + 32'd4;
            cmp_lt <= ($signed(rdata1) < $signed(rdata2));
            cmp_ltu <= (rdata1 < rdata2);
            cmp_eq <= (rdata1 == rdata2);
        end
    end



    wire br_taken = (blt_save  &  cmp_lt) |
                    (beq_save  &  cmp_eq) |
                    (bne_save  & ~cmp_eq) |
                    (bge_save  & ~cmp_lt) |
                    (bltu_save &  cmp_ltu)|
                    (bgeu_save & ~cmp_ltu);

    always @(*) begin
        pc_flush = ({32{jalr_save }} & {add_rst_w_save[31:1], 1'b0}) |
                 ({32{jal_save | br_taken}} & add_rst_w_save) |
                 ({32{ecall_save | ebreak_save | exception_0_save | exception_1_save | exception_2_save}} & mtvec) |
                 ({32{mret_save }} & mepc) |
                 ({32{(b_type & ~br_taken) | fence_i_save}} & pc_next_dft);
    end

endmodule



