cmd_fs/fuse/built-in.a := rm -f fs/fuse/built-in.a;  printf "fs/fuse/%s " dev.o dir.o file.o inode.o control.o xattr.o acl.o readdir.o ioctl.o | xargs ar cDPrST fs/fuse/built-in.a
