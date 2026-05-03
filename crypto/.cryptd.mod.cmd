cmd_crypto/cryptd.mod := printf '%s\n'   cryptd.o | awk '!x[$$0]++ { print("crypto/"$$0) }' > crypto/cryptd.mod
