.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer

  /*
   * ================== bootloader ==================
   * 把数据段从 MROM 搬到 SRAM。
   *
   *   _data_lma   : 数据段在 MROM 里的存放地址 (LMA, 链接脚本用 LOADADDR 导出)
   *   _data_start : 数据段在 SRAM 里的运行地址 (VMA)
   *   _data_end   : 数据段在 SRAM 里的结束地址
   */
   
  la a0, _data_lma          /* src : MROM */
  la a1, _data_start        /* dst : SRAM */
  la a2, _data_end          /* dst end    */
1:
  bgeu a1, a2, 2f           /* while (dst < end) */
  lbu  t0, 0(a0)
  sb   t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  j    1b
2:

  /* .bss 没有初值, 不参与搬运, 由 bootloader 直接清零 */
  la a1, _bss_start
  la a2, _bss_end
3:
  bgeu a1, a2, 4f
  sb   zero, 0(a1)
  addi a1, a1, 1
  j    3b
4:

  call _trm_init

.size _start, . - _start
