cmd_drivers/clocksource/built-in.a := rm -f drivers/clocksource/built-in.a;  printf "drivers/clocksource/%s " acpi_pm.o i8253.o numachip.o | xargs ar cDPrST drivers/clocksource/built-in.a
