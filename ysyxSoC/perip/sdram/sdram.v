/*

CLK, CKE - 时钟信号和时钟使能信号
CS#, WE#, CAS#, #RAS - 命令信号

BA[1:0] - 存储体地址
A[12:0] - 地址
DQ[15:0] - 数据

DQM[1:0] - 数据掩码, 下图中的命名采用DQML和DQMH

CS#	RAS#	CAS#	WE#	    命令名称	               命令含义
1	   X	    X	    X	    COMMAND INHIBIT	         无命令
0	   1	    1	    1	    NO OPERATION	           NOP

0	   0	    1	    1	    ACTIVE	                激活目标存储体的一行
0	   1	    0	    1	    READ	                  读出目标存储体的一列
0	   1	    0	    0	    WRITE	                  写入目标存储体的一列

0	   1	    1	    0	    BURST TERMINATE	        停止当前的突发传输

0	   0	    1	    0	    PRECHARGE	              关闭存储体中已激活的行(预充电)  (NOP)
0	   0	    0	    1	    AUTO REFRESH	          刷新   (NOP)
  
0	   0	    0	    0	    LOAD MODE REGISTER	    设置Mode寄存器

CAS: 接收到READ命令, 把数据放到DQ总线上, 之间的时间延迟 delay

你需要实现SDRAM控制器会发送的命令, 其中PRECHARGE和AUTO REFRESH命令与存储单元的电气特性相关, 在仿真环境中不必考虑, 因此可以将其实现成NOP. 
此外, Mode寄存器只需要实现CAS Latency 和 Burst Length, 其他字段可忽略.

// ⭐: SDRAM总容量: 8192 * 512 * 4 * 2(Byte) = 2^25 Bytes = 32 MB
*/

module sdram(
  input        clk,
  input        cke,

  input        cs,
  input        ras,
  input        cas,
  input        we,

  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);
  reg [15:0] memory [0:3][0:8191][0:511];  // ⭐


  localparam IDLE = 0, MODE = 2, READ = 3, WRITE = 4;
  reg [2:0] state, next;
  reg [12:0] Mode_Reg;

  wire [2:0] burst_length;
  wire burst_type;
  wire [2:0] cas_latency;
  wire [1:0] op_mode;
  wire burst_mode;

  assign burst_length = Mode_Reg[2:0];
  assign burst_type = Mode_Reg[3];   // 只承认0, 不然卡死
  assign cas_latency = Mode_Reg[6:4];
  assign op_mode = Mode_Reg[8:7];    // 只承认0, 不然卡死
  assign burst_mode = Mode_Reg[9];   // 只承认0, 不然卡死


  wire [3:0] ctrl;

  assign ctrl = {cs, ras, cas, we};


  always @(*) begin
    next = state;

/*
CS#	RAS#	CAS#	WE#	    命令名称	               命令含义
1	   X	    X	    X	    COMMAND INHIBIT	         无命令
0	   1	    1	    1	    NO OPERATION	           NOP

0	   0	    1	    1	    ACTIVE	                激活目标存储体的一行    

0	   1	    0	    1	    READ	                  读出目标存储体的一列    @@
0	   1	    0	    0	    WRITE	                  写入目标存储体的一列    @@

0	   1	    1	    0	    BURST TERMINATE	        停止当前的突发传输      @@

0	   0	    1	    0	    PRECHARGE	              关闭存储体中已激活的行(预充电)  (NOP)
0	   0	    0	    1	    AUTO REFRESH	          刷新   (NOP)
  
0	   0	    0	    0	    LOAD MODE REGISTER	    设置Mode寄存器        @@
*/
    case (state)
      IDLE: begin
        if(ctrl == 4'b0000) begin
          next = MODE;
        end
        else if(ctrl == 4'b0101) begin
          next = READ;
        end
        else if(ctrl == 4'b0100) begin
          next = WRITE;
        end
      end
      MODE: begin
        if(ctrl != 4'b0000) begin
          next = IDLE;
        end
      end
      READ: begin
        
      end
    endcase
    
  end

  always @(posedge clk) begin
    if(!cke) begin
      state <= IDLE;
      Mode_Reg <= '0;
    end else begin
      state <= next;
      if(state == MODE) begin
        Mode_Reg <= ...  // ⭐
      end
    end
  end
endmodule
