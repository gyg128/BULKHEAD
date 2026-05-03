cmd_security/smack/built-in.a := rm -f security/smack/built-in.a;  printf "security/smack/%s " smack_lsm.o smack_access.o smackfs.o smack_netfilter.o | xargs ar cDPrST security/smack/built-in.a
