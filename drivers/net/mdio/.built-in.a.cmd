cmd_drivers/net/mdio/built-in.a := rm -f drivers/net/mdio/built-in.a;  printf "drivers/net/mdio/%s " acpi_mdio.o fwnode_mdio.o | xargs ar cDPrST drivers/net/mdio/built-in.a
