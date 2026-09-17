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


  localparam IDLE = 0, MODE = 1, READ_WAIT = 2, READ = 3, WRITE = 4;

  reg [2:0] state, next;
  reg [12:0] Mode_Reg;
  reg [2:0] cas_counter;
  reg [3:0] burst_counter; 


  // assign burst_length = Mode_Reg[2:0];   // 要支持111, 整页burst
  // assign burst_type = Mode_Reg[3];   // 只承认0, 不然卡死
  // assign cas_latency = Mode_Reg[6:4];
  // assign op_mode = Mode_Reg[8:7];    // 只承认0, 不然卡死
  // assign burst_mode = Mode_Reg[9];   // 只承认0, 不然卡死


  wire [3:0] ctrl;

  assign ctrl = {cs, ras, cas, we};

  function [3:0] calc_burst_len;
    input [2:0] len;
    begin
      case (len)
        3'd0: calc_burst_len = 4'd1;
        3'd1: calc_burst_len = 4'd2;
        3'd2: calc_burst_len = 4'd4;
        default: calc_burst_len = 4'd8;
      endcase
    end
  endfunction

  reg [15:0] dq_out;
  reg        dq_oe;    // 是SDRAM输出
  reg [12:0] cur_a;
  reg [ 1:0] cur_ba;

  assign dq = dq_oe ? dq_out : 16'bz;

  always @(*) begin
    next = state;

/*
CS#	RAS#	CAS#	WE#	    命令名称	               命令含义
1	   X	    X	    X	    COMMAND INHIBIT	         无命令
0	   1	    1	    1	    NO OPERATION	           NOP

0	   0	    1	    1	    ACTIVE	                激活目标存储体的一行 (NOP)   

0	   1	    0	    1	    READ	                  读出目标存储体的一列    @@
0	   1	    0	    0	    WRITE	                  写入目标存储体的一列    @@

0	   1	    1	    0	    BURST TERMINATE	        停止当前的突发传输      @@

0	   0	    1	    0	    PRECHARGE	              关闭存储体中已激活的行(预充电)  (NOP)
0	   0	    0	    1	    AUTO REFRESH	          刷新   (NOP)
  
0	   0	    0	    0	    LOAD MODE REGISTER	    设置Mode寄存器        @@
*/
    case (state)
      IDLE: begin
        if (ctrl == 4'b0000) begin
          next = MODE;
        end else if (ctrl == 4'b0101) begin
          next = READ_WAIT;
        end else if (ctrl == 4'b0100) begin
          next = WRITE;
        end
      end
      MODE: begin
        next = IDLE;
      end
      READ_WAIT: begin
        if (cas_counter == 3'd0) begin
          next = READ;
        end
      end
      READ: begin
        if (burst_counter == 4'd0) begin
          next = IDLE;
        end else begin
          next = READ;
        end
      end
      WRITE: begin
        if (burst_counter == 4'd0) begin
          next = IDLE;
        end else begin
          next = WRITE;
        end
      end
    endcase
  end

  always @(posedge clk) begin
    if (!cke) begin
      state <= IDLE;
      Mode_Reg <= 13'b0;
      cas_counter <= 3'b0;
      burst_counter <= 4'b0;
      cur_a <= 13'b0;
      cur_ba <= 2'b0;
      dq_out <= 16'b0;
      dq_oe <= 1'b0;
    end else begin
      state <= next;

      if (state == MODE) begin
        Mode_Reg <= a;
      end

      if (state == IDLE) begin
        if (ctrl == 4'b0000) begin
          Mode_Reg <= a;
        end 
        else if (ctrl == 4'b0101) begin
          cas_counter <= Mode_Reg[6:4];
          cur_a <= a;
          cur_ba <= ba;
          burst_counter <= calc_burst_len(Mode_Reg[2:0]);
          dq_oe <= 1'b0;
        end 
        else if (ctrl == 4'b0100) begin
          cur_a <= a;
          cur_ba <= ba;
          burst_counter <= calc_burst_len(Mode_Reg[2:0]);
        end
      end

      if (state == READ_WAIT) begin
        if (cas_counter != 3'd0) begin
          cas_counter <= cas_counter - 3'd1;
        end else begin
          dq_oe <= 1'b1;
          dq_out <= memory[cur_ba][cur_a][0];
          cur_a <= cur_a + 13'd1;
          burst_counter <= burst_counter - 4'd1;
        end
      end

      if (state == READ) begin
        if (burst_counter == 4'd0) begin
          dq_oe <= 1'b0;
          dq_out <= 16'b0;
        end else begin
          dq_oe <= 1'b1;
          dq_out <= memory[cur_ba][cur_a][0];
          cur_a <= cur_a + 13'd1;
          burst_counter <= burst_counter - 4'd1;
        end
      end

      if (state == WRITE) begin
        if (burst_counter != 4'd0) begin
          if (!dqm[0]) memory[cur_ba][cur_a][0][7:0] <= dq[7:0];
          if (!dqm[1]) memory[cur_ba][cur_a][0][15:8] <= dq[15:8];
          cur_a <= cur_a + 13'd1;
          burst_counter <= burst_counter - 4'd1;
        end
      end
    end
  end
endmodule
