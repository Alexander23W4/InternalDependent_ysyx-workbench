.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer

  /*
   * ================== ⭐bootloader ==================
   */
   
  la a0, _data_lma          
  la a1, _data_start       
  la a2, _data_end          

1:
  bgeu a1, a2, 2f          
  lbu  t0, 0(a0)
  sb   t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  j    1b

2:
  la a1, _bss_start
  la a2, _bss_end

3:
  bgeu a1, a2, 4f
  sb   zero, 0(a1)
  addi a1, a1, 1
  j    3b

4:
  la a1, _text_start
  la a2, _text_end
  la a0, _text_lma 

5:
  bgeu a1, a2, 6f
  lbu t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  j     5b

6:
  la a1, _rodata_start
  la a2, _rodata_end
  la a0, _rodata_lma

7:
  bgeu a1, a2, 8f
  lbu t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  j     7b

8:

  call _trm_init

.size _start, . - _start


