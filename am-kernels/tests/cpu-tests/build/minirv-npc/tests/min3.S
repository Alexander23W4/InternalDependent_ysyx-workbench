#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"min3.c"
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
	.section	.text.min3,"ax",@progbits
	.align	2
	.globl	min3
	.hidden	min3
	.type	min3, @function
min3:
	mv	a5,a0
	ble	a1,a2,.L9
	mv	a1,a2
.L9:
	mv	a0,a1
	ble	a1,a5,.L10
	mv	a0,a5
.L10:
	ret
	.size	min3, .-min3
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-36
	lla	a5,.LANCHOR0
	sw	ra,32(sp)
	sw	s0,28(sp)
	sw	s1,24(sp)
	sw	a5,20(sp)
	sw	zero,16(sp)
.L12:
	lw	a5,20(sp)
	lw	a5,0(a5)
	sw	a5,12(sp)
	lla	a5,.LANCHOR0
	sw	a5,4(sp)
	lw	a5,16(sp)
	sw	a5,8(sp)
.L18:
	lw	a5,4(sp)
	lw	a3,0(a5)
	lw	a5,12(sp)
	ble	a3,a5,.L16
	mv	a3,a5
.L16:
	lw	a5,8(sp)
	lla	s1,.LANCHOR0
	sw	a3,0(sp)
	slli	a4,a5,2
	lla	a5,.LANCHOR1
	add	s0,a5,a4
.L14:
	lw	a0,0(s1)
	lw	a5,0(sp)
	addi	s1,s1,4
	ble	a0,a5,.L13
	mv	a0,a5
.L13:
	lw	a4,0(s0)
	addi	s0,s0,4
	sub	a0,a0,a4
	seqz	a0,a0
	call	check
	lla	a5,.LANCHOR0+16
	bne	a5,s1,.L14
	lw	a5,4(sp)
	li	a0,1
	addi	s0,a5,4
	lw	a5,8(sp)
	sw	s0,4(sp)
	addi	a5,a5,4
	sw	a5,8(sp)
	call	check
	lla	a5,.LANCHOR0+16
	bne	s0,a5,.L18
	lw	a5,16(sp)
	li	a0,1
	addi	s0,a5,16
	sw	s0,16(sp)
	call	check
	lw	a5,20(sp)
	addi	a5,a5,4
	sw	a5,20(sp)
	li	a5,64
	bne	s0,a5,.L12
	li	a0,1
	call	check
	lw	ra,32(sp)
	lw	s0,28(sp)
	lw	s1,24(sp)
	li	a0,0
	addi	sp,sp,36
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
	.size	ans, 256
ans:
	.word	0
	.word	0
	.word	-2147483648
	.word	-1
	.word	0
	.word	0
	.word	-2147483648
	.word	-1
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-1
	.word	-1
	.word	-2147483648
	.word	-1
	.word	0
	.word	0
	.word	-2147483648
	.word	-1
	.word	0
	.word	2147483647
	.word	-2147483648
	.word	-1
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-1
	.word	-1
	.word	-2147483648
	.word	-1
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-1
	.word	-1
	.word	-2147483648
	.word	-1
	.word	-1
	.word	-1
	.word	-2147483648
	.word	-1
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-2147483648
	.word	-1
	.word	-1
	.word	-2147483648
	.word	-1
	.section	.data.test_data,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	test_data, @object
	.size	test_data, 16
test_data:
	.word	0
	.word	2147483647
	.word	-2147483648
	.word	-1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
