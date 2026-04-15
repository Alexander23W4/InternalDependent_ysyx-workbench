#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"goldbach.c"
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
	.section	.text.is_prime,"ax",@progbits
	.align	2
	.globl	is_prime
	.hidden	is_prime
	.type	is_prime, @function
is_prime:
	li	a5,1
	ble	a0,a5,.L12
	addi	sp,sp,-12
	sw	s1,0(sp)
	sw	ra,8(sp)
	sw	s0,4(sp)
	li	a5,2
	mv	s1,a0
	beq	a0,a5,.L13
	andi	a5,a0,1
	beq	a5,zero,.L14
	li	s0,2
	j	.L10
.L11:
	call	__modsi3
	beq	a0,zero,.L8
.L10:
	addi	s0,s0,1
	mv	a0,s1
	mv	a1,s0
	bne	s1,s0,.L11
.L13:
	li	a0,1
.L8:
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	addi	sp,sp,12
	jr	ra
.L12:
	li	a0,0
	ret
.L14:
	li	a0,0
	j	.L8
	.size	is_prime, .-is_prime
	.globl	__umodsi3
	.section	.text.goldbach,"ax",@progbits
	.align	2
	.globl	goldbach
	.hidden	goldbach
	.type	goldbach, @function
goldbach:
	addi	sp,sp,-24
	sw	ra,20(sp)
	sw	s0,16(sp)
	sw	s1,12(sp)
	sw	a0,8(sp)
	li	a5,2
	ble	a0,a5,.L32
	addi	a5,a0,-2
	sw	a5,4(sp)
	li	s1,2
.L24:
	li	a5,2
	beq	s1,a5,.L27
	andi	a5,s1,1
	beq	a5,zero,.L25
	li	s0,2
	j	.L29
.L26:
	call	__modsi3
	beq	a0,zero,.L25
.L29:
	addi	s0,s0,1
	mv	a0,s1
	mv	a1,s0
	bne	s0,s1,.L26
.L27:
	lw	a5,4(sp)
	li	a4,1
	beq	a5,a4,.L25
	li	a4,2
	beq	a5,a4,.L33
	andi	a5,a5,1
	beq	a5,zero,.L25
	li	a5,2
	j	.L30
.L28:
	sw	a5,0(sp)
	call	__modsi3
	lw	a5,0(sp)
	beq	a0,zero,.L25
.L30:
	lw	a4,4(sp)
	addi	a5,a5,1
	mv	a1,a5
	mv	a0,a4
	bne	a4,a5,.L28
.L33:
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	li	a0,1
	addi	sp,sp,24
	jr	ra
.L25:
	lw	a5,4(sp)
	addi	s1,s1,1
	addi	a5,a5,-1
	sw	a5,4(sp)
	lw	a5,8(sp)
	bne	a5,s1,.L24
.L32:
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	li	a0,0
	addi	sp,sp,24
	jr	ra
	.size	goldbach, .-goldbach
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
	li	s0,4
	li	s1,32
.L48:
	mv	a0,s0
	call	goldbach
	addi	a0,a0,-1
	addi	s0,s0,2
	seqz	a0,a0
	call	check
	bne	s0,s1,.L48
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
