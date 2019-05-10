CC=gcc
CFLAGS=-I.
DEPS = fx.h
OBJ = main.o fx.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

