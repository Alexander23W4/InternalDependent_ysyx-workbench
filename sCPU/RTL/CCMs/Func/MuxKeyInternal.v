module MuxKeyInternal #(AM = 2, KEY_W = 2, VALUE_W = 5, HAS_DEFAULT = 0) (
    input [KEY_W - 1: 0] key,
    input [AM * (KEY_W + VALUE_W) -1: 0] data,
    input [VALUE_W - 1: 0] default_out,
    output reg [VALUE_W - 1: 0] out
);
    localparam PAIR_W = KEY_W + VALUE_W;
    reg hit;
    integer i;
    always @(*) begin
        out = 0;
        hit = 0;
        for (i = 0; i < AM; i = i + 1 ) begin
            if(key == data[((i + 1) * PAIR_W) - 1: (i * PAIR_W) + VALUE_W]) begin
                hit = 1;
                out = data[(i * PAIR_W) + VALUE_W: (i * PAIR_W)];
            end
        end

        if(HAS_DEFAULT && !hit) begin
            out = out | default_out;
        end

    end

endmodule

