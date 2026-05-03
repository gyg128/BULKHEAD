cmd_security/safesetid/built-in.a := rm -f security/safesetid/built-in.a;  printf "security/safesetid/%s " lsm.o securityfs.o | xargs ar cDPrST security/safesetid/built-in.a
