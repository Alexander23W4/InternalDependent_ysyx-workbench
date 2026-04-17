#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"recursion.c"
	.option nopic
	.text
	.globl	__divsi3
	.section	.text.f0,"ax",@progbits
	.align	2
	.globl	f0
	.hidden	f0
	.type	f0, @function
f0:
	lla	a4,.LANCHOR0
	lw	a3,0(a4)
	mv	a5,a1
	bge	a3,a1,.L2
	sw	a1,0(a4)
.L2:
	lla	a3,.LANCHOR1
	lw	a4,0(a3)
	addi	a4,a4,1
	sw	a4,0(a3)
	ble	a0,zero,.L3
	addi	sp,sp,-12
	li	a1,3
	sw	s0,4(sp)
	sw	ra,8(sp)
	addi	s0,a5,1
	call	__divsi3
	mv	a1,s0
	lw	s0,4(sp)
	lw	ra,8(sp)
	la a5, .LANCHOR2+12; lw a5, 0(a5);
	addi	sp,sp,12
	jr	a5
.L3:
	li	a0,1
	ret
	.size	f0, .-f0
	.section	.text.f1,"ax",@progbits
	.align	2
	.globl	f1
	.hidden	f1
	.type	f1, @function
f1:
	lla	a5,.LANCHOR0
	lw	a4,0(a5)
	bge	a4,a1,.L9
	sw	a1,0(a5)
.L9:
	lla	a4,.LANCHOR1
	lw	a5,0(a4)
	addi	a5,a5,1
	sw	a5,0(a4)
	ble	a0,zero,.L10
	addi	a1,a1,1
	addi	a0,a0,-1
	la a5, .LANCHOR2; lw a5, 0(a5);
	jr	a5
.L10:
	li	a0,1
	ret
	.size	f1, .-f1
	.section	.text.f2,"ax",@progbits
	.align	2
	.globl	f2
	.hidden	f2
	.type	f2, @function
f2:
	lla	a4,.LANCHOR0
	lw	a3,0(a4)
	mv	a5,a0
	bge	a3,a1,.L12
	sw	a1,0(a4)
.L12:
	lla	a3,.LANCHOR1
	lw	a4,0(a3)
	li	a0,1
	addi	a4,a4,1
	sw	a4,0(a3)
	ble	a5,zero,.L16
	addi	sp,sp,-12
	sw	ra,8(sp)
	mv	a0,a5
	addi	a1,a1,1
	la a5, .LANCHOR2+4; lw a5, 0(a5);
	jalr	a5
	lw	ra,8(sp)
	addi	a0,a0,9
	addi	sp,sp,12
	jr	ra
.L16:
	ret
	.size	f2, .-f2
	.section	.text.f3,"ax",@progbits
	.align	2
	.globl	f3
	.hidden	f3
	.type	f3, @function
f3:
	lla	a4,.LANCHOR0
	lw	a3,0(a4)
	mv	a5,a0
	bge	a3,a1,.L20
	sw	a1,0(a4)
.L20:
	lla	a3,.LANCHOR1
	lw	a4,0(a3)
	li	a0,1
	addi	a4,a4,1
	sw	a4,0(a3)
	ble	a5,zero,.L24
	lla	a4,.LANCHOR2
	addi	sp,sp,-16
	lw	a3,8(a4)
	sw	s0,8(sp)
	sw	s1,4(sp)
	srai	s0,a5,1
	addi	s1,a1,1
	sw	ra,12(sp)
	mv	a1,s1
	mv	a0,s0
	jalr	a3
	lla	a4,.LANCHOR2
	lw	a5,8(a4)
	sw	a0,0(sp)
	mv	a1,s1
	mv	a0,s0
	jalr	a5
	lw	a4,0(sp)
	lw	ra,12(sp)
	lw	s0,8(sp)
	slli	a5,a4,1
	add	a5,a5,a4
	slli	a0,a0,1
	lw	s1,4(sp)
	add	a0,a5,a0
	addi	sp,sp,16
	jr	ra
.L24:
	ret
	.size	f3, .-f3
	.section	.text.check,"ax",@progbits
	.align	2
	.globl	check
	.hidden	check
	.type	check, @function
check:
	beq	a0,zero,.L32
	ret
.L32:
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
	li	a0,16384
	sw	ra,8(sp)
	sw	s0,4(sp)
	li	a1,0
	la a5, .LANCHOR2; lw a5, 0(a5);
	addi	a0,a0,-2013
	jalr	a5
	lla	s0,.LANCHOR3
	lw	a5,0(s0)
	sub	a0,a5,a0
	seqz	a0,a0
	call	check
	lw	a0,4(s0)
	la a5, .LANCHOR1; lw a5, 0(a5);
	sub	a0,a0,a5
	seqz	a0,a0
	call	check
	lw	a0,8(s0)
	la a5, .LANCHOR0; lw a5, 0(a5);
	sub	a0,a0,a5
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.hidden	lvl
	.globl	lvl
	.hidden	rec
	.globl	rec
	.hidden	func
	.globl	func
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR3,. + 0
	.type	ans, @object
	.size	ans, 12
ans:
	.word	38270
	.word	218
	.word	20
	.section	.data.func,"aw"
	.align	2
	.set	.LANCHOR2,. + 0
	.type	func, @object
	.size	func, 16
func:
	.word	f0
	.word	f1
	.word	f2
	.word	f3
	.section	.sbss.lvl,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	lvl, @object
	.size	lvl, 4
lvl:
	.zero	4
	.section	.sbss.rec,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	rec, @object
	.size	rec, 4
rec:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
