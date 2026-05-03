cmd_lib/fonts/built-in.a := rm -f lib/fonts/built-in.a;  printf "lib/fonts/%s " fonts.o font_8x8.o font_8x16.o font_acorn_8x8.o font_6x10.o font_ter16x32.o | xargs ar cDPrST lib/fonts/built-in.a
