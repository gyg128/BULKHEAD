cmd_arch/x86/crypto/crc32-pclmul.mod := printf '%s\n'   crc32-pclmul_asm.o crc32-pclmul_glue.o | awk '!x[$$0]++ { print("arch/x86/crypto/"$$0) }' > arch/x86/crypto/crc32-pclmul.mod
