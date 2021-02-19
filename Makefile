all: chessviz

chessviz: Chess.o
	gсс Chess.o -o chessviz

Chess.o: Chess.c
	gсс -Wall -Werror -c Chess.c 

clean:
	rm -rf *.o chessviz