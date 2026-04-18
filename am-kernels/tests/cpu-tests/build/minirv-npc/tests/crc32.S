#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"crc32.c"
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
	.section	.text.rc_crc32,"ax",@progbits
	.align	2
	.globl	rc_crc32
	.hidden	rc_crc32
	.type	rc_crc32, @function
rc_crc32:
	addi	sp,sp,-8
	sw	s0,4(sp)
	lla	s0,.LANCHOR0
	lw	t1,0(s0)
	sw	s1,0(sp)
	bne	t1,zero,.L9
	li	t0,-306675712
	lla	t2,.LANCHOR1
	addi	t0,t0,800
	li	s1,256
.L12:
	mv	a5,t1
	li	a4,8
.L11:
	andi	a3,a5,1
	addi	a4,a4,-1
	srli	a5,a5,1
	beq	a3,zero,.L10
	xor	a5,a5,t0
.L10:
	bne	a4,zero,.L11
	sw	a5,0(t2)
	addi	t1,t1,1
	addi	t2,t2,4
	bne	t1,s1,.L12
	li	a5,1
	sw	a5,0(s0)
.L9:
	add	a2,a1,a2
	not	a4,a0
	bgeu	a1,a2,.L8
	lla	a0,.LANCHOR1
.L14:
	lbu	a3,0(a1)
	andi	a5,a4,255
	addi	a1,a1,1
	xor	a5,a5,a3
	slli	a5,a5,2
	add	a5,a0,a5
	lw	a5,0(a5)
	srli	a4,a4,8
	xor	a4,a4,a5
	bne	a2,a1,.L14
	not	a0,a4
.L8:
	lw	s0,4(sp)
	lw	s1,0(sp)
	addi	sp,sp,8
	jr	ra
	.size	rc_crc32, .-rc_crc32
	.section	.rodata.main.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"The quick brown fox jumps over the lazy dog"
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-12
	li	a2,43
	lla	a1,.LC0
	li	a0,0
	sw	ra,8(sp)
	call	rc_crc32
	li	a5,-1095737344
	addi	a5,a5,-825
	add	a0,a0,a5
	snez	a0,a0
	call	check
	lw	ra,8(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.section	.bss.table.0,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	table.0, @object
	.size	table.0, 1024
table.0:
	.zero	1024
	.section	.sbss.have_table.1,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	have_table.1, @object
	.size	have_table.1, 4
have_table.1:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
