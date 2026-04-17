#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"movsx.c"
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
	lw	a4,12(s0)
	sw	ra,8(sp)
	lla	a5,.LANCHOR1
	sw	s1,0(sp)
	sw	a4,0(a5)
	lw	a4,0(a5)
	lla	s1,.LANCHOR2
	sw	a4,20(s0)
	li	a4,97
	sb	a4,0(s1)
	lbu	a0,0(s1)
	slli	a0,a0,24
	srai	a0,a0,24
	addi	a0,a0,-97
	seqz	a0,a0
	call	check
	lbu	a4,0(s1)
	slli	a4,a4,24
	srai	a4,a4,24
	sb	a4,1(s1)
	lbu	a0,1(s1)
	slli	a0,a0,24
	srai	a0,a0,24
	addi	a0,a0,-97
	seqz	a0,a0
	call	check
	lbu	a4,0(s1)
	slli	a4,a4,24
	srai	a4,a4,24
	sw	a4,0(s0)
	lw	a0,0(s0)
	addi	a0,a0,-97
	seqz	a0,a0
	call	check
	li	a4,-128
	sb	a4,1(s1)
	lbu	a4,1(s1)
	slli	a4,a4,24
	srai	a4,a4,24
	sw	a4,0(s0)
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
	lla	a5,.LANCHOR1
	lw	a0,0(a5)
	addi	a0,a0,-3
	seqz	a0,a0
	call	check
	lw	a0,20(s0)
	addi	a0,a0,-3
	seqz	a0,a0
	call	check
	lbu	a0,1(s1)
	slli	a0,a0,24
	srai	a0,a0,24
	addi	a0,a0,128
	seqz	a0,a0
	call	check
	lw	a0,0(s0)
	addi	a0,a0,128
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	C
	.globl	C
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
	.section	.bss.C,"aw",@nobits
	.align	2
	.set	.LANCHOR2,. + 0
	.type	C, @object
	.size	C, 10
C:
	.zero	10
	.section	.sbss.b,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
