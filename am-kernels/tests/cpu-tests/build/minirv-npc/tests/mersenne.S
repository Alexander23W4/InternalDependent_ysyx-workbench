#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"mersenne.c"
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
	.globl	__modsi3
	.globl	__mulsi3
	.section	.text.isPrime,"ax",@progbits
	.align	2
	.globl	isPrime
	.hidden	isPrime
	.type	isPrime, @function
isPrime:
	addi	sp,sp,-16
	sw	s0,8(sp)
	sw	ra,12(sp)
	sw	s1,4(sp)
	andi	a5,a0,1
	mv	s0,a0
	beq	a5,zero,.L28
	li	a1,3
	call	__modsi3
	beq	a0,zero,.L11
	li	a5,24
	ble	s0,a5,.L14
	li	a1,5
	mv	a0,s0
	call	__modsi3
	mv	a5,a0
	beq	a0,zero,.L8
	li	a1,7
	mv	a0,s0
	call	__modsi3
	mv	a5,a0
	beq	a0,zero,.L8
	li	s1,5
	j	.L12
.L13:
	call	__modsi3
	lw	a4,0(sp)
	mv	a5,a0
	mv	a0,s0
	addi	a1,a4,8
	beq	a5,zero,.L8
	call	__modsi3
	mv	a5,a0
	beq	a0,zero,.L8
.L12:
	sw	s1,0(sp)
	addi	s1,s1,6
	mv	a1,s1
	mv	a0,s1
	call	__mulsi3
	mv	a5,a0
	mv	a1,s1
	mv	a0,s0
	bge	s0,a5,.L13
.L14:
	lw	ra,12(sp)
	lw	s0,8(sp)
	li	a5,1
	lw	s1,4(sp)
	mv	a0,a5
	addi	sp,sp,16
	jr	ra
.L11:
	addi	s0,s0,-3
	seqz	a5,s0
.L8:
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	mv	a0,a5
	addi	sp,sp,16
	jr	ra
.L28:
	lw	ra,12(sp)
	lw	s0,8(sp)
	addi	a5,a0,-2
	seqz	a5,a5
	lw	s1,4(sp)
	mv	a0,a5
	addi	sp,sp,16
	jr	ra
	.size	isPrime, .-isPrime
	.globl	__umodsi3
	.globl	__muldi3
	.globl	__moddi3
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-24
	sw	s0,16(sp)
	sw	s1,12(sp)
	sw	ra,20(sp)
	li	s0,11
	li	s1,929
.L31:
	addi	a1,s0,2
	li	a0,929
	beq	s0,s1,.L38
	call	__modsi3
	addi	s0,s0,6
	mv	a5,a0
	mv	a1,s0
	mv	a0,s0
	beq	a5,zero,.L38
	call	__mulsi3
	ble	a0,s1,.L31
	li	a4,929
	li	a5,22
	sw	a4,4(sp)
.L32:
	lw	a4,4(sp)
	addi	a5,a5,-1
	slli	a4,a4,1
	sw	a4,4(sp)
	bne	a5,zero,.L32
	li	s0,1859
	sw	zero,0(sp)
.L36:
	lw	s1,4(sp)
	sw	s0,8(sp)
	li	a2,1
.L35:
	srai	a3,a2,31
	mv	a0,a2
	mv	a1,a3
	call	__muldi3
	lw	a3,0(sp)
	mv	a2,s0
	call	__moddi3
	mv	a2,a0
	bge	s1,zero,.L33
	slli	a2,a0,1
.L33:
	slli	s1,s1,1
	ble	a2,s0,.L34
	sub	a2,a2,s0
.L34:
	bne	s1,zero,.L35
	lw	a5,0(sp)
	addi	a4,s0,1858
	sltu	s0,a4,s0
	add	a5,s0,a5
	sw	a5,0(sp)
	li	a5,1
	mv	s0,a4
	bne	a2,a5,.L36
	lw	a5,8(sp)
	li	a4,-12288
	addi	a4,a4,-719
	add	a0,a5,a4
	seqz	a0,a0
	call	check
	j	.L29
.L38:
	li	s1,1
.L29:
	lw	ra,20(sp)
	lw	s0,16(sp)
	mv	a0,s1
	lw	s1,12(sp)
	addi	sp,sp,24
	jr	ra
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
