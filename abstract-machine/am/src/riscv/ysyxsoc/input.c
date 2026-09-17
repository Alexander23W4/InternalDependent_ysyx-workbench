#include <am.h>
#include "ysyxsoc.h"

/*
PS/2 键盘译码。

硬件 (ysyxSoC/perip/ps2/ps2_top_apb.v) 只把 PS/2 收到的**原始扫描码字节**丢到
0x1001_1000, 不做任何翻译, 读走即清, 没有新按键时读出 0。

一个按键事件可能由 1~3 个字节组成 (PS/2 扫描码集 2):
    按下普通键 : <make>             例如 A 按下      = 1C
    松开普通键 : F0 <make>          例如 A 松开      = F0 1C
    按下扩展键 : E0 <make>          例如 PAGEUP 按下 = E0 7D
    松开扩展键 : E0 F0 <make>       例如 PAGEUP 松开 = E0 F0 7D

所以这里自己做状态机 + 查表:
    E0   -> 记住"下一个是扩展码", 它本身不是按键事件
    F0   -> 记住"下一个是松开",   它本身不是按键事件
    其它 -> 一个 make code, 配合上面两个标志查表得到 AM 键盘码
E0/F0 可能落在两次 ioe_read 之间, 所以两个标志必须是静态的。

扫描码表对照 nvboard/src/at_scancode.h (NVBoard 发的就是这套)。
*/

// ---- PS/2 扫描码集 2 的普通 make code -> AM 键盘码 ----
static const uint32_t keymap[0x84] = {
  [0x01] = AM_KEY_F9,
  [0x03] = AM_KEY_F5,
  [0x04] = AM_KEY_F3,
  [0x05] = AM_KEY_F1,
  [0x06] = AM_KEY_F2,
  [0x07] = AM_KEY_F12,
  [0x09] = AM_KEY_F10,
  [0x0A] = AM_KEY_F8,
  [0x0B] = AM_KEY_F6,
  [0x0C] = AM_KEY_F4,
  [0x0D] = AM_KEY_TAB,
  [0x0E] = AM_KEY_GRAVE,
  [0x11] = AM_KEY_LALT,
  [0x12] = AM_KEY_LSHIFT,
  [0x14] = AM_KEY_LCTRL,
  [0x15] = AM_KEY_Q,
  [0x16] = AM_KEY_1,
  [0x1A] = AM_KEY_Z,
  [0x1B] = AM_KEY_S,
  [0x1C] = AM_KEY_A,
  [0x1D] = AM_KEY_W,
  [0x1E] = AM_KEY_2,
  [0x21] = AM_KEY_C,
  [0x22] = AM_KEY_X,
  [0x23] = AM_KEY_D,
  [0x24] = AM_KEY_E,
  [0x25] = AM_KEY_4,
  [0x26] = AM_KEY_3,
  [0x29] = AM_KEY_SPACE,
  [0x2A] = AM_KEY_V,
  [0x2B] = AM_KEY_F,
  [0x2C] = AM_KEY_T,
  [0x2D] = AM_KEY_R,
  [0x2E] = AM_KEY_5,
  [0x31] = AM_KEY_N,
  [0x32] = AM_KEY_B,
  [0x33] = AM_KEY_H,
  [0x34] = AM_KEY_G,
  [0x35] = AM_KEY_Y,
  [0x36] = AM_KEY_6,
  [0x3A] = AM_KEY_M,
  [0x3B] = AM_KEY_J,
  [0x3C] = AM_KEY_U,
  [0x3D] = AM_KEY_7,
  [0x3E] = AM_KEY_8,
  [0x41] = AM_KEY_COMMA,
  [0x42] = AM_KEY_K,
  [0x43] = AM_KEY_I,
  [0x44] = AM_KEY_O,
  [0x45] = AM_KEY_0,
  [0x46] = AM_KEY_9,
  [0x49] = AM_KEY_PERIOD,
  [0x4A] = AM_KEY_SLASH,
  [0x4B] = AM_KEY_L,
  [0x4C] = AM_KEY_SEMICOLON,
  [0x4D] = AM_KEY_P,
  [0x4E] = AM_KEY_MINUS,
  [0x52] = AM_KEY_APOSTROPHE,
  [0x54] = AM_KEY_LEFTBRACKET,
  [0x55] = AM_KEY_EQUALS,
  [0x58] = AM_KEY_CAPSLOCK,
  [0x59] = AM_KEY_RSHIFT,
  [0x5A] = AM_KEY_RETURN,
  [0x5B] = AM_KEY_RIGHTBRACKET,
  [0x5D] = AM_KEY_BACKSLASH,
  [0x66] = AM_KEY_BACKSPACE,
  [0x76] = AM_KEY_ESCAPE,
  [0x78] = AM_KEY_F11,
  [0x83] = AM_KEY_F7,
  // 0x77 NumLock / 0x7E ScrollLock / 小键盘这些 AM 没有对应键, 保持 0(AM_KEY_NONE)
};

// ---- 带 E0 前缀的扩展 make code -> AM 键盘码 ----
static const uint32_t keymap_ext[0x84] = {
  [0x11] = AM_KEY_RALT,
  [0x14] = AM_KEY_RCTRL,
  [0x2F] = AM_KEY_APPLICATION,
  [0x69] = AM_KEY_END,
  [0x6B] = AM_KEY_LEFT,
  [0x6C] = AM_KEY_HOME,
  [0x70] = AM_KEY_INSERT,
  [0x71] = AM_KEY_DELETE,
  [0x72] = AM_KEY_DOWN,
  [0x74] = AM_KEY_RIGHT,
  [0x75] = AM_KEY_UP,
  [0x7A] = AM_KEY_PAGEDOWN,
  [0x7D] = AM_KEY_PAGEUP,
};

// ⭐ 译码函数: 把一个 make code 翻译成 AM 键盘码, 不认识的键返回 AM_KEY_NONE
static uint32_t scancode2am(uint8_t code, bool extended) {
  if (code >= 0x84) return AM_KEY_NONE;
  return extended ? keymap_ext[code] : keymap[code];
}




void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  static bool extended = false;   // 上一个字节是 E0
  static bool release  = false;   // 上一个字节是 F0

  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;

  uint32_t data = *(volatile uint32_t *)YSYXSOC_PS2_ADDR;
  uint8_t  code = data & 0xff;

  if (code == 0x00) return;                          // 没有新的按键信息
  if (code == 0xE0) { extended = true; return; }     // 扩展前缀, 不是按键事件
  if (code == 0xF0) { release  = true; return; }     // 断码前缀, 不是按键事件

  uint32_t key = scancode2am(code, extended);
  bool is_release = release;
  extended = false;
  release  = false;

  if (key == AM_KEY_NONE) return;                    // 不认识的键直接忽略

  kbd->keycode = key;
  kbd->keydown = !is_release;
}
