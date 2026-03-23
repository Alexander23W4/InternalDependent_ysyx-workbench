// barrel shifters are often used in ALUs to perform shifts
// the barrel shifters implemented with MUX is a pule combinational circuit
// ! VA
module BarrelShifter (
    input LR,           // 1=left 0=right
    input AL,           // 1=arith 0=logic
    input [7:0] din,
    input [2:0] shamt,
    output [7:0] dout
);

wire sign = (AL & ~LR) ? din[7] : 1'b0;

/************* stage0 : shift 1 *************/
wire [7:0] s0;

assign s0[0] = shamt[0] ? (LR ? 1'b0  : din[1]) : din[0];
assign s0[1] = shamt[0] ? (LR ? din[0]: din[2]) : din[1];
assign s0[2] = shamt[0] ? (LR ? din[1]: din[3]) : din[2];
assign s0[3] = shamt[0] ? (LR ? din[2]: din[4]) : din[3];
assign s0[4] = shamt[0] ? (LR ? din[3]: din[5]) : din[4];
assign s0[5] = shamt[0] ? (LR ? din[4]: din[6]) : din[5];
assign s0[6] = shamt[0] ? (LR ? din[5]: din[7]) : din[6];
assign s0[7] = shamt[0] ? (LR ? din[6]: sign  ) : din[7];


/************* stage1 : shift 2 *************/
wire [7:0] s1;

assign s1[0] = shamt[1] ? (LR ? 1'b0   : s0[2]) : s0[0];
assign s1[1] = shamt[1] ? (LR ? 1'b0   : s0[3]) : s0[1];
assign s1[2] = shamt[1] ? (LR ? s0[0]  : s0[4]) : s0[2];
assign s1[3] = shamt[1] ? (LR ? s0[1]  : s0[5]) : s0[3];
assign s1[4] = shamt[1] ? (LR ? s0[2]  : s0[6]) : s0[4];
assign s1[5] = shamt[1] ? (LR ? s0[3]  : s0[7]) : s0[5];
assign s1[6] = shamt[1] ? (LR ? s0[4]  : sign ) : s0[6];
assign s1[7] = shamt[1] ? (LR ? s0[5]  : sign ) : s0[7];


/************* stage2 : shift 4 *************/
wire [7:0] s2;

assign s2[0] = shamt[2] ? (LR ? 1'b0  : s1[4]) : s1[0];
assign s2[1] = shamt[2] ? (LR ? 1'b0  : s1[5]) : s1[1];
assign s2[2] = shamt[2] ? (LR ? 1'b0  : s1[6]) : s1[2];
assign s2[3] = shamt[2] ? (LR ? 1'b0  : s1[7]) : s1[3];
assign s2[4] = shamt[2] ? (LR ? s1[0] : sign ) : s1[4];
assign s2[5] = shamt[2] ? (LR ? s1[1] : sign ) : s1[5];
assign s2[6] = shamt[2] ? (LR ? s1[2] : sign ) : s1[6];
assign s2[7] = shamt[2] ? (LR ? s1[3] : sign ) : s1[7];

assign dout = s2;

endmodule






