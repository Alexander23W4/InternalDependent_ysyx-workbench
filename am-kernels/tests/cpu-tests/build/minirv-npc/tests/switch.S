#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"switch.c"
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
	.section	.text.switch_case,"ax",@progbits
	.align	2
	.globl	switch_case
	.hidden	switch_case
	.type	switch_case, @function
switch_case:
	li	a5,12
	bgtu	a0,a5,.L10
	slli	a0,a0,2
	lla	a5,.LANCHOR0
	add	a5,a5,a0
	lw	a0,0(a5)
	ret
.L10:
	li	a0,-1
	ret
	.size	switch_case, .-switch_case
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	s1,0(sp)
	sw	ra,8(sp)
	lla	s1,.LANCHOR1
	li	s0,0
	li	a3,-1
.L12:
	lw	a0,0(s1)
	addi	s1,s1,4
	sub	a0,a0,a3
	seqz	a0,a0
	call	check
	slli	a5,s0,2
	lla	a4,.LANCHOR0
	li	a3,14
	add	a5,a4,a5
	li	a2,13
	beq	s0,a3,.L17
	li	a3,-1
	beq	s0,a2,.L13
	lw	a3,0(a5)
.L13:
	addi	s0,s0,1
	j	.L12
.L17:
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
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 60
ans:
	.word	-1
	.word	0
	.word	2
	.word	5
	.word	5
	.word	8
	.word	8
	.word	8
	.word	8
	.word	10
	.word	10
	.word	10
	.word	10
	.word	15
	.word	-1
	.section	.rodata.CSWTCH.2,"a"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	CSWTCH.2, @object
	.size	CSWTCH.2, 52
CSWTCH.2:
	.word	0
	.word	2
	.word	5
	.word	5
	.word	8
	.word	8
	.word	8
	.word	8
	.word	10
	.word	10
	.word	10
	.word	10
	.word	15
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
