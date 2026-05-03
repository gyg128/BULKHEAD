cmd_drivers/pwm/built-in.a := rm -f drivers/pwm/built-in.a;  printf "drivers/pwm/%s " core.o sysfs.o pwm-crc.o pwm-lpss.o pwm-lpss-pci.o pwm-lpss-platform.o | xargs ar cDPrST drivers/pwm/built-in.a
