.section entry, "ax"
.globl _start
.type _start, @function

# ** Stack space is defined in linker.ld, 32KB in total
_start:
  mv s0, zero
  la sp, _stack_pointer
  call _trm_init

.size _start, . - _start
