module ALU4 (
    input  [3:0] a,
    input  [3:0] b,
    input  [2:0] opcode,
    output reg [3:0] out,
    output reg carry,
    output reg overflow,
    output zero
);

    wire [4:0] add_res;
    wire [4:0] sub_res;

    assign add_res = {1'b0, a} + {1'b0, b};
    assign sub_res = {1'b0, a} + {1'b0, (~b)} + 1'b1;

    always @(*) begin
        carry = 1'b0;
        overflow = 1'b0;
        out = 4'b0;

        case (opcode)

            // 000 A + B
            3'b000: begin
                out = add_res[3:0];
                carry = add_res[4];
                overflow = (a[3] == b[3]) && (out[3] != a[3]);
            end

            // 001 A - B
            3'b001: begin
                out = sub_res[3:0];
                carry = sub_res[4];
                overflow = (a[3] != b[3]) && (out[3] != a[3]);
            end

            // 010 -A
            3'b010: begin
                out = ~a + 1'b1;
                carry = 1'b0;
                overflow = (a == 4'b1000); // -8 special case
            end

            // 011 A & B
            3'b011: begin
                out = a & b;
            end

            // 100 A | B
            3'b100: begin
                out = a | b;
            end

            // 101 A ^ B
            3'b101: begin
                out = a ^ b;
            end

            // 110 A < B (signed)
            3'b110: begin
                out = ($signed(a) < $signed(b)) ? 4'b0001 : 4'b0000;
            end

            // 111 A == B
            3'b111: begin
                out = (a == b) ? 4'b0001 : 4'b0000;
            end

        endcase
    end

    assign zero = ~(|out);

endmodule