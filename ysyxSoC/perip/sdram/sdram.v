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

将SDRAM控制器的数据位宽扩展到32位
实例化2个SDRAM颗粒的子模块, 模拟对2个SDRAM颗粒进行位扩展的场景. 为此, 你需要修改以下内容:

SDRAM总线接口中部分信号的位宽

如果你使用Verilog
相反, 你可以在ysyxSoC/Makefile中添加一些命令, 这些命令可以在生成ysyxSoC/build/ysyxSoCFull.v后自动修改信号的位宽

SDRAM控制器的内部实现
实现位扩展后, 就不需要通过突发传输模式来访问SDRAM颗粒了, 经过一个CAS latency后, 就可以从扩展后的颗粒中读出32位数据. 

尝试运行一些benchmark, 对比位扩展前后的性能变化.

位扩展: 2 片 x16 的颗粒拼出一条 32 位数据总线
  两片共用 clk/cke/命令/地址, DQ 各自负责一半:
    u_chip0 -> dq[15:0]   字低半
    u_chip1 -> dq[31:16]  字高半

字扩展: 用地址 bit26 做片选, 2 对共 128MB

*/

//-----------------------------------------------------------------
// 字扩展: 2 对(x32)颗粒共用同一条 32 位数据总线/地址/命令,
//   靠各自的 cs 区分: 只有被 sel 选中的那一对才会收到低有效命令,
//   另一对看到的是 cs=1(COMMAND INHIBIT), 停在 IDLE, 也不会去驱动 DQ。
//     sel=0 -> u_pair0  (0xa0000000 ~ 0xa3ffffff, 64MB)
//     sel=1 -> u_pair1  (0xa4000000 ~ 0xa7ffffff, 64MB)
//   每对是 2 片 x16 做位扩展, 所以一共 4 片颗粒。
//-----------------------------------------------------------------
module sdram(
  input        clk,
  input        cke,

  input        cs,
  input        ras,
  input        cas,
  input        we,

  input [12:0] a,
  input [ 1:0] ba,
  input [ 3:0] dqm,
  inout [31:0] dq,

  input        sel      // 字扩展片选(由控制器给出), 实为访存地址的第26位 addr[25]

);

// ⭐: 这里这个片选是 字扩展 的重点
  wire broadcast_cmd = ~cs & ~ras & ~cas;   // 3个都是0, broadcast_cmd 才是1, 只有 MODE 模式

// MODE是广播命令, 所以MODE时, 二者cs都是0, 都选中
// 不是MODE时, 有效命令时cs==0, 及sel=1时, pair1的cs是0, 选中pair1, sel=0时, 选中pair0
  sdram_cmb u_pair0(
    .clk(clk), .cke(cke), .cs(cs | ( sel & ~broadcast_cmd)), .ras(ras), .cas(cas), .we(we),
    .a(a), .ba(ba), .dqm(dqm), .dq(dq)
  );

  sdram_cmb u_pair1(
    .clk(clk), .cke(cke), .cs(cs | (~sel & ~broadcast_cmd)), .ras(ras), .cas(cas), .we(we),
    .a(a), .ba(ba), .dqm(dqm), .dq(dq)
  );

endmodule

//-----------------------------------------------------------------
// 一对颗粒: 2 片 x16 做位扩展, 拼出一条 32 位数据总线
//-----------------------------------------------------------------
module sdram_cmb(
  input        clk,
  input        cke,

  input        cs,
  input        ras,
  input        cas,
  input        we,

  input [12:0] a,
  input [ 1:0] ba,
  input [ 3:0] dqm,
  inout [31:0] dq
);

  sdram_chip u_chip0(
    .clk(clk), .cke(cke), .cs(cs), .ras(ras), .cas(cas), .we(we),
    .a(a), .ba(ba), .dqm(dqm[1:0]), .dq(dq[15:0])
  );

  sdram_chip u_chip1(
    .clk(clk), .cke(cke), .cs(cs), .ras(ras), .cas(cas), .we(we),
    .a(a), .ba(ba), .dqm(dqm[3:2]), .dq(dq[31:16])
  );

