cmd_scripts/insert-sys-cert := gcc -Wp,-MMD,scripts/.insert-sys-cert.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement         -o scripts/insert-sys-cert scripts/insert-sys-cert.c   

source_scripts/insert-sys-cert := scripts/insert-sys-cert.c

deps_scripts/insert-sys-cert := \

scripts/insert-sys-cert: $(deps_scripts/insert-sys-cert)

$(deps_scripts/insert-sys-cert):
