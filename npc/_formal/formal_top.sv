module formal_top(
    input clock, 
    input reset
);

/*
由于pc和gpr不方便同时比较, 所以分开比较
*/
    reg [7:0][31:0] imem;   // 这个用字表示, 方便填入instr

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
        .ram(imem),          // 8 个 32bit 字 = 32 个 byte, 都是 256bit, 位序一致
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
    ram的内容应当保持不变
    只有前8个地址作为形式化验证方程的输入
    前8个地址是指令, 指令可以是任何RV32I指令, 除了ecall和fencei和ebreak和mret, 但是访存地址必须是0x80000020-0x8000003f, pc跳转目的地只能是0x80000000-0x8000001f
        访存对齐问题
        CSR只能是 _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh

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