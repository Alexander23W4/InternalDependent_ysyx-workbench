module MuxKey #(parameter AM = 2, parameter KEY_W = 2, parameter VALUE_W = 5) (
    input [KEY_W - 1: 0] key;
    input [AM * (KEY_W + VALUE_W) - 1: 0] data;
    output reg [VALUE_W -1: 0] out;
);
    MuxKeyInternal #(AM, KEY_W, VALUE_W)  Mux1 (
        .key(key),
        .data(data),
        .out(out),
        .default_out({VALUE_W{1'b0}})
    );

endmodule
