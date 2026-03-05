// barrel shifters are often used in ALUs to perform shifts
// the barrel shifters implemented with MUX is a pule combinational circuit

module BarrelShifter (
    input LR,           // 1=左移 0=右移
    input AL,           // 1=算术移位 0=逻辑移位
    input [7: 0] din,
    input [2: 0] shamt,
    output [7: 0] dout
);
    wire sign = AL ? din[7] : 1'b0;
    
    // 第1级 shamt[0]: 移位1位 (N=1, sel=1位)
    wire l0_b0, l0_b1, l0_b2, l0_b3, l0_b4, l0_b5, l0_b6, l0_b7;
    Mux #(1) m0_0 ({LR ? din[0] : din[1], LR ? din[1] : din[0]}, shamt[0], l0_b0);
    Mux #(1) m0_1 ({LR ? din[1] : din[2], LR ? din[2] : din[1]}, shamt[0], l0_b1);
    Mux #(1) m0_2 ({LR ? din[2] : din[3], LR ? din[3] : din[2]}, shamt[0], l0_b2);
    Mux #(1) m0_3 ({LR ? din[3] : din[4], LR ? din[4] : din[3]}, shamt[0], l0_b3);
    Mux #(1) m0_4 ({LR ? din[4] : din[5], LR ? din[5] : din[4]}, shamt[0], l0_b4);
    Mux #(1) m0_5 ({LR ? din[5] : din[6], LR ? din[6] : din[5]}, shamt[0], l0_b5);
    Mux #(1) m0_6 ({LR ? din[6] : din[7], LR ? din[7] : din[6]}, shamt[0], l0_b6);
    Mux #(1) m0_7 ({LR ? sign  : din[7], LR ? din[7] : sign }, shamt[0], l0_b7);
    
    // 第2级 shamt[1]: 移位2位 (N=2, sel={LR,shamt[1]})
    wire l1_b0, l1_b1, l1_b2, l1_b3, l1_b4, l1_b5, l1_b6, l1_b7;
    Mux #(2) m1_0 ({l0_b0, l0_b2, l0_b4, l0_b6}, {LR, shamt[1]}, l1_b0);
    Mux #(2) m1_1 ({l0_b1, l0_b3, l0_b5, l0_b7}, {LR, shamt[1]}, l1_b1);
    Mux #(2) m1_2 ({l0_b0, l0_b2, l0_b4, l0_b6}, {LR, shamt[1]}, l1_b2);
    Mux #(2) m1_3 ({l0_b1, l0_b3, l0_b5, l0_b7}, {LR, shamt[1]}, l1_b3);
    Mux #(2) m1_4 ({l0_b0, l0_b2, l0_b4, l0_b6}, {LR, shamt[1]}, l1_b4);
    Mux #(2) m1_5 ({l0_b1, l0_b3, l0_b5, l0_b7}, {LR, shamt[1]}, l1_b5);
    Mux #(2) m1_6 ({l0_b0, l0_b2, l0_b4, l0_b6}, {LR, shamt[1]}, l1_b6);
    Mux #(2) m1_7 ({l0_b1, l0_b3, l0_b5, l0_b7}, {LR, shamt[1]}, l1_b7);
    
    // 第3级 shamt[2]: 移位4位 (N=1, sel=shamt[2])
    Mux #(1) m2_0 ({l1_b0, l1_b4}, shamt[2], dout[0]);
    Mux #(1) m2_1 ({l1_b1, l1_b5}, shamt[2], dout[1]);
    Mux #(1) m2_2 ({l1_b2, l1_b6}, shamt[2], dout[2]);
    Mux #(1) m2_3 ({l1_b3, l1_b7}, shamt[2], dout[3]);
    Mux #(1) m2_4 ({sign,  l1_b4}, shamt[2], dout[4]);
    Mux #(1) m2_5 ({sign,  l1_b5}, shamt[2], dout[5]);
    Mux #(1) m2_6 ({sign,  l1_b6}, shamt[2], dout[6]);
    Mux #(1) m2_7 ({sign,  l1_b7}, shamt[2], dout[7]);

endmodule


