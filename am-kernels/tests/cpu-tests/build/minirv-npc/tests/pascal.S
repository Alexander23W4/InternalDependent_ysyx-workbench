#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"pascal.c"
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
	sw	ra,8(sp)
	sw	s0,4(sp)
	sw	s1,0(sp)
	lla	a0,.LANCHOR0
	li	a5,1
	sw	a5,4(a0)
	sw	a5,0(a0)
	lla	a1,.LANCHOR0+8
	lla	t0,.LANCHOR0+124
	li	a4,1
	li	t1,1
.L9:
	lla	s0,.LANCHOR0+4
	mv	a5,s0
	li	a3,1
	j	.L13
.L10:
	lw	a4,0(a5)
.L13:
	add	a2,a4,a3
	sw	a2,0(a5)
	addi	a5,a5,4
	mv	a3,a4
	bne	a5,a1,.L10
	sw	t1,0(a5)
	addi	a1,a5,4
	beq	a1,t0,.L16
	lw	a4,4(a0)
	j	.L9
.L16:
	lla	s1,.LANCHOR1
	li	a4,1
	j	.L12
.L17:
	lw	a4,0(s0)
	addi	s0,s0,4
.L12:
	lw	a0,0(s1)
	addi	s1,s1,4
	sub	a0,a0,a4
	seqz	a0,a0
	call	check
	lla	a5,.LANCHOR1+124
	bne	a5,s1,.L17
	li	a0,1
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.hidden	a
	.globl	a
	.section	.bss.a,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	a, @object
	.size	a, 124
a:
	.zero	124
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 124
ans:
	.word	1
	.word	30
	.word	435
	.word	4060
	.word	27405
	.word	142506
	.word	593775
	.word	2035800
	.word	5852925
	.word	14307150
	.word	30045015
	.word	54627300
	.word	86493225
	.word	119759850
	.word	145422675
	.word	155117520
	.word	145422675
	.word	119759850
	.word	86493225
	.word	54627300
	.word	30045015
	.word	14307150
	.word	5852925
	.word	2035800
	.word	593775
	.word	142506
	.word	27405
	.word	4060
	.word	435
	.word	30
	.word	1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