endmodule

//-----------------------------------------------------------------
// 单片 x16 SDRAM 颗粒的行为模型
//-----------------------------------------------------------------
module sdram_chip(
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
  reg [ 8:0] cur_a;    // 突发传输的当前列地址
  reg [ 1:0] cur_ba;

  reg [12:0] active_row [0:3];  // ACTIVE 命令激活的行, 每个 bank 一行

  assign dq = dq_oe ? dq_out : 16'bz;

  always @(*) begin
    next = state;

/*
CS#	RAS#	CAS#	WE#	    命令名称	               命令含义
1	   X	    X	    X	    COMMAND INHIBIT	         无命令
0	   1	    1	    1	    NO OPERATION	           NOP

0	   0	    1	    1	    ACTIVE	                激活目标存储体的一行    @@

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
        // 最后一个等待周期: 再下一拍(寄存器输出)正好是 CAS latency 到达的拍
        if (cas_counter <= 3'd1) begin
          next = READ;
        end
      end
      READ: begin
        if (ctrl == 4'b0110 || burst_counter == 4'd0) begin   // burst terminate
          next = IDLE;
        end else begin
          next = READ;
        end
      end
      WRITE: begin
        if (ctrl == 4'b0110 || burst_counter == 4'd0) begin   // burst terminate
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
      cur_a <= 9'b0;
      cur_ba <= 2'b0;
      dq_out <= 16'b0;
      dq_oe <= 1'b0;
    end else begin
      state <= next;

      if (state == IDLE) begin
        if (ctrl == 4'b0000) begin
          Mode_Reg <= a;                        // LOAD MODE REGISTER
        end 
        else if (ctrl == 4'b0011) begin
          active_row[ba] <= a;                  // ACTIVE: 激活该 bank 的一行
        end
        else if (ctrl == 4'b0101) begin
          cas_counter <= Mode_Reg[6:4] - 3'd1;  // 命令在本拍被采样, 故少等一拍
          cur_a <= a[8:0];
          cur_ba <= ba;
          burst_counter <= calc_burst_len(Mode_Reg[2:0]);
          dq_oe <= 1'b0;
        end 
        else if (ctrl == 4'b0100) begin
          // WRITE 命令与第一个数据同拍出现在总线上, 这里就要写下去
          if (!dqm[0]) memory[ba][active_row[ba]][a[8:0]][7:0]  <= dq[7:0];
          if (!dqm[1]) memory[ba][active_row[ba]][a[8:0]][15:8] <= dq[15:8];
          cur_a <= a[8:0] + 9'd1;
          cur_ba <= ba;
          burst_counter <= calc_burst_len(Mode_Reg[2:0]) - 4'd1;
        end
      end

      if (state == READ_WAIT) begin
        if (cas_counter <= 3'd1) begin
          dq_oe <= 1'b1;
          dq_out <= memory[cur_ba][active_row[cur_ba]][cur_a];
          cur_a <= cur_a + 9'd1;
          burst_counter <= burst_counter - 4'd1;
        end else begin
          cas_counter <= cas_counter - 3'd1;
        end
      end

      if (state == READ) begin
        if (ctrl == 4'b0110 || burst_counter == 4'd0) begin
          dq_oe <= 1'b0;
          dq_out <= 16'b0;
        end else begin
          dq_oe <= 1'b1;
          dq_out <= memory[cur_ba][active_row[cur_ba]][cur_a];
          cur_a <= cur_a + 9'd1;
          burst_counter <= burst_counter - 4'd1;
        end
      end

      if (state == WRITE) begin
        if (ctrl != 4'b0110 && burst_counter != 4'd0) begin
          if (!dqm[0]) memory[cur_ba][active_row[cur_ba]][cur_a][7:0]  <= dq[7:0];
          if (!dqm[1]) memory[cur_ba][active_row[cur_ba]][cur_a][15:8] <= dq[15:8];
          cur_a <= cur_a + 9'd1;
          burst_counter <= burst_counter - 4'd1;
        end
      end
    end
  end
endmodule
