#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"hello-str.c"
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
	.section	.rodata.main.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"Hello world!\n"
	.align	2
.LC1:
	.string	"%s"
	.align	2
.LC2:
	.string	"%d + %d = %d\n"
	.align	2
.LC3:
	.string	"1 + 1 = 2\n"
	.align	2
.LC4:
	.string	"2 + 10 = 12\n"
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-12
	sw	s0,4(sp)
	lla	s0,.LANCHOR0
	lla	a2,.LC0
	lla	a1,.LC1
	mv	a0,s0
	sw	ra,8(sp)
	call	sprintf
	lla	a1,.LC0
	mv	a0,s0
	call	strcmp
	seqz	a0,a0
	call	check
	li	a4,2
	li	a3,1
	li	a2,1
	lla	a1,.LC2
	mv	a0,s0
	call	sprintf
	lla	a1,.LC3
	mv	a0,s0
	call	strcmp
	seqz	a0,a0
	call	check
	li	a4,12
	li	a3,10
	li	a2,2
	lla	a1,.LC2
	mv	a0,s0
	call	sprintf
	lla	a1,.LC4
	mv	a0,s0
	call	strcmp
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	buf
	.globl	buf
	.section	.bss.buf,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	buf, @object
	.size	buf, 128
buf:
	.zero	128
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
