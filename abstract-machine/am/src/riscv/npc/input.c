#include <am.h>
#include "npc.h"
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = *(volatile uint32_t *)NPC_KBD_ADDR; 
  // if(data != 0){
  //   printf("DATA:%d\n", data);
  // }
  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;   

  if((data & KEYDOWN_MASK) != 0){   // press
    // printf("AM--%d\n", data);  
    kbd->keydown = true;
    kbd->keycode = data - KEYDOWN_MASK;
  }
  else{    // 释放码或者0
    kbd->keycode = data;
  }
}



