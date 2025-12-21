	.file	"sorting.c"
	.text
	.p2align 4
	.globl	asmSort
	.type	asmSort, @function
asmSort:
.LFB39:
	.cfi_startproc
	endbr64
	cmpl	$1, %esi
	jle	.L7
	leal	-1(%rsi), %r11d
	xorl	%r9d, %r9d
	xorl	%r10d, %r10d
	.p2align 4,,10
	.p2align 3
.L6:
	movl	4(%rdi,%r9,4), %esi
	movq	%r9, %rax
	xorl	%r8d, %r8d
	.p2align 4,,10
	.p2align 3
.L3:
	movl	(%rdi,%rax,4), %edx
	movl	%eax, %ecx
	cmpl	%esi, %edx
	jle	.L11
	movl	%edx, 4(%rdi,%rax,4)
	subq	$1, %rax
	movl	$1, %r8d
	cmpl	$-1, %eax
	jne	.L3
	movq	%rdi, %rax
.L4:
	addq	$1, %r9
	movl	%esi, (%rax)
	addl	%r8d, %r10d
	cmpq	%r9, %r11
	jne	.L6
	movl	%r10d, %eax
	ret
	.p2align 4,,10
	.p2align 3
.L11:
	addl	$1, %ecx
	movslq	%ecx, %rcx
	leaq	(%rdi,%rcx,4), %rax
	jmp	.L4
.L7:
	xorl	%r10d, %r10d
	movl	%r10d, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	asmSort, .-asmSort
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
