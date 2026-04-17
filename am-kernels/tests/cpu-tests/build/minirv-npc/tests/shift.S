#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"shift.c"
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
	addi	sp,sp,-20
	sw	s0,12(sp)
	lla	s0,.LANCHOR0
	sw	s1,8(sp)
	sw	ra,16(sp)
	lla	a4,.LANCHOR1
	mv	s1,s0
.L9:
	lw	a0,0(s1)
	lw	a3,0(a4)
	sw	a4,0(sp)
	srli	a0,a0,7
	sub	a0,a0,a3
	seqz	a0,a0
	call	check
	lw	a4,0(sp)
	addi	s1,s1,4
	lla	a5,.LANCHOR0+32
	addi	a4,a4,4
	bne	s1,a5,.L9
	lla	a3,.LANCHOR2
	lla	a4,.LANCHOR0
	li	s1,4
.L10:
	lw	a0,0(a4)
	lw	a2,0(a3)
	addi	a4,a4,4
	sra	a0,a0,s1
	sub	a0,a0,a2
	seqz	a0,a0
	sw	a3,4(sp)
	sw	a4,0(sp)
	call	check
	lw	a3,4(sp)
	addi	s1,s1,1
	li	a5,12
	lw	a4,0(sp)
	addi	a3,a3,4
	bne	s1,a5,.L10
	lla	a4,.LANCHOR3
	li	s1,4
.L11:
	lw	a0,0(s0)
	lw	a3,0(a4)
	sw	a4,0(sp)
	srl	a0,a0,s1
	sub	a0,a0,a3
	seqz	a0,a0
	call	check
	lw	a4,0(sp)
	addi	s1,s1,1
	li	a5,12
	addi	s0,s0,4
	addi	a4,a4,4
	bne	s1,a5,.L11
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	s1,8(sp)
	li	a0,0
	addi	sp,sp,20
	jr	ra
	.size	main, .-main
	.hidden	srav_ans
	.globl	srav_ans
	.hidden	srlv_ans
	.globl	srlv_ans
	.hidden	srl_ans
	.globl	srl_ans
	.hidden	test
	.globl	test
	.section	.data.srav_ans,"aw"
	.align	2
	.set	.LANCHOR2,. + 0
	.type	srav_ans, @object
	.size	srav_ans, 32
srav_ans:
	.word	19088743
	.word	-54283615
	.word	0
	.word	-2100192
	.word	8388607
	.word	-4194304
	.word	0
	.word	-1
	.section	.data.srl_ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	srl_ans, @object
	.size	srl_ans, 32
srl_ans:
	.word	2386092
	.word	19983528
	.word	0
	.word	31454240
	.word	16777215
	.word	16777216
	.word	0
	.word	33554431
	.section	.data.srlv_ans,"aw"
	.align	2
	.set	.LANCHOR3,. + 0
	.type	srlv_ans, @object
	.size	srlv_ans, 32
srlv_ans:
	.word	19088743
	.word	79934113
	.word	0
	.word	31454240
	.word	8388607
	.word	4194304
	.word	0
	.word	2097151
	.section	.data.test,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	test, @object
	.size	test, 32
test:
	.word	305419896
	.word	-1737075662
	.word	0
	.word	-268824576
	.word	2147483647
	.word	-2147483648
	.word	51
	.word	-1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
