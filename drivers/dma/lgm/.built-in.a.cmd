cmd_drivers/dma/lgm/built-in.a := rm -f drivers/dma/lgm/built-in.a;  printf "drivers/dma/lgm/%s " lgm-dma.o | xargs ar cDPrST drivers/dma/lgm/built-in.a
