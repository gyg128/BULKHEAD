cmd_sound/core/snd-pcm.mod := printf '%s\n'   pcm.o pcm_native.o pcm_lib.o pcm_misc.o pcm_memory.o memalloc.o pcm_timer.o | awk '!x[$$0]++ { print("sound/core/"$$0) }' > sound/core/snd-pcm.mod
