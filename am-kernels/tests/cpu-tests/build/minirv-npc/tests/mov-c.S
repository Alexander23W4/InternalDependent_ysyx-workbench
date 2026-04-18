#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"mov-c.c"
	.option nopic
	.text
	.section	.text.check,"ax",@progbits
	.align	2
	.globl	check
	.hidden	check
	.type	check, @function
check:
	beq	a0,zero,.L7
	ret
.L7:
	addi	sp,sp,-12
	li	a0,1
	sw	ra,8(sp)
	call	halt
	.size	check, .-check
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-12
	sw	s0,4(sp)
	lla	s0,.LANCHOR0
	sw	zero,0(s0)
	li	a5,1
	sw	a5,4(s0)
	li	a5,2
	sw	a5,8(s0)
	li	a5,3
	sw	a5,12(s0)
	li	a5,4
	sw	a5,16(s0)
	lw	a5,12(s0)
	sw	s1,0(sp)
	lla	s1,.LANCHOR1
	sw	a5,0(s1)
	lw	a5,0(s1)
	sw	ra,8(sp)
	sw	a5,20(s0)
	lw	a0,0(s0)
	seqz	a0,a0
	call	check
	lw	a0,4(s0)
	addi	a0,a0,-1
	seqz	a0,a0
	call	check
	lw	a0,8(s0)
	addi	a0,a0,-2
	seqz	a0,a0
	call	check
	lw	a0,12(s0)
	addi	a0,a0,-3
	seqz	a0,a0
	call	check
	lw	a0,16(s0)
	addi	a0,a0,-4
	seqz	a0,a0
	call	check
	lw	a0,0(s1)
	addi	a0,a0,-3
	seqz	a0,a0
	call	check
	lw	a0,20(s0)
	addi	a0,a0,-3
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	b
	.globl	b
	.hidden	A
	.globl	A
	.section	.bss.A,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	A, @object
	.size	A, 40
A:
	.zero	40
	.section	.sbss.b,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
