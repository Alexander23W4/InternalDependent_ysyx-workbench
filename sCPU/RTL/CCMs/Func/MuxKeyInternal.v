// Internal Implementation of the Multiplexer Template
// the implementation is completely paralell
module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  genvar n;
  generate
    for (n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule


// !!!!!!  this one , at the *****  , the nesting "if" is generated (AM time nestification), 
//  the overall logic includes order of prioirity judgement

// module MuxKeyInternal #(AM = 2, KEY_W = 2, VALUE_W = 5, HAS_DEFAULT = 0) (
//     input [KEY_W - 1: 0] key,
//     input [AM * (KEY_W + VALUE_W) -1: 0] data,
//     input [VALUE_W - 1: 0] default_out,
//     output reg [VALUE_W - 1: 0] out
// );
//     localparam PAIR_W = KEY_W + VALUE_W;
//     reg hit;
//     integer i;
//     always @(*) begin
//         out = 0;
//         hit = 0;
//         for (i = 0; i < AM; i = i + 1 ) begin        //  ********
//             if(key == data[((i + 1) * PAIR_W) - 1: (i * PAIR_W) + VALUE_W]) begin         //  ********
//                 hit = 1;                                   //  ********
//                 out = data[(i * PAIR_W) + VALUE_W: (i * PAIR_W)];                //  ********
//             end
//         end

//         if(HAS_DEFAULT && !hit) begin
//             out = out | default_out;
//         end

//     end

// endmodule


