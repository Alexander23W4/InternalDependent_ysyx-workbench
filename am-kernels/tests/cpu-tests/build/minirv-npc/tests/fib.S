#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"fib.c"
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
	sw	s1,0(sp)
	sw	ra,8(sp)
	lla	s0,.LANCHOR0
	lla	s1,.LANCHOR1+8
.L9:
	lw	a3,0(s0)
	lw	a5,4(s0)
	lw	a0,0(s1)
	addi	s0,s0,4
	add	a5,a5,a3
	sub	a0,a0,a5
	seqz	a0,a0
	sw	a5,4(s0)
	call	check
	lla	a5,.LANCHOR0+152
	addi	s1,s1,4
	bne	s0,a5,.L9
	li	a0,1
	call	check
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.hidden	fib
	.globl	fib
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 160
ans:
	.word	1
	.word	1
	.word	2
	.word	3
	.word	5
	.word	8
	.word	13
	.word	21
	.word	34
	.word	55
	.word	89
	.word	144
	.word	233
	.word	377
	.word	610
	.word	987
	.word	1597
	.word	2584
	.word	4181
	.word	6765
	.word	10946
	.word	17711
	.word	28657
	.word	46368
	.word	75025
	.word	121393
	.word	196418
	.word	317811
	.word	514229
	.word	832040
	.word	1346269
	.word	2178309
	.word	3524578
	.word	5702887
	.word	9227465
	.word	14930352
	.word	24157817
	.word	39088169
	.word	63245986
	.word	102334155
	.section	.data.fib,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	fib, @object
	.size	fib, 160
fib:
	.word	1
	.word	1
	.zero	152
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
