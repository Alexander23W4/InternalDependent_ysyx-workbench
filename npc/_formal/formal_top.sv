module formal_top(
    input clock, 
    input reset
);

    reg [31:0] imem [0:31];



    dut_top dut (
        
    );



    ref_top ref (
        
    );




/*
    ram的内容应当保持不变
    只有前8个地址作为形式化验证方程的输入
    前8个地址是指令, 指令可以是任何RV32I指令, 除了ecall和fencei和ebreak和mret, 但是访存地址必须是0x80000020-0x8000003f, pc跳转目的地只能是0x80000000-0x8000001f
        访存对齐问题
        CSR只能是 _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh

*/

    // ---------- 比对 ----------
    reg f_past_valid = 1'b0;
    always @(posedge clock) f_past_valid <= 1'b1;

    always @(posedge clock) if (f_past_valid && !reset && d_ret_valid) begin
        assert(r_rd      == d_ret_rd);
        assert(r_res     == d_ret_res);
        assert(r_pc_next == d_ret_pc_next);   // 对比"新 PC",能早一拍抓到控制流错误
    end

    // 顺手: x0 恒 0
    always @(posedge clock) if (f_past_valid && !reset)
        assert(dut.gpr[0] == 32'b0);

endmodule