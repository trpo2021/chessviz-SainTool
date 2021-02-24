CFLANGS= -Wall -Werror
all:chesss
chesss: Chess.c
	gcc $(CFLANGS) Chess.c

clean:
	rm -rf *.o chesss
