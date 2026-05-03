cmd_arch/x86/crypto/crct10dif-pclmul.mod := printf '%s\n'   crct10dif-pcl-asm_64.o crct10dif-pclmul_glue.o | awk '!x[$$0]++ { print("arch/x86/crypto/"$$0) }' > arch/x86/crypto/crct10dif-pclmul.mod
