// $(OSS_HOME)/bin/sby -f pipeline_test.sby

/*
形式化里求解器的自由变量只有设计的输入:clock(隐式)、reset、imem。
所以我可以assume实现里面的任何信号, 来间接保证他输入符合我的要求: 比如我想让pc的地址约束在一定范围, 可以约束ifu的pc
*/

module formal_top(
    input clock,
    input reset,
    input [7:0][31:0] imem      // 形式化的"程序": 8 个 32bit 指令字, 方便填入 instr
);

    // reset
    reg [3:0] f_cycles = 4'd0;
    always @(posedge clock) begin
        if(f_cycles != 4'hf) begin
            f_cycles <= f_cycles + 4'd1;
        end
    end
    always @(*) begin
        assume(f_cycles == 4'd0 ? reset : !reset);
    end


    // imem
    reg [7:0][31:0] imem_r;
    always @(posedge clock) begin
        imem_r <= imem;
    end
    always @(*) begin
        assume(imem == imem_r);   // 强制保持imem恒定 
    end

    //  指令合法性: 只允许 npc 已经实现的指令, 排除 ebreak / ecall / mret / fence.i
    //     CSR 指令的 CSR 地址只允许 mstatus/mepc/mcause/mtvec/mcycle/mcycleh
    function automatic bit is_legal(input [31:0] ins);
        reg [6:0]  op;  reg [2:0] f3;  reg [6:0] f7;  reg [11:0] csr;
        begin
            op = ins[6:0]; f3 = ins[14:12]; f7 = ins[31:25]; csr = ins[31:20];
            is_legal = 1'b0;
            case (op)
                7'b0110011: begin                                   // add sub sll slt sltu xor srl sra or and
                    case (f3)
                        3'b000, 3'b101: is_legal = (f7 == 7'b0000000) || (f7 == 7'b0100000);
                        3'b001, 3'b010, 3'b011,
                        3'b100, 3'b110, 3'b111: is_legal = (f7 == 7'b0000000);
                        default: ;
                    endcase
                end
                7'b0010011: begin                                   // addi slti sltiu xori ori andi slli srli srai
                    case (f3)
                        3'b000, 3'b010, 3'b011,
                        3'b100, 3'b110, 3'b111: is_legal = 1'b1;
                        3'b001: is_legal = (f7 == 7'b0000000);                            // slli
                        3'b101: is_legal = (f7 == 7'b0000000) || (f7 == 7'b0100000);      // srli/srai
                        default: ;
                    endcase
                end
                7'b0000011: is_legal = (f3==3'b000)||(f3==3'b001)||(f3==3'b010)||       // lb lh lw lbu lhu
                                       (f3==3'b100)||(f3==3'b101);
                7'b0100011: is_legal = (f3==3'b000)||(f3==3'b001)||(f3==3'b010);        // sb sh sw
                7'b1100011: is_legal = (f3==3'b000)||(f3==3'b001)||(f3==3'b100)||       // beq bne blt bge bltu bgeu
                                       (f3==3'b101)||(f3==3'b110)||(f3==3'b111);
                7'b1101111: is_legal = 1'b1;                                            // jal
                7'b1100111: is_legal = (f3 == 3'b000);                                  // jalr
                7'b0110111: is_legal = 1'b1;                                            // lui
                7'b0010111: is_legal = 1'b1;                                            // auipc
                7'b1110011: is_legal = ((f3==3'b001)||(f3==3'b010)||(f3==3'b011)) &&    // csrrw/csrrs/csrrc  限制只操作4个csr
                                       ((csr==12'h300)||(csr==12'h341)||(csr==12'h342)||(csr==12'h305));
                default: ;    // ecall/ebreak/mret 是 1110011 的 f3==000, fence.i 是 0001111 -> 都不合法
            endcase
        end
    endfunction

    // B 型 / J 型立即数(用来算跳转目标)
    function automatic [31:0] imm_b(input [31:0] ins);
        imm_b = {{20{ins[31]}}, ins[7], ins[30:25], ins[11:8], 1'b0};
    endfunction

    function automatic [31:0] imm_j(input [31:0] ins);
        imm_j = {{12{ins[31]}}, ins[19:12], ins[20], ins[30:21], 1'b0};
    endfunction

    // 直接约束 b 和 jal 合法
    generate
        for (genvar i = 0; i < 8; i++) begin : g_instr_assume
            wire [31:0] ins = imem[i];
            wire [31:0] pc  = 32'h8000_0000 + i*4;
            wire [31:0] tgt_b = pc + imm_b(ins);
            wire [31:0] tgt_j = pc + imm_j(ins);

            always @(*) assume(is_legal(ins));

            always @(*) if (ins[6:0] == 7'b1101111)                  // jal
                assume(tgt_j >= 32'h8000_0000 && tgt_j < 32'h8000_0020);

            always @(*) if (ins[6:0] == 7'b1100011)                  // branch 跳过去的目标
                assume(tgt_b >= 32'h8000_0000 && tgt_b < 32'h8000_0020);

        end
    endgenerate

    // 间接约束
            // 注意(静态约束不了的两条, 需要 dut_top 另外引出信号):
            //   * jalr 的目标 = (GPR[rs1] + imm) & ~1, 依赖寄存器值, 光看 imem 算不出来   ⭐: 这个也弄到跳转的扣上, 或者直接assume pc 范围
            //   * 访存地址/对齐 = GPR + imm, 同样依赖寄存器值              ⭐ 把assume加到访存的扣上

            // 
            //   要做到这两条, 需要把 EXU 的 pc_flush / LSU 的 lsu_addr 作为端口引到 dut_top 上,
            //   再在顶层 assume 它们落在 0x80000000~0x8000001f(跳转) / 0x80000020~0x8000003f(访存)。

    always @(*) begin
        if(!reset) begin
            assume(d_pc_i >= 32'h80000000 && d_pc_i <= 32'h8000001c && d_pc_i[1:0] == 2'b00);
            assume(r_pc >= 32'h80000000 && r_pc <= 32'h8000001c && r_pc[1:0] == 2'b00);
            if(is_ls_C) begin
                assume(lsu_addr_C >= 32'h80000020 && lsu_addr_C <= 32'h8000003f);
                case(io_type_C)
                    2'b01: assume(lsu_addr_C[0] == 1'b0);
                    2'b10: assume(lsu_addr_C[1:0] == 2'b00);
                    default: ;
                endcase
            end
            if(is_ls_R) begin
                assume(ls_addr_R >= 32'h80000020 && ls_addr_R <= 32'h8000003f);
                case(io_type_R)
                    2'b01: assume(ls_addr_R[0] == 1'b0);
                    2'b10: assume(ls_addr_R[1:0] == 2'b00);
                    default: ;
                endcase
            end
        end
    end


    // dut_top 的输出
    wire d_new_instr;
    wire [31:0] d_pc;
    wire [31:0] d_idu_pc;
    wire [31:0] d_idu_instr;
    wire [32*32-1:0] d_dbg_reg;
    wire [31:0] d_pc_i;
    wire is_ls_C;
    wire [1:0] io_type_C;
    wire [31:0] lsu_addr_C;
    wire d_wen;

    // ref_top 的输出
    wire [32*32-1:0] r_dbg_reg;
    wire [31:0] r_pc;
    wire [31:0] r_mstatus, r_mepc, r_mcause, r_mtvec, r_mcycle, r_mcycleh, r_mvendorid, r_marchid;
    wire [31:0] r_instr;
    wire is_ls_R;
    wire [31:0] ls_addr_R;
    wire [1:0] io_type_R;
    wire f_wen;
    wire [4:0] d_rd_wb;
    wire [31:0] d_wdata_wb;
    

    dut_top dut (
        .clock(clock),
        .reset(reset),
        .ram(imem),          // 8 个 32bit 字 = 32 个 byte, 都是 256bit, 位序一致
        ._new_instr(d_new_instr),

        ._pc(d_pc),
        ._idu_pc(d_idu_pc),
        ._idu_instr(d_idu_instr),

        .dbg_reg(d_dbg_reg),

        ._pc_i(d_pc_i),

        .is_ls_C(is_ls_C),
        .io_type_C(io_type_C),
        .lsu_addr_C(lsu_addr_C),

        ._wen(d_wen),
        ._rd_wb(d_rd_wb),
        ._wdata_wb(d_wdata_wb)
    );

    ref_top u_ref (
        .clk(clock),
        .rst(reset),
        .clk_en(clk_en),
        .dbg_reg(r_dbg_reg),
        ._pc(r_pc),
        ._mstatus(r_mstatus), ._mepc(r_mepc), ._mcause(r_mcause), ._mtvec(r_mtvec),
        ._mcycle(r_mcycle), ._mcycleh(r_mcycleh),
        ._mvendorid(r_mvendorid), ._marchid(r_marchid),
        .ram_instr(imem),
        ._instr(r_instr),
        .is_ls(is_ls_R),
        .ls_addr(ls_addr_R),
        .io_type(io_type_R),
        
        ._wen(f_wen)
    );

    reg clk_en;

// // 关键点：任意 assert/assume/cover 都不能写在带 posedge reset 的块里。
//     always @(posedge clock or posedge reset) begin   // 收到新的instr之后, 先比较, 再驱动ref跳转
//         if(reset) begin
//             clk_en <= 1'b0;
//         end else begin
//             if(d_new_instr) begin   
//                 clk_en <= 1'b1;   // 收到new_instr之后驱动一个周期
//             end
//             if(clk_en && !d_new_instr) begin
//                 clk_en <= 1'b0;
//             end
//         end
//     end

//     always @(posedge clock) begin
//         if(!reset && d_new_instr) begin
//             assert(d_idu_pc == r_pc);
//         end
//     end

    reg gpr_check_valid;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            gpr_check_valid <= 1'b0;
        end else begin
            if(d_wen && f_wen) begin
                gpr_check_valid <= 1'b1;
            end else begin
                gpr_check_valid <= 1'b0;
            end
        end
    end
    always @(*) begin
        clk_en = 1'b0;
        if(!reset) begin
            if((d_wen && f_wen) || (!f_wen)) begin
                clk_en = 1'b1;
            end
        end
    end

    always @(posedge clock) begin
        if(gpr_check_valid && !reset) begin
            assert(r_dbg_reg == d_dbg_reg);
        end
    end


endmodule
