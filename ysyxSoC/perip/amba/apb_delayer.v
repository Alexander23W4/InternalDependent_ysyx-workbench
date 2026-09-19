/*
 因此我们需要实现一个APB的延迟模块. ysyxSoC中已经包含一个APB延迟模块的框架, 并集成到APB Xbar的上游, 可捕捉所有APB访问请求, 包括SDRAM的访问请求. 
 但该框架并未提供延迟模块的具体实现, 因此默认无延迟效果. 为了校准ysyxSoC中SDRAM的访问延迟, 你还需要实现APB延迟模块的功能.

第1拍：PSEL=1, PENABLE=0     → Setup
第2拍：PSEL=1, PENABLE=1     → Access 保持
数据和地址一直维持直到收到 pready

 首先要明确, 所有的APB信号都会到这个地方, 所以我们要把 SDRAM 的做延迟, 其他的一律不操作, 只做中转
 这里采集到 setup 之后, 同时判断 paddr 是不是在 SDRAM 的范围内 0xa000_0000~0xbfff_ffff (这里不管是ifu还是lsu发出的访存信号, 一律只判断 SDRAM 并给延迟)
 然后开始计数 ++ R

*/

module apb_delayer(
  input         clock,        
  input         reset,        


  input         in_psel,      // APB 选择信号，表示当前设备被选中
  input         in_penable,   // APB 使能信号，表示传输阶段有效
  input  [2:0]  in_pprot,     // APB 保护位，通常用于权限/安全信息

  input  [31:0] in_paddr,     // APB 地址总线，访问 SDRAM 的目标地址
  input         in_pwrite,    // 1=写，0=读
  input  [31:0] in_pwdata,    // APB 写数据总线
  input  [3:0]  in_pstrb,     // 写字节掩码，控制 4 个字节是否写入

  // ⭐ 下面这些输出全部由 always @(*) 过程赋值驱动, 所以必须声明成 output reg
  //    (Verilog-2001 里 output 默认是 wire, 过程赋值会直接报 PROCASSWIRE 错误)
  
  output reg        in_pready,    // APB 传输准备好，表示当前传输已完成
  output reg [31:0] in_prdata,    // APB 读数据总线

  output reg        in_pslverr,   // APB 错误标志，1 表示访问错误

  output reg [31:0] out_paddr,
  output reg        out_psel,
  output reg        out_penable,
  output reg [2:0]  out_pprot,

  output reg        out_pwrite,
  output reg [31:0] out_pwdata,
  output reg [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  parameter SDRAM_PERIOD = 100;
  parameter CPU_PERIOD   = 1000;
  parameter R = CPU_PERIOD / SDRAM_PERIOD;
  parameter SDRAM_LOW = 32'ha0000000, SDRAM_HIGH = 32'hbfffffff;   

  localparam IDLE = 2'b00, COUNT = 2'b01, DELAY = 2'b10;
  reg [1:0] state, next;

  reg [31:0] delay_counter;     
  reg [31:0] prdata_save;
  reg        pslverr_save;      


  always @(posedge clock or posedge reset) begin
    if(reset) begin
      delay_counter <= 32'b0;
      state         <= IDLE;
    end else begin
      state <= next;
      if(state == COUNT) begin
        delay_counter <= delay_counter + R;
        if(out_pready) begin
          prdata_save  <= out_prdata;       
          pslverr_save <= out_pslverr;
        end
      end

      if(state == DELAY && delay_counter != 32'b0) begin
        delay_counter <= delay_counter - 32'b1;
      end
    end
  end

  always @(*) begin
    next        = state;

    out_paddr   = in_paddr;
    out_psel    = in_psel;
    out_penable = in_penable;
    out_pprot   = in_pprot;
    out_pwrite  = in_pwrite;
    out_pwdata  = in_pwdata;
    out_pstrb   = in_pstrb;

    in_pready   = out_pready;
    in_prdata   = out_prdata;
    in_pslverr  = out_pslverr;

    case(state)
      IDLE: begin
        // 只有 SDRAM 地址才接管, 其他地址保持上面的旁路
        if(in_psel && in_paddr >= SDRAM_LOW && in_paddr <= SDRAM_HIGH) begin
          next = COUNT;
        end
      end

      COUNT: begin
        // 还在等 SDRAM 返回, 期间绝对不能给 Master ready
        in_pready = 1'b0;
        if(out_pready) begin
          next = DELAY;
        end
      end

      DELAY: begin
        // ⭐ SDRAM 已经回过了, 必须把请求撤掉: 此时 Master 还举着 psel/penable (因为还没看到 in_pready), 如果继续旁路出去, SDRAM 会被重复访问一次.
        out_psel    = 1'b0;
        out_penable = 1'b0;

        in_pready  = 1'b0;
        in_prdata  = prdata_save;
        in_pslverr = pslverr_save;

        if(delay_counter == 32'b0) begin
          next      = IDLE;
          in_pready = 1'b1;        // 延迟结束, 这一拍告诉 Master 传输完成
        end
      end

      default: next = state;
    endcase
  end


endmodule
