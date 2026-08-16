logic a;
logic [3:0] b;
/*
logic是SV引入的一个数据类型，它明确地声明了一个变量是用于存储或连接的“逻辑值”。当你使用logic时，
你在告诉阅读代码的人：“这是一个四态（0,1,X,Z）的变量，它代表一个数字信号。”
这比区分wire和reg更直接地反映了硬件设计的核心——逻辑运算。
*/
assign a = 16'habcd;

logic [3:0][3:0] matrix;

logic [15:0] c;
logic [3:0] d;



assign b = {4{1'b1}};

assign b = b >>> 3;

module adder(
    input logic [3:0] a, c,
    output logic result
);

endmodule

adder a(.a(a), .c(c));

// ***  always_comb 内部是串行逻辑, 后覆盖前
// 使用always块是为了应用  if case
always_comb begin
    unique case (b)
        4'd1: begin
            
        end
        default: begin

        end

    endcase

    priority case (1'b1)   // 位优先级circumstances
        b[3]: begin
            
        end
        b[2]: begin
            
        end
        default: begin
            
        end

    endcase

    if(a[3]) begin     // 这个逻辑是优先级逻辑  priority type, use priority case for substitution.
        
    end else if(a[2]) begin
        
    end else if(a[1]) begin
        
    end else begin
        
    end
    
    d = '0;

    // 逻辑for: int 作为循环变量
    for (int i = 15; i >= 0; i--) begin    // 循环也是一个优先级逻辑    
        if(c[i]) begin
            d = i[3:0];
            break;
        end
    end

end

    // 电路生成for: genvar 作为循环变量
for (genvar i = 0; i < 16; i++) begin
    assign a[i] = b[i] & (|c[i+3:i]);
end



always_ff @(posedge clk or posedge rst) begin
    
end


// 数字电路中, 万物都是二进制, 可以统一为logic.
// 但是不同的 有区分的变量类型 会带来更多方便


// 自定义类型:
typedef logic[31:0] word_t;
typedef word_t[5:0] table_t;


table_t table1;

table1[0] = '0;
table1[1] = 32'habcd1234;


// 在更复杂的cpu设计流程中:
typedef logic[31:0] paddr_t;
typedef logic[31:0] vaddr_t;



