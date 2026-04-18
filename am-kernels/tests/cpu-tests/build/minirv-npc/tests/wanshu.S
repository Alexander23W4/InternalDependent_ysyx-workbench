#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"wanshu.c"
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
	addi	sp,sp,-24
	li	a5,1
	sw	a5,0(sp)
	lw	a5,0(sp)
	sw	s1,12(sp)
	sw	ra,20(sp)
	addi	s1,a5,1
	sw	s0,16(sp)
	sw	zero,8(sp)
	li	a5,30
	beq	s1,a5,.L16
.L14:
	li	s0,1
	sw	zero,4(sp)
	j	.L11
.L13:
	mv	s0,a5
.L11:
	mv	a1,s0
	mv	a0,s1
	call	__modsi3
	bne	a0,zero,.L10
	lw	a5,4(sp)
	add	a5,a5,s0
	sw	a5,4(sp)
.L10:
	lw	a4,0(sp)
	addi	a5,s0,1
	bne	s0,a4,.L13
	lw	a5,4(sp)
	beq	a5,s1,.L17
	sw	s1,0(sp)
.L18:
	lw	a5,0(sp)
	addi	s1,a5,1
	li	a5,30
	bne	s1,a5,.L14
.L16:
	lw	a5,8(sp)
	addi	a0,a5,-2
	seqz	a0,a0
	call	check
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	li	a0,0
	addi	sp,sp,24
	jr	ra
.L17:
	lw	a4,8(sp)
	lla	a3,.LANCHOR0
	slli	a5,a4,2
	add	a5,a3,a5
	lw	a0,0(a5)
	addi	a5,a4,1
	sw	a5,8(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	sw	s1,0(sp)
	j	.L18
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.section	.sdata.ans,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	ans, @object
	.size	ans, 8
ans:
	.word	6
	.word	28
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
