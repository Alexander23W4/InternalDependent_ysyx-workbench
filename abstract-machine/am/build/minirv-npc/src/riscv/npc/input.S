#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"input.c"
	.option nopic
	.text
	.section	.rodata.__am_input_keybrd.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"DATA:%d\n"
	.align	2
.LC1:
	.string	"AM--%d\n"
	.section	.text.__am_input_keybrd,"ax",@progbits
	.align	2
	.globl	__am_input_keybrd
	.hidden	__am_input_keybrd
	.type	__am_input_keybrd, @function
__am_input_keybrd:
	addi	sp,sp,-12
	li	a5,268435456
	sw	s0,4(sp)
	lw	s0,96(a5)
	sw	s1,0(sp)
	sw	ra,8(sp)
	mv	s1,a0
	bne	s0,zero,.L11
	sb	zero,0(a0)
.L4:
	sw	s0,4(s1)
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	addi	sp,sp,12
	jr	ra
.L11:
	mv	a1,s0
	lla	a0,.LC0
	call	printf
	li	a5,32768
	sb	zero,0(s1)
	sw	zero,4(s1)
	and	a4,s0,a5
	beq	a4,zero,.L4
	mv	a1,s0
	lla	a0,.LC1
	call	printf
	li	a5,32768
	sub	s0,s0,a5
	sw	s0,4(s1)
	lw	ra,8(sp)
	lw	s0,4(sp)
	li	a4,1
	sb	a4,0(s1)
	lw	s1,0(sp)
	addi	sp,sp,12
	jr	ra
	.size	__am_input_keybrd, .-__am_input_keybrd
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
