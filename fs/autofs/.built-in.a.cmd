cmd_fs/autofs/built-in.a := rm -f fs/autofs/built-in.a;  printf "fs/autofs/%s " init.o inode.o root.o symlink.o waitq.o expire.o dev-ioctl.o | xargs ar cDPrST fs/autofs/built-in.a
