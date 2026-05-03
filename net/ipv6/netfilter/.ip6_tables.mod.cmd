cmd_net/ipv6/netfilter/ip6_tables.mod := printf '%s\n'   ip6_tables.o | awk '!x[$$0]++ { print("net/ipv6/netfilter/"$$0) }' > net/ipv6/netfilter/ip6_tables.mod
