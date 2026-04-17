#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"mul-longlong.c"
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
	.globl	__muldi3
	.section	.text.mul,"ax",@progbits
	.align	2
	.globl	mul
	.hidden	mul
	.type	mul, @function
mul:
	addi	sp,sp,-12
	sw	ra,8(sp)
	call	__muldi3
	lw	ra,8(sp)
	addi	sp,sp,12
	jr	ra
	.size	mul, .-mul
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-32
	lla	a5,.LANCHOR0
	sw	zero,8(sp)
	sw	a5,16(sp)
	lw	a5,8(sp)
	sw	ra,28(sp)
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	zero,12(sp)
	li	a4,4
	beq	a5,a4,.L21
.L15:
	lw	s1,16(sp)
	lw	a5,12(sp)
	lw	a0,0(s1)
	slli	a4,a5,3
	lla	a5,.LANCHOR1
	add	s0,a5,a4
	mv	a5,s0
	srai	a1,a0,31
	mv	s0,s1
	mv	a2,a0
	sw	a1,4(sp)
	mv	s1,a5
.L13:
	lw	a3,4(sp)
	sw	a2,0(sp)
	addi	s0,s0,4
	call	__muldi3
	lw	a5,0(s1)
	lw	a3,4(s1)
	addi	s1,s1,8
	xor	a5,a5,a0
	xor	a3,a3,a1
	or	a5,a5,a3
	seqz	a0,a5
	call	check
	lla	a5,.LANCHOR0+16
	beq	a5,s0,.L12
	lw	a0,0(s0)
	lw	a2,0(sp)
	srai	a1,a0,31
	j	.L13
.L12:
	lw	a5,12(sp)
	lw	s0,8(sp)
	li	a0,1
	addi	a5,a5,4
	sub	a5,a5,s0
	sw	a5,12(sp)
	call	check
	li	a5,3
	beq	s0,a5,.L14
.L17:
	lw	a5,8(sp)
	li	a4,4
	addi	a5,a5,1
	sw	a5,8(sp)
	lw	a5,16(sp)
	addi	a5,a5,4
	sw	a5,16(sp)
	lw	a5,8(sp)
	bne	a5,a4,.L15
.L21:
	li	a0,1
	call	check
	j	.L17
.L14:
	li	a0,1
	call	check
	lw	ra,28(sp)
	lw	s0,24(sp)
	lw	s1,20(sp)
	li	a0,0
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.hidden	test_data
	.globl	test_data
	.section	.data.ans,"aw"
	.align	3
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 80
ans:
	.word	-619046684
	.word	433232569
	.word	985860238
	.word	-367683475
	.word	-66211274
	.word	642378112
	.word	172653872
	.word	-95665190
	.word	743878969
	.word	312052110
	.word	171023973
	.word	-545184811
	.word	1276501352
	.word	81190824
	.word	-1639753823
	.word	952489883
	.word	519848520
	.word	-141848117
	.word	2145373248
	.word	21124516
	.section	.data.test_data,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	test_data, @object
	.size	test_data, 16
test_data:
	.word	-1364082006
	.word	1157693227
	.word	-2022600529
	.word	301212728
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
