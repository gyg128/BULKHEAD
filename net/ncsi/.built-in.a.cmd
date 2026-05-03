cmd_net/ncsi/built-in.a := rm -f net/ncsi/built-in.a;  printf "net/ncsi/%s " ncsi-cmd.o ncsi-rsp.o ncsi-aen.o ncsi-manage.o ncsi-netlink.o | xargs ar cDPrST net/ncsi/built-in.a
