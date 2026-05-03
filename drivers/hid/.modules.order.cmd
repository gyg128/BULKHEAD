cmd_drivers/hid/modules.order := {   echo drivers/hid/hid.ko;   echo drivers/hid/hid-generic.ko;   cat drivers/hid/usbhid/modules.order; :; } > drivers/hid/modules.order
