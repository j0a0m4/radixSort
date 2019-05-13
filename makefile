CC=gcc
CFLAGS= -lm -I.
DEPS = fila.h fx.h
OBJ = main.o fila.o fx.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
