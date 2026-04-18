#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"prime.c"
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
	.globl	__umodsi3
	.globl	__modsi3
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-16
	sw	s1,4(sp)
	sw	ra,12(sp)
	sw	s0,8(sp)
	sw	zero,0(sp)
	li	s1,101
.L9:
	li	s0,2
.L11:
	mv	a1,s0
	mv	a0,s1
	call	__modsi3
	addi	s0,s0,1
	beq	a0,zero,.L10
	bne	s0,s1,.L11
	lw	a5,0(sp)
	lla	a3,.LANCHOR0
	slli	a4,a5,2
	add	a4,a3,a4
	lw	a0,0(a4)
	addi	a5,a5,1
	sw	a5,0(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
.L10:
	addi	s1,s1,2
	li	a4,151
	bne	s1,a4,.L9
	lw	a5,0(sp)
	addi	a0,a5,-10
	seqz	a0,a0
	call	check
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	ans, @object
	.size	ans, 40
ans:
	.word	101
	.word	103
	.word	107
	.word	109
	.word	113
	.word	127
	.word	131
	.word	137
	.word	139
	.word	149
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
