#include <am.h>
#include "ysyxsoc.h"
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

/*
对于ysyxsoc, keyoboard 的 库函数还是只有这一个这一个
硬件要实现keyboard的周期性自动扫描读取, 读入FIFO buffer
然后从FIFO中读出
*/
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = *(volatile uint32_t *)YSYXSOC_PS2_ADDR; 
  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;   

  if((data & KEYDOWN_MASK) != 0){   // press
    kbd->keydown = true;
    kbd->keycode = data - KEYDOWN_MASK;
  }
  else{    // 释放码或者0
    kbd->keycode = data;
  }
}



