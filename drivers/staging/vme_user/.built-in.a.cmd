cmd_drivers/staging/vme_user/built-in.a := rm -f drivers/staging/vme_user/built-in.a;  printf "drivers/staging/vme_user/%s " vme.o | xargs ar cDPrST drivers/staging/vme_user/built-in.a
