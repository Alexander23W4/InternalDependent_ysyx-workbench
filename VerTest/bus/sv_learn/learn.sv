/*
SystemVerilog（简称 SV）是硬件描述语言（HDL）Verilog 的扩展，旨在增强语言的表达能力，
特别是在硬件设计与验证方面。它包括了许多新特性，既支持硬件描述，又提供了强大的功能来支持硬件验证。

SystemVerilog 的语法和 Verilog 类似，但在许多方面提供了更为丰富的特性，比如面向对象编程、随机化、断言、接口等。

Generally, 写在这里:
logic  

always_comb
always_ff

unique case    priority case
for(int)   for(genvar)
*/
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
    unique case (b)   // 使用 unique case 确保所有情况都已经包含, 负责仿真器会报错. 建议使用unique case代替普通case
                        // unique case 可以避免信号出现 X/Z, 出现则报错
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

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
// 数字电路中, 万物都是二进制, 可以统一为logic.
// 但是不同的 有区分的变量类型 会带来更多方便


// 自定义类型:
typedef logic [31:0] word_t;
typedef word_t table_t [0:5];


table_t table1;

table1[0] = '0;
table1[1] = 32'habcd1234;


// 在更复杂的cpu设计流程中:
typedef logic[31:0] paddr_t;
typedef logic[31:0] vaddr_t;


// typedef struct packed
typedef struct packed {
    logic [3:0] sync;
    logic [31:0] buffer_info;
    logic ready; 
} keyboard_t;


keyboard_t xx_keybaord;

logic xx_ready;

assign xx_ready = xx_keyboard.ready;


// enum 比较适合与多个同类型parameter(states)的定义
typedef enum logic [1:0] {
    STAY, JUMP, RUN
} Mario;


Mario state;
Mario next;

always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        current <= Mario'(0);
    end else begin
        current <= next;
    end
end


// parameter 本身在两个地方出现:
// 1. module #(parameter XXX = xx) (input logic //...); endmodule; 
// 2. parameter logic [5:0] STATEX = 6'b000001;     

/*
关键字	核心作用	一句话理解
module	描述硬件电路的基本单元，是设计实体的核心。	构建数字电路的基本“积木”。
interface	封装模块间的通信协议和信号，简化连接并增强复用性。	将一组繁杂的连线打包成一个“插座”或“接口”。
package	在多个模块间共享类型、常量、函数和任务，实现代码复用。	一个存放公用“工具和定义”的公共仓库。
program	将测试台与设计逻辑分离，专门用于描述测试行为，提供更干净的仿真环境。	一个专门用于“测试”而非“设计”的独立模块。
checker	用于封装断言和属性，形成独立的、可复用的验证单元。	一个专门做“实时检查”的监控器
*/
