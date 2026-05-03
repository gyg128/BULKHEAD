cmd_lib/bch.mod := printf '%s\n'   bch.o | awk '!x[$$0]++ { print("lib/"$$0) }' > lib/bch.mod
