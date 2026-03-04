module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

// module MuxKey #(parameter AM = 2, parameter KEY_W = 2, parameter VALUE_W = 5) (
//     input [KEY_W - 1: 0] key,
//     input [AM * (KEY_W + VALUE_W) - 1: 0] data,
//     output reg [VALUE_W -1: 0] out
// );
//     MuxKeyInternal #(AM, KEY_W, VALUE_W)  Mux1 (
//         .key(key),
//         .data(data),
//         .out(out),
//         .default_out({VALUE_W{1'b0}})
//     );

// endmodule

