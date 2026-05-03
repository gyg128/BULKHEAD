cmd_drivers/usb/typec/typec.mod := printf '%s\n'   class.o mux.o bus.o pd.o retimer.o port-mapper.o | awk '!x[$$0]++ { print("drivers/usb/typec/"$$0) }' > drivers/usb/typec/typec.mod
