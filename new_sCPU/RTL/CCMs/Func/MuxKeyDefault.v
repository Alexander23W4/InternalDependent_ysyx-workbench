// ST
module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

// module MuxKeyDefault #(
//     parameter AM = 2,
//     parameter KEY_W = 2,
//     parameter VALUE_W = 5
// ) (
//     input [KEY_W - 1: 0] key,
//     input [AM * (KEY_W + VALUE_W) - 1: 0] data,
//     input [VALUE_W - 1: 0] default_out,
//     output reg [VALUE_W - 1: 0] out
// );
//     MuxKeyInternal #(AM, KEY_W, VALUE_W, 1) Mux1 (
//         .key(key),
//         .data(data),
//         .default_out(default_out),
//         .out(out)
//     );

// endmodule


