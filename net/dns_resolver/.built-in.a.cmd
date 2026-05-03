cmd_net/dns_resolver/built-in.a := rm -f net/dns_resolver/built-in.a;  printf "net/dns_resolver/%s " dns_key.o dns_query.o | xargs ar cDPrST net/dns_resolver/built-in.a
