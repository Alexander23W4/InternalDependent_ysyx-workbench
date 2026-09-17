#include <am.h>
#include "ysyxsoc.h"
#include <stdio.h>


void __am_uart_rx(AM_UART_RX_T *uart){
  uart-> data = *(volatile uint8_t *)YSYXSOC_SERIAL_ADDR; 
}



