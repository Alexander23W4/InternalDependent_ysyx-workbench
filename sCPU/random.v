module random (
    input clk,
    input rst,
    input en,
    input [2:0] a,
    input [2:0] b,
    output reg r
);
    wire [2:0] s;
    wire c;
    Adder #(3) adder(
        .a(a),
        .b(b),
        .c(c),
        .s(s)
    );
    
    localparam A = 0, B = 1;
    reg state, next;

    always @(*) begin
        case(state)
            A: next = B;
            B: next = A;
        endcase
    end 

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            state <= 1'b0;
        end
        else if(en) begin
            state <= next;
        end
    end

    always @(*) begin
        case(state)
            A: r = |{c, s};
            B: r = &{c, s};
        endcase
    end 

endmodule

