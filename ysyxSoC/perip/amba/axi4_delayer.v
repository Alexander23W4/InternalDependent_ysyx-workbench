
/*
读写用两套不同的计数器

将valid信号有效的时刻视为事务的开始.

假设一个AXI突发读事务从t0时刻开始, 设备端分别在t1, t2时刻返回数据, AXI延迟模块在t1', t2'时刻向上游返回数据, 
则应有等式(t1 - t0) * r = t1' - t0和(t2 - t0) * r = t2' - t0.

实现(每个 beat 一个计数器, 读写各一套):
    t0 = 上游 valid 有效那一拍(AR/AW 一举起来就算开始, 后面等 ready 的时间也要算进去)
    从 t0 到某一拍数据到手的上一拍, 这个 beat 的计数器每拍 += (r-1)
    从这一拍数据到手的那一拍开始, 计数器每拍 -= 1
    计数器减到 0 的那一拍, 就把这一拍交给上游
  ==> 等待 n 拍攒 n*(r-1), 再泄 n*(r-1) 拍, 合计 n + n*(r-1) = n*r 拍, 正好是上面的等式

  两个容易写错的点:
    1) 每拍累加的是 (r-1) 而不是 r: 等待本身已经占掉 n 拍 CPU 时间了, 再攒 n*(r-1) 才是 n*r
    2) 数据到手的那一拍不再累加, 但要从那一拍就开始泄放, 不然整体会多 1 拍

写事务: 目前 LSU 不发突发写, 因此只校准单个写事务(awlen==0), 而且只校准 B 回包的返回时刻;
        AW/W 立即透传(设备端收下一次数据本身至少要花 r 拍, 突发写的数据发送时刻校准等有了 dcache 再说)。

现在最多支持 4 拍, 只支持 2'b01 突发 (FIXED 只用于单拍访问, 单拍时 arbust 无所谓, 所以只在 arlen!=0 时才要求 INCR)
        mbus.arlen <= 4                                          (加 assert )
        mbus.arburst = 2'b01;           // INCR: 多拍时地址要递增   (加 assert )

依然只支持 SDRAM 的延迟, 其他的透传
*/

