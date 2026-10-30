module formal_top(
    input clock, 
    input reset,
    input [7:0][31:0] imem  // 这个用字表示, 方便填入instr
);
    // ① 第一个周期 reset 拉高, 之后一直为低
    reg [3:0] f_cycles = 4'd0;
    always @(posedge clock) if (f_cycles != 4'hf) f_cycles <= f_cycles + 4'd1;

    always @(*) begin
        if (f_cycles == 4'd0) assume(reset);
        else                  assume(!reset); 
    end

    // ② 指令合法性: 8 个字必须是本 CPU 实现过的 RV32I 指令
    //    排除 ecall/ebreak/mret (system 的 funct3==000) 和 fence.i (opcode 0001111);
    //    CSR 指令的 CSR 地址限定在已实现的 6 个
    function automatic bit is_legal(input [31:0] ins);
        reg [6:0]  op;  reg [2:0] f3;  reg [6:0] f7;  reg [11:0] csr;
        begin
            op = ins[6:0]; f3 = ins[14:12]; f7 = ins[31:25]; csr = ins[31:20];
            is_legal = 1'b0;
            case (op)
                7'b0110011: begin                                   // R-type
                    case (f3)
                        3'b000, 3'b101: is_legal = (f7 == 7'b0000000) || (f7 == 7'b0100000); // add/sub, srl/sra
                        3'b001, 3'b010, 3'b011,
                        3'b100, 3'b110, 3'b111: is_legal = (f7 == 7'b0000000);
                        default: ;
                    endcase
                end
                7'b0010011: begin                                   // I-type
                    case (f3)
                        3'b000, 3'b010, 3'b011,
                        3'b100, 3'b110, 3'b111: is_legal = 1'b1;
                        3'b001: is_legal = (f7 == 7'b0000000);                        // slli
                        3'b101: is_legal = (f7 == 7'b0000000) || (f7 == 7'b0100000);  // srli/srai
                        default: ;
                    endcase
                end
                7'b0000011: is_legal = (f3 inside {3'b000,3'b001,3'b010,3'b100,3'b101});      // lb/lh/lw/lbu/lhu
                7'b0100011: is_legal = (f3 inside {3'b000,3'b001,3'b010});                    // sb/sh/sw
                7'b1100011: is_legal = (f3 inside {3'b000,3'b001,3'b100,3'b101,3'b110,3'b111}); // branch
                7'b1100111: is_legal = (f3 == 3'b000);                                        // jalr
                7'b1101111: is_legal = 1'b1;                                                  // jal
                7'b0110111: is_legal = 1'b1;                                                  // lui
                7'b0010111: is_legal = 1'b1;                                                  // auipc
                7'b1110011: is_legal = (f3 inside {3'b001,3'b010,3'b011}) &&                   // csrrw/csrrs/csrrc
                                       (csr inside {12'h300, 12'h305, 12'h341, 12'h342, 12'hb00, 12'hb80});
                default: ;
            endcase
        end
    endfunction

    generate
        for (genvar i = 0; i < 8; i++) begin : g_legal
            always @(*) assume(is_legal(imem[i]));
        end
    endgenerate
/*
由于pc和gpr不方便同时比较, 所以分开比较
*/

    // dut_top 的输出
    wire        compare;
    wire [1:0]  jump;
    wire        d_new_instr;
    wire [31:0] d_pc;
    wire [32*32-1:0] d_dbg_reg;

    // ref_top 的输出
    wire [32*32-1:0] r_dbg_reg;
    wire [31:0] r_pc;
    wire [31:0] r_mstatus, r_mepc, r_mcause, r_mtvec, r_mcycle, r_mcycleh, r_mvendorid, r_marchid;

    // 延一拍
    reg d_new_instr_d;
    always @(posedge clock) d_new_instr_d <= d_new_instr;



    dut_top dut (
        .clock(clock),
        .reset(reset),
        .ram(imem),          
        .compare(compare),
        .jump(jump),
        ._new_instr(d_new_instr),
        ._pc(d_pc),
        .dbg_reg(d_dbg_reg)
    );


    ref_top u_ref (
        .clk(clock),
        .rst(reset),
        .step(d_new_instr_d),
        .dbg_reg(r_dbg_reg),
        ._pc(r_pc),
        ._mstatus(r_mstatus), ._mepc(r_mepc), ._mcause(r_mcause), ._mtvec(r_mtvec),
        ._mcycle(r_mcycle), ._mcycleh(r_mcycleh),
        ._mvendorid(r_mvendorid), ._marchid(r_marchid),
        .ram_instr(imem)
    );


/*
    第一个周期拉高reset
    ram的内容应当保持不变
    只有前8个地址作为形式化验证方程的输入   0x80000000-0x8000001f是指令    0x80000020-0x8000003f是数据
    前8个地址是指令, 指令可以是任何RV32I指令(现在处理器实现的), 除了ecall和fencei和ebreak和mret, 但是访存(ls)地址必须是0x80000020-0x8000003f, pc跳转目的地只能是0x80000000-0x8000001b
        访存对齐问题, ls访存指令必须严格遵循对齐要求
        CSR指令操作的CSR只能是 _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh
*/

    // 只比 pc
    // EXU 的 _new_instr 那一拍, _pc(=pc_save) 还是上一条指令的 pc, 所以延一拍再比
    always @(posedge clock) if (!reset && d_new_instr_d) begin
        assert(d_pc == r_pc);
    end

    // 顺手: x0 恒 0 (dbg_reg 的第 0 个 32bit 就是 x0)
    always @(posedge clock) if (!reset)
        assert(d_dbg_reg[31:0] == 32'b0);

endmodule