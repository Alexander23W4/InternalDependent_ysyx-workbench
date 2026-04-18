#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"if-else.c"
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
	.section	.text.if_else,"ax",@progbits
	.align	2
	.globl	if_else
	.hidden	if_else
	.type	if_else, @function
if_else:
	li	a4,500
	mv	a5,a0
	bgt	a0,a4,.L10
	li	a4,300
	li	a0,100
	bgt	a5,a4,.L8
	li	a4,100
	li	a0,75
	bgt	a5,a4,.L8
	li	a4,50
	sgt	a5,a5,a4
	neg	a5,a5
	andi	a0,a5,50
	ret
.L10:
	li	a0,150
.L8:
	ret
	.size	if_else, .-if_else
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
	lla	s1,.LANCHOR0
	lla	s0,.LANCHOR1
.L16:
	lw	a4,0(s1)
	li	a5,500
	addi	s1,s1,4
	li	a0,300
	li	t1,100
	li	a1,150
	bgt	a4,a5,.L15
	li	a3,50
	sgt	a3,a4,a3
	neg	a3,a3
	li	a1,100
	bgt	a4,a0,.L15
	li	a1,75
	bgt	a4,t1,.L15
	andi	a1,a3,50
.L15:
	lw	a0,0(s0)
	addi	s0,s0,4
	sub	a0,a0,a1
	seqz	a0,a0
	call	check
	lla	a5,.LANCHOR0+56
	bne	s1,a5,.L16
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
	.hidden	test_data
	.globl	test_data
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 56
ans:
	.word	0
	.word	0
	.word	0
	.word	0
	.word	50
	.word	50
	.word	50
	.word	75
	.word	75
	.word	75
	.word	100
	.word	100
	.word	100
	.word	150
	.section	.data.test_data,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	test_data, @object
	.size	test_data, 56
test_data:
	.word	-1
	.word	0
	.word	49
	.word	50
	.word	51
	.word	99
	.word	100
	.word	101
	.word	299
	.word	300
	.word	301
	.word	499
	.word	500
	.word	501
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