module axi4_delayer(
  input         clock,
  input         reset,

  output reg        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output reg        in_rvalid,
  output reg [3:0]  in_rid,
  output reg [31:0] in_rdata,
  output reg [1:0]  in_rresp,
  output reg        in_rlast,
  output reg        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output reg        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
  input         in_bready,
  output reg        in_bvalid,
  output reg [3:0]  in_bid,
  output reg [1:0]  in_bresp,

  input         out_arready,
  output reg        out_arvalid,
  output reg [3:0]  out_arid,
  output reg [31:0] out_araddr,
  output reg [7:0]  out_arlen,
  output reg [2:0]  out_arsize,
  output reg [1:0]  out_arburst,
  output reg        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output reg        out_awvalid,
  output reg [3:0]  out_awid,
  output reg [31:0] out_awaddr,
  output reg [7:0]  out_awlen,
  output reg [2:0]  out_awsize,
  output reg [1:0]  out_awburst,
  input         out_wready,
  output reg        out_wvalid,
  output reg [31:0] out_wdata,
  output reg [3:0]  out_wstrb,
  output reg        out_wlast,
  output reg        out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);



  parameter SDRAM_PERIOD = 100;
  parameter CPU_PERIOD   = 1000;
  parameter R = CPU_PERIOD / SDRAM_PERIOD;
  parameter SDRAM_LOW = 32'ha0000000, SDRAM_HIGH = 32'hbfffffff;   

  parameter MAX_ALLOWED_BURST_LEN = 4;

  // 每拍累加量: 等待 n 拍攒 n*(R-1), 再泄 n*(R-1) 拍, 合计 n*R 拍
  localparam STEP = (R > 1) ? (R - 1) : 0;

  localparam IDLE = 2'b00, READ = 2'b01, WRITE = 2'b10;
  reg [1:0] state, next;

  // ---------------- 读事务 ----------------
  reg [32:0] read_counters [0:MAX_ALLOWED_BURST_LEN-1];
  reg [31:0] rdata_save    [0:MAX_ALLOWED_BURST_LEN-1];
  reg [2:0]  get_beat;        // 已经从设备拿到几拍 (0 ~ 4)
  reg [2:0]  return_beat;     // 已经还给上游几拍 (0 ~ 4)
  reg [2:0]  arlen_save;      // AXI 的 arlen 就是"拍数-1", 所以最后一拍的下标 == arlen_save
  reg [3:0]  rid_save;
  reg [1:0]  rresp_save;      // 任意一拍出错就报错

  // ---------------- 写事务(单个, 只校准 B) ----------------
  reg [32:0] write_counter;
  reg        b_received;
  reg [3:0]  bid_save;
  reg [1:0]  bresp_save;

  integer i;

  // 这一拍有没有 beat / B 到手 (握手成功才算到手)
  wire r_beat_arriving = (state == READ)  && out_rvalid && out_rready && (get_beat < MAX_ALLOWED_BURST_LEN);
  wire b_arriving      = (state == WRITE) && out_bvalid && out_bready && !b_received;

  always @(posedge clock or posedge reset) begin
    if(reset) begin
      state <= IDLE;
      for (i = 0; i < MAX_ALLOWED_BURST_LEN; i = i + 1) begin
        read_counters[i] <= '0;
        rdata_save[i]    <= '0;
      end
      write_counter <= '0;
      get_beat      <= '0;
      return_beat   <= '0;
      arlen_save    <= '0;
      rid_save      <= '0;
      rresp_save    <= '0;
      b_received    <= 1'b0;
      bid_save      <= '0;
      bresp_save    <= '0;

    end else begin
      state <= next;

      // ======================= 读事务 =======================
      if(state == IDLE) begin
        // 每拍先把上一笔读的状态清干净(和 AR 同拍开始时再攒)
        for (i = 0; i < MAX_ALLOWED_BURST_LEN ; i = i + 1) begin
          read_counters[i] <= '0;
          rdata_save[i]    <= '0;
        end
        get_beat    <= '0;
        return_beat <= '0;
        rresp_save  <= 2'b00;

        // t0: 上游 AR 有效那一拍起算(等 out_arready 的这几拍也一起攒)
        if(in_arvalid && in_araddr >= SDRAM_LOW && in_araddr <= SDRAM_HIGH) begin
          for (i = 0; i < MAX_ALLOWED_BURST_LEN ; i = i + 1) begin
            read_counters[i] <= read_counters[i] + STEP;
          end
          arlen_save <= in_arlen[2:0];      // 只可能 < 4 (上面有 assert)
          rid_save   <= in_arid;
        end
      end

      if(state == READ) begin
        /* verilator lint_off WIDTHEXPAND */
        // ⭐ for 的下标和边界都必须是常数, verilator 才能把循环展开; 变量边界的 for 里不允许对数组做非阻塞赋值
        //    (BLKLOOPINIT)。两个 if 覆盖的区间不重叠, 同一个 counter 这拍最多被赋一次值。
        for (i = 0; i < MAX_ALLOWED_BURST_LEN; i = i + 1) begin
          // 还没到手的 beat 继续攒(正在这一拍到手的那个不再累加)
          if(i >= get_beat && !(r_beat_arriving && i == get_beat)) begin
            read_counters[i] <= read_counters[i] + STEP;
          end
          // 已经到手的 beat 每拍泄 1(含"这一拍刚到手"的那个)
          if(i >= return_beat && i < get_beat + r_beat_arriving && read_counters[i] != 0) begin
            read_counters[i] <= read_counters[i] - 1'b1;
          end
        end
        /* verilator lint_on WIDTHEXPAND */

        // 收 beat: 必须和 ready 握手, 否则设备会一直举着同一拍, 被重复收下
        if(r_beat_arriving) begin
          rdata_save[get_beat[1:0]] <= out_rdata;
          rresp_save           <= rresp_save | out_rresp;
          get_beat             <= get_beat + 1'b1;
        end

        // 还给上游: 等上游收走(rvalid && rready)才前进, 否则上游一反压就丢 beat
        if(in_rvalid && in_rready) begin
          if(return_beat == arlen_save) begin
            return_beat <= '0;              // 最后一拍, 状态在组合逻辑里回 IDLE
          end else begin
            return_beat <= return_beat + 1'b1;
          end
        end
      end

      // ======================= 写事务 =======================
      if(state == IDLE) begin
        write_counter <= '0;
        b_received    <= 1'b0;

        // t0: 上游 AW 有效那一拍起算
        if(in_awvalid && in_awaddr >= SDRAM_LOW && in_awaddr <= SDRAM_HIGH) begin
          write_counter <= write_counter + STEP;
        end
      end

      if(state == WRITE) begin
        // B 还没回来就继续攒(回来的那一拍不算), 回来了就开始泄(含回来的那一拍)
        if(!b_received && !b_arriving) begin
          write_counter <= write_counter + STEP;
        end else if(write_counter != 0) begin
          write_counter <= write_counter - 1'b1;
        end

        // 收 B
        if(b_arriving) begin
          b_received <= 1'b1;
          bid_save   <= out_bid;
          bresp_save <= out_bresp;
        end
      end

    end
  end

  always @(*) begin
    next = state;

    // ---------------- 默认全部透传(不是 SDRAM 地址就走这条路) ----------------
    in_arready  = out_arready;
    out_arvalid = in_arvalid;
    out_arid    = in_arid;
    out_araddr  = in_araddr;
    out_arlen   = in_arlen;
    out_arsize  = in_arsize;
    out_arburst = in_arburst;

    out_rready = in_rready;
    in_rvalid  = out_rvalid;
    in_rid     = out_rid;
    in_rdata   = out_rdata;
    in_rresp   = out_rresp;
    in_rlast   = out_rlast;

    in_awready  = out_awready;
    out_awvalid = in_awvalid;
    out_awid    = in_awid;
    out_awaddr  = in_awaddr;
    out_awlen   = in_awlen;
    out_awsize  = in_awsize;
    out_awburst = in_awburst;

    in_wready  = out_wready;
    out_wvalid = in_wvalid;
    out_wdata  = in_wdata;
    out_wstrb  = in_wstrb;
    out_wlast  = in_wlast;

    out_bready = in_bready;
    in_bvalid  = out_bvalid;
    in_bid     = out_bid;
    in_bresp   = out_bresp;

    case (state)
      IDLE: begin
        if(in_arvalid && in_araddr >= SDRAM_LOW && in_araddr <= SDRAM_HIGH) begin
          // 读事务: 等设备收下 AR, 就进 READ 接管 R 通道
          if(out_arready) begin
            next = READ;
          end
        end
        else if(in_awvalid && in_awaddr >= SDRAM_LOW && in_awaddr <= SDRAM_HIGH) begin
          // 写事务: 等设备收下 AW, 就进 WRITE 接管 B 通道
          if(out_awready) begin
            next = WRITE;
          end
        end
      end

      READ: begin
        // 接管 R 通道: 设备端来的 beat 全部先收下(缓冲区正好 4 拍), 什么时候还给上游由计数器定
        out_rready = 1'b1;
        in_rvalid  = 1'b0;
        in_rid     = '0;
        in_rdata   = '0;
        in_rresp   = '0;
        in_rlast   = '0;

        // 计数器减到 0, 且这一拍已经到手(或正好这一拍到), 才交给上游
        if(read_counters[return_beat[1:0]] == 0 &&
           (return_beat < get_beat || (r_beat_arriving && return_beat == get_beat))) begin
          in_rvalid = 1'b1;
          in_rid    = rid_save;
          in_rdata  = rdata_save[return_beat[1:0]];
          in_rresp  = rresp_save;
          if(return_beat == arlen_save) begin
            in_rlast = 1'b1;
            if(in_rready) begin
              next = IDLE;
            end
          end
        end
      end

      WRITE: begin
        // 接管 B 通道: AW/W 继续透传, 设备的 B 先收下, 什么时候还给上游由计数器定
        out_bready = 1'b1;
        in_bvalid  = 1'b0;
        in_bid     = '0;
        in_bresp   = '0;

        if((b_received || b_arriving) && write_counter == 0) begin
          in_bvalid = 1'b1;
          in_bid    = b_arriving ? out_bid   : bid_save;
          in_bresp  = b_arriving ? out_bresp : bresp_save;
          if(in_bready) begin
            next = IDLE;
          end
        end
      end

      default: next = IDLE;
    endcase
  end


`ifndef SYNTHESIS
  // 目前只支持 4 拍以内; 真正的突发(arlen!=0)只支持 INCR(2'b01)。
  // 单拍访问的长度是 0、突发类型无所谓, 我们的 LSU/IFU 单拍时给的是 FIXED(2'b00), 所以不查它。
  always @(posedge clock) begin
    if(!reset) begin
      if(in_arvalid && in_araddr >= SDRAM_LOW && in_araddr <= SDRAM_HIGH) begin
        assert (in_arlen < MAX_ALLOWED_BURST_LEN);
        if(in_arlen != 8'd0) begin
          assert (in_arburst == 2'b01);
        end
      end
      if(in_awvalid && in_awaddr >= SDRAM_LOW && in_awaddr <= SDRAM_HIGH) begin
        assert (in_awlen == 8'd0);      // 暂不支持突发写
      end
    end
  end
`endif

endmodule
