#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"quick-sort.c"
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
	.section	.text.partition,"ax",@progbits
	.align	2
	.globl	partition
	.hidden	partition
	.type	partition, @function
partition:
	slli	a3,a1,2
	add	t2,a0,a3
	mv	t1,a0
	lw	t0,0(t2)
	mv	a0,a2
	bge	a1,a2,.L16
	slli	a5,a2,2
	add	a5,t1,a5
	lw	a5,0(a5)
.L10:
	addi	a4,a0,-1
	slli	a4,a4,2
	add	a4,t1,a4
.L15:
	mv	a2,a4
	addi	a4,a4,-4
	bge	t0,a5,.L22
	addi	a0,a0,-1
	lw	a5,4(a4)
	bgt	a0,a1,.L15
	add	t2,t1,a3
	sw	a5,0(t2)
	mv	a0,a1
.L13:
	sw	a5,0(a2)
.L9:
	sw	t0,0(t2)
	ret
.L22:
	add	t2,t1,a3
	slli	a2,a0,2
	sw	a5,0(t2)
	add	a2,t1,a2
	bge	a1,a0,.L17
	addi	a4,a3,4
	add	a4,t1,a4
.L14:
	mv	t2,a4
	addi	a1,a1,1
	addi	a4,a4,4
	lw	a5,-4(a4)
	beq	a1,a0,.L13
	bge	t0,a5,.L14
	sw	a5,0(a2)
	bge	a1,a0,.L20
	slli	a3,a1,2
	j	.L10
.L16:
	mv	a0,a1
	sw	t0,0(t2)
	ret
.L17:
	mv	a0,a1
	j	.L13
.L20:
	slli	t2,a1,2
	add	t2,t1,t2
	mv	a0,a1
	j	.L9
	.size	partition, .-partition
	.section	.text.quick_sort,"ax",@progbits
	.align	2
	.globl	quick_sort
	.hidden	quick_sort
	.type	quick_sort, @function
quick_sort:
	addi	sp,sp,-80
	sw	ra,76(sp)
	sw	s0,72(sp)
	sw	s1,68(sp)
	sw	a2,40(sp)
	ble	a2,a1,.L23
	mv	s1,a0
	mv	s0,a1
.L24:
	lw	a2,40(sp)
	mv	a1,s0
	mv	a0,s1
	call	partition
	addi	a5,a0,-1
	sw	a0,44(sp)
	sw	a5,28(sp)
	ble	a5,s0,.L25
	mv	a5,s0
	mv	s0,s1
	mv	s1,a5
.L40:
	lw	a2,28(sp)
	mv	a1,s1
	mv	a0,s0
	call	partition
	addi	a5,a0,-1
	sw	a0,48(sp)
	sw	a5,32(sp)
	ble	a5,s1,.L26
	mv	a5,s1
	mv	s1,s0
	mv	s0,a5
.L39:
	lw	a2,32(sp)
	mv	a1,s0
	mv	a0,s1
	call	partition
	addi	a5,a0,-1
	sw	a0,52(sp)
	sw	a5,36(sp)
	ble	a5,s0,.L27
.L38:
	lw	a2,36(sp)
	mv	a1,s0
	mv	a0,s1
	call	partition
	addi	a5,a0,-1
	sw	a0,56(sp)
	sw	a5,0(sp)
	ble	a5,s0,.L28
	mv	a5,s0
	mv	s0,s1
	mv	s1,a5
.L37:
	lw	a2,0(sp)
	mv	a1,s1
	mv	a0,s0
	call	partition
	addi	a5,a0,-1
	sw	a0,4(sp)
	sw	a5,8(sp)
	ble	a5,s1,.L29
.L36:
	lw	a2,8(sp)
	mv	a1,s1
	mv	a0,s0
	call	partition
	addi	a5,a0,-1
	sw	a0,20(sp)
	sw	a5,24(sp)
	ble	a5,s1,.L30
.L35:
	lw	a2,24(sp)
	mv	a1,s1
	mv	a0,s0
	call	partition
	sw	a0,60(sp)
	addi	a4,a0,-1
	ble	a4,s1,.L31
	mv	a3,s0
.L34:
	mv	a2,a4
	mv	a0,a3
	mv	a1,s1
	sw	a4,16(sp)
	sw	a3,12(sp)
	call	partition
	addi	a5,a0,-1
	lw	a3,12(sp)
	lw	a4,16(sp)
	mv	s0,a0
	ble	a5,s1,.L32
	mv	a2,a3
	mv	s0,a2
	mv	a3,a0
.L33:
	mv	a2,a5
	mv	a1,s1
	mv	a0,s0
	sw	a3,64(sp)
	sw	a4,16(sp)
	sw	a5,12(sp)
	call	partition
	mv	t1,a0
	mv	a1,s1
	addi	a2,a0,-1
	mv	a0,s0
	addi	s1,t1,1
	call	quick_sort
	lw	a5,12(sp)
	lw	a4,16(sp)
	lw	a3,64(sp)
	bgt	a5,s1,.L33
	mv	a5,s0
	mv	s0,a3
	mv	a3,a5
.L32:
	addi	s1,s0,1
	bgt	a4,s1,.L34
	mv	s0,a3
.L31:
	lw	a5,60(sp)
	addi	s1,a5,1
	lw	a5,24(sp)
	bgt	a5,s1,.L35
.L30:
	lw	a5,20(sp)
	addi	s1,a5,1
	lw	a5,8(sp)
	bgt	a5,s1,.L36
.L29:
	lw	a5,4(sp)
	addi	s1,a5,1
	lw	a5,0(sp)
	bgt	a5,s1,.L37
	mv	s1,s0
.L28:
	lw	a5,56(sp)
	addi	s0,a5,1
	lw	a5,36(sp)
	bgt	a5,s0,.L38
.L27:
	lw	a5,52(sp)
	addi	s0,a5,1
	lw	a5,32(sp)
	bgt	a5,s0,.L39
	mv	s0,s1
.L26:
	lw	a5,48(sp)
	addi	s1,a5,1
	lw	a5,28(sp)
	bgt	a5,s1,.L40
	mv	s1,s0
.L25:
	lw	a5,44(sp)
	addi	s0,a5,1
	lw	a5,40(sp)
	blt	s0,a5,.L24
.L23:
	lw	ra,76(sp)
	lw	s0,72(sp)
	lw	s1,68(sp)
	addi	sp,sp,80
	jr	ra
	.size	quick_sort, .-quick_sort
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-16
	lla	a0,.LANCHOR0
	li	a2,19
	li	a1,0
	sw	s0,8(sp)
	sw	s1,4(sp)
	mv	s0,a0
	sw	ra,12(sp)
	call	quick_sort
	mv	a4,s0
	li	s1,0
.L53:
	lw	a0,0(a4)
	addi	a4,a4,4
	sw	a4,0(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	lw	a4,0(sp)
	bne	s1,a5,.L53
	li	a0,1
	call	check
	li	a2,19
	li	a1,0
	lla	a0,.LANCHOR0
	call	quick_sort
	li	s1,0
.L54:
	lw	a0,0(s0)
	addi	s0,s0,4
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	bne	s1,a5,.L54
	li	a0,1
	call	check
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.hidden	a
	.globl	a
	.section	.data.a,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	a, @object
	.size	a, 80
a:
	.word	2
	.word	12
	.word	14
	.word	6
	.word	13
	.word	15
	.word	16
	.word	10
	.word	0
	.word	18
	.word	11
	.word	19
	.word	9
	.word	1
	.word	7
	.word	5
	.word	4
	.word	3
	.word	8
	.word	17
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
