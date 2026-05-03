cmd_drivers/acpi/numa/built-in.a := rm -f drivers/acpi/numa/built-in.a;  printf "drivers/acpi/numa/%s " srat.o hmat.o | xargs ar cDPrST drivers/acpi/numa/built-in.a
