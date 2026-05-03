	.text
	.file	"bounds.c"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
# %bb.0:
	callq	__fentry__
	pushq	%rbp
	movq	%rsp, %rbp
	andq	$-8, %rsp
	#APP

	.ascii	"->NR_PAGEFLAGS $27 __NR_PAGEFLAGS"
	#NO_APP
	#APP

	.ascii	"->MAX_NR_ZONES $5 __MAX_NR_ZONES"
	#NO_APP
	#APP

	.ascii	"->NR_CPUS_BITS $13 ilog2(CONFIG_NR_CPUS)"
	#NO_APP
	#APP

	.ascii	"->SPINLOCK_SIZE $64 sizeof(spinlock_t)"
	#NO_APP
	#APP

	.ascii	"->LRU_GEN_WIDTH $0 0"
	#NO_APP
	#APP

	.ascii	"->__LRU_REFS_WIDTH $0 0"
	#NO_APP
	xorl	%eax, %eax
	movq	%rbp, %rsp
	popq	%rbp
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.ident	"Ubuntu clang version 14.0.0-1ubuntu1.1"
	.section	".note.GNU-stack","",@progbits
	.addrsig
