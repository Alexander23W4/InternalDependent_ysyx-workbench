#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"string.c"
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
	sw	s0,4(sp)
	lla	s0,.LANCHOR0
	lw	a1,8(s0)
	lw	a0,0(s0)
	sw	ra,8(sp)
	sw	s1,0(sp)
	call	strcmp
	seqz	a0,a0
	call	check
	lw	a1,4(s0)
	lw	a0,0(s0)
	lla	s1,.LANCHOR2
	call	strcmp
	srli	a0,a0,31
	call	check
	lw	a1,4(s0)
	lw	a0,0(s0)
	addi	a1,a1,1
	addi	a0,a0,1
	call	strcmp
	srli	a0,a0,31
	call	check
	lw	a1,4(s0)
	lw	a0,0(s0)
	addi	a1,a1,2
	addi	a0,a0,2
	call	strcmp
	srli	a0,a0,31
	call	check
	lw	a1,4(s0)
	lw	a0,0(s0)
	addi	a1,a1,3
	addi	a0,a0,3
	call	strcmp
	srli	a0,a0,31
	call	check
	lla	a1,.LANCHOR1
	mv	a0,s1
	call	strcpy
	lw	a1,12(s0)
	call	strcat
	lw	a1,16(s0)
	call	strcmp
	seqz	a0,a0
	call	check
	li	a2,5
	li	a1,35
	mv	a0,s1
	call	memset
	lw	a1,20(s0)
	li	a2,5
	call	memcmp
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	str
	.globl	str
	.hidden	str1
	.globl	str1
	.hidden	s
	.globl	s
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
	.align	2
.LC1:
	.string	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"
	.align	2
.LC2:
	.string	", World!\n"
	.align	2
.LC3:
	.string	"Hello, World!\n"
	.align	2
.LC4:
	.string	"#####"
	.section	.bss.str,"aw",@nobits
	.align	2
	.set	.LANCHOR2,. + 0
	.type	str, @object
	.size	str, 20
str:
	.zero	20
	.section	.data.s,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	s, @object
	.size	s, 24
s:
	.word	.LC0
	.word	.LC1
	.word	.LC0
	.word	.LC2
	.word	.LC3
	.word	.LC4
	.section	.sdata.str1,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	str1, @object
	.size	str1, 6
str1:
	.string	"Hello"
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
