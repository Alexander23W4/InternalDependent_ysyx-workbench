// $(OSS_HOME)/bin/sby -f pipeline_test.sby

/*

*/

module formal_top(
    input clock,
    input reset,
    input [7:0][31:0] imem      // 形式化的"程序": 8 个 32bit 指令字, 方便填入 instr
);

    // dut_top 的输出
    wire             d_new_instr;
    wire [31:0]      d_pc;
    wire [32*32-1:0] d_dbg_reg;

    // ref_top 的输出
    wire [32*32-1:0] r_dbg_reg;
    wire [31:0]      r_pc;
    wire [31:0]      r_mstatus, r_mepc, r_mcause, r_mtvec, r_mcycle, r_mcycleh, r_mvendorid, r_marchid;

    dut_top dut (
        .clock(clock),
        .reset(reset),
        .ram(imem),          // 8 个 32bit 字 = 32 个 byte, 都是 256bit, 位序一致
        ._new_instr(d_new_instr),
        ._pc(d_pc),
        .dbg_reg(d_dbg_reg)
    );

    ref_top u_ref (
        .clk(clock),
        .rst(reset),
        .dbg_reg(r_dbg_reg),
        ._pc(r_pc),
        ._mstatus(r_mstatus), ._mepc(r_mepc), ._mcause(r_mcause), ._mtvec(r_mtvec),
        ._mcycle(r_mcycle), ._mcycleh(r_mcycleh),
        ._mvendorid(r_mvendorid), ._marchid(r_marchid),
        .ram_instr(imem)
    );


    reg first_instr;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            first_instr <= 1'b1;
        end
        if(d_new_instr) begin
            if(first_instr) begin
                first_instr <= 1'b0;
            end else begin   // 不是第一条指令, 才驱动ref并且比较
                ref_jump..  // 这里驱动ref一个周期
                assert(d_pc == r_pc);
            end
        end
    end
endmodule
