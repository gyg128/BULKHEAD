cmd_fs/efivarfs/built-in.a := rm -f fs/efivarfs/built-in.a;  printf "fs/efivarfs/%s " inode.o file.o super.o vars.o | xargs ar cDPrST fs/efivarfs/built-in.a
