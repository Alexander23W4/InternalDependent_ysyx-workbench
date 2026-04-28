#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

// keydown is true when a key is pressed, and false when a key is released. 
// when a key is pressed, the keyboard will send the make code of that key; 
// when a key is released, the keyboard will send the break code of that key. 

// bool keydown; int keycode
// my solution: send both makecode & breakcode
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = inl(KBD_ADDR);   // data : makecode(keydown, send)   breakcode(!keydown, send)  none(data == 0) (shouldn't include keynone)
  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;   

  if((data & KEYDOWN_MASK) != 0){   // press
    kbd->keydown = true;
    kbd->keycode = data - KEYDOWN_MASK;
  }
  else{
    kbd->keycode = data;
  }
}
