// using isolation
// use idel-static, lower power
// add output safety reg

module  oper_isolation2
    (
    input                clk ,           //100MHz
    input [1:0]          sel ,
    input [3:0]          din1 ,          //data in
    input [3:0]          din2 ,          //data in
    output reg [7:0]     dout
    );

    wire [3:0]           mul1 = sel == 2'b01 ? din1 : 0 ;
    wire [3:0]           mul2 = sel == 2'b01 ? din2 : 0 ;
    reg [7:0]            res ;
    always @(*) begin
        res       = mul1 * mul2 ;
    end

    always @(posedge clk) begin
        if (sel == 2'b01) begin
            dout   <= res ;
        end
    end
endmodule


