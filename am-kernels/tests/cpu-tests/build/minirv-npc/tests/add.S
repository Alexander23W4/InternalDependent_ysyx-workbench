#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"add.c"
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
	.section	.text.add,"ax",@progbits
	.align	2
	.globl	add
	.hidden	add
	.type	add, @function
add:
	add	a0,a0,a1
	ret
	.size	add, .-add
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-28
	lla	a5,.LANCHOR1
	sw	a5,8(sp)
	lla	a5,.LANCHOR0
	sw	ra,24(sp)
	sw	s0,20(sp)
	sw	s1,16(sp)
	sw	a5,4(sp)
	sw	zero,12(sp)
.L10:
	lw	a5,4(sp)
	lw	s0,8(sp)
	lla	s1,.LANCHOR0
	lw	a5,0(a5)
	sw	a5,0(sp)
.L11:
	lw	a5,0(sp)
	lw	a0,0(s1)
	lw	a3,0(s0)
	addi	s1,s1,4
	add	a0,a5,a0
	sub	a0,a0,a3
	seqz	a0,a0
	call	check
	lla	a5,.LANCHOR0+32
	addi	s0,s0,4
	bne	a5,s1,.L11
	lw	a5,12(sp)
	li	a0,1
	addi	s0,a5,8
	sw	s0,12(sp)
	call	check
	lw	a5,4(sp)
	addi	a5,a5,4
	sw	a5,4(sp)
	lw	a5,8(sp)
	addi	a5,a5,32
	sw	a5,8(sp)
	li	a5,64
	bne	s0,a5,.L10
	li	a0,1
	call	check
	lw	ra,24(sp)
	lw	s0,20(sp)
	lw	s1,16(sp)
	li	a0,0
	addi	sp,sp,28
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
	.word	1
	.word	2
	.word	2147483647
	.word	-2147483648
	.word	-2147483647
	.word	-2
	.word	-1
	.word	1
	.word	2
	.word	3
	.word	-2147483648
	.word	-2147483647
	.word	-2147483646
	.word	-1
	.word	0
	.word	2
	.word	3
	.word	4
	.word	-2147483647
	.word	-2147483646
	.word	-2147483645
	.word	0
	.word	1
	.word	2147483647
	.word	-2147483648
	.word	-2147483647
	.word	-2
	.word	-1
	.word	0
	.word	2147483645
	.word	2147483646
	.word	-2147483648
	.word	-2147483647
	.word	-2147483646
	.word	-1
	.word	0
	.word	1
	.word	2147483646
	.word	2147483647
	.word	-2147483647
	.word	-2147483646
	.word	-2147483645
	.word	0
	.word	1
	.word	2
	.word	2147483647
	.word	-2147483648
	.word	-2
	.word	-1
	.word	0
	.word	2147483645
	.word	2147483646
	.word	2147483647
	.word	-4
	.word	-3
	.word	-1
	.word	0
	.word	1
	.word	2147483646
	.word	2147483647
	.word	-2147483648
	.word	-3
	.word	-2
	.section	.data.test_data,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	test_data, @object
	.size	test_data, 32
test_data:
	.word	0
	.word	1
	.word	2
	.word	2147483647
	.word	-2147483648
	.word	-2147483647
	.word	-2
	.word	-1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
