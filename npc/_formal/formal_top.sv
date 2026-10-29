module formal_top(input clock, input reset);

    reg [31:0] imem [0:31];



    dut_top dut (

    );






    ref_top ref (

    );




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