	.file	"main.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d"
.LC1:
	.string	"%d%c"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	xorl	%r12d, %r12d
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	leaq	.LC0(%rip), %rbx
	subq	$456, %rsp
	.cfi_def_cfa_offset 512
	movq	%fs:40, %rax
	movq	%rax, 440(%rsp)
	xorl	%eax, %eax
	leaq	28(%rsp), %rbp
	.p2align 4,,10
	.p2align 3
.L4:
	xorl	%eax, %eax
	movq	%rbp, %rsi
	movq	%rbx, %rdi
	call	__isoc99_scanf@PLT
	cmpl	$1, %eax
	jne	.L2
	movl	28(%rsp), %edx
	movslq	%r12d, %rax
	addl	$1, %r12d
	movl	%edx, 32(%rsp,%rax,4)
.L2:
	movq	stdin(%rip), %rdi
	call	getc@PLT
	cmpb	$10, %al
	je	.L3
	cmpb	$-1, %al
	je	.L3
	cmpl	$100, %r12d
	jne	.L4
.L5:
	leaq	32(%rsp), %r15
	movl	%r12d, %esi
	leal	-1(%r12), %r14d
	xorl	%ebx, %ebx
	movq	%r15, %rdi
	leaq	.LC1(%rip), %r13
	movl	$32, %ebp
	call	asmSort@PLT
	movl	%eax, 12(%rsp)
	.p2align 4,,10
	.p2align 3
.L8:
	cmpl	%ebx, %r14d
	movl	$10, %ecx
	movl	(%r15,%rbx,4), %edx
	movq	%r13, %rsi
	cmovne	%ebp, %ecx
	movl	$1, %edi
	xorl	%eax, %eax
	addq	$1, %rbx
	call	__printf_chk@PLT
	cmpl	%ebx, %r12d
	jg	.L8
	movl	12(%rsp), %r12d
	jmp	.L1
.L3:
	testl	%r12d, %r12d
	jne	.L5
.L1:
	movq	440(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L18
	addq	$456, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movl	%r12d, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L18:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE23:
	.size	main, .-main
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
