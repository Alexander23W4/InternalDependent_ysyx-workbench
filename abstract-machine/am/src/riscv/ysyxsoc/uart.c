#include <am.h>
#include "ysyxsoc.h"
#include <stdio.h>

/*
uart 已经在 trm_init() 中初始化, 这里不再定义 uart_init() 函数, 不再在 ioe_init() 中初始化
*/



void __am_uart_rx(AM_UART_RX_T *uart){
  while (!(*(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 5) & 0x01));  // 0 DR  Data Ready，接收数据准备好
  uart->data = *(volatile uint8_t *)YSYXSOC_SERIAL_ADDR; 
}


// 发送到tx的API设计与putch相同
void __am_uart_tx(AM_UART_TX_T *uart){
  while (!(*(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 5) & 0x20));  // Transmitter Holding Register Empty，发送保持寄存器为空, 为 1
  *(volatile uint8_t *)YSYXSOC_SERIAL_ADDR = uart->data;
}


