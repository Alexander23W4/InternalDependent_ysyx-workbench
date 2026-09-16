.section entry, "ax"
.globl _start
.type _start, @function

/*
 * ================== ⭐ bootloader ==================
 *
 * 复位后 PC 指向 flash(0x3000_0000)里的第一条指令, 也就是这里的 _start。
 * 这一段是**唯一**从 flash 执行的代码(而且只执行一次), 它负责:
 *     1. 把栈设到 SRAM 末尾
 *     2. 把 .text / .rodata / .data 从 flash 里的 LMA 搬到 PSRAM 里的 VMA
 *     3. 把 .bss 清零
 *     4. 跳到 PSRAM 里继续跑(_trm_init 在 .text 里, 这时已经在 PSRAM 了)
 *
 * ⚠ 搬完之后是绝对跳转: 链接脚本把 .text 的 VMA 定在 PSRAM, 所以 `call _trm_init`
 *    的 pcrel 位移 (PSRAM 地址 - flash 里的 pc) 由链接器算好, 一跳就进 PSRAM。
 */

_start:
  la   sp, _stack_pointer      /* 栈: SRAM 末尾, 向下生长 */
  mv   s0, zero

  /* ---------- 1. .text : flash LMA -> PSRAM VMA ---------- */
  la   a0, _text_lma
  la   a1, _text_start
  la   a2, _text_end
  sub  a2, a2, a1              /* 长度 = end - start */
  call _boot_copy

  /* ---------- 2. .rodata : flash LMA -> PSRAM VMA ---------- */
  la   a0, _rodata_lma
  la   a1, _rodata_start
  la   a2, _rodata_end
  sub  a2, a2, a1
  call _boot_copy

  /* ---------- 3. .data : flash LMA -> PSRAM VMA ---------- */
  la   a0, _data_lma
  la   a1, _data_start
  la   a2, _data_end
  sub  a2, a2, a1
  call _boot_copy

  /* ---------- 4. .bss 清零 ---------- */
  la   a1, _bss_start
  la   a2, _bss_end
1:
  bgeu a1, a2, 2f
  sb   zero, 0(a1)
  addi a1, a1, 1
  j    1b
2:

  /* ---------- 5. 跳到 PSRAM 里的程序 ---------- */
  call _trm_init

/*
 * 搬运子程序: a0 = 源(LMA), a1 = 目的(VMA), a2 = 字节数
 * 按字搬(一次 4 字节, 少跑几轮), 尾巴不足 4 字节的再按字节搬。
 * 这个循环本身也住在 flash 里, 每条指令都要走一次 QSPI 取指, 所以能少一轮是一轮。
 */
_boot_copy:
  li   t1, 4
  blt  a2, t1, 3f
1:
  lw   t0, 0(a0)
  sw   t0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  addi a2, a2, -4
  bge  a2, t1, 1b
3:
  beqz a2, 4f
2:
  lbu  t0, 0(a0)
  sb   t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  addi a2, a2, -1
  bnez a2, 2b
4:
  ret

.size _start, . - _start
