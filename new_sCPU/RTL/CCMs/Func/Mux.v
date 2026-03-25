// ST
module Mux #(parameter N = 4) (
    input [2**N - 1: 0] in,
    input [N - 1: 0] sel,
    output out
);
    assign out = in[sel];

endmodule

