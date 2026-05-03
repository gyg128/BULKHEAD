cmd_security/lockdown/built-in.a := rm -f security/lockdown/built-in.a;  printf "security/lockdown/%s " lockdown.o | xargs ar cDPrST security/lockdown/built-in.a
