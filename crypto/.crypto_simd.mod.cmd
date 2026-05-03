cmd_crypto/crypto_simd.mod := printf '%s\n'   simd.o | awk '!x[$$0]++ { print("crypto/"$$0) }' > crypto/crypto_simd.mod
