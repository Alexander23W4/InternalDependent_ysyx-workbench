
/*
该模块接收一个8位的数据, 然后输出该数据的位翻转结果, 也即, 将输入数据的第0位与第7位交换, 第1位与第6位交换...

SPI master 已经实现, 能够将AXI总线的 IO 指令转化成符合 SPI 协议的串行信号, 这个bitrev需要实现slave的SPI协议, 从而正确读取串行数据, 并且按照SPI协议返回串行输出值

SPI master输出的SS信号是低电平有效的, 而且要求slave空闲时, 将MISO信号设置为高电平
由于SCK只在SPI传输过程中产生脉冲, 你可能需要用到异步复位的功能, 不过这个bitrev模块并不参与流片, 在其中使用异步复位并不影响流片的流程

你还需要取消ysyxSoC/perip/spi/rtl/spi_top_apb.v中定义的宏FAST_FLASH, 使得APB请求可以访问SPI master的设备寄存器

*/

module bitrev (
  input  sck,
  input  ss,
  input  mosi,   
  output logic miso   // slave空闲时, 将MISO信号设置为高电平
);
  logic [7:0] buffer;
  logic [3:0] bits;

  typedef enum [1:0]{ 
      IDLE, INPUT, OUTPUT
  } state_t;
  state_t state, next;

  always @(*) begin
    miso = 1'b1;
    next = state;
    case(state) 
      IDLE: begin
        if(ss) next = INPUT;
      end

      INPUT: begin
        if(!ss) begin
          next = IDLE;
        end
      end

      OUTPUT: begin
        if(!ss) begin
          next = IDLE;
        end
      end
    endcase
  end

  always @(posedge sck) begin
    if(state == INPUT) begin
      bits <= bits + 3'b001;
      buffer <= buffer | (8'h01 << bits);
    end
    if(state == OUTPUT) begin
      bits <= 3'b000;
    end
  end

endmodule
