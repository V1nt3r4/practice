CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = 

programa: ex05.o ex05_utils.o
	$(CC) $(CFLAGS) $(LDFLAGS) ex05.o ex05_utils.o -o programa

ex05.o: ex05.c ex05.h
	$(CC) $(CFLAGS) -c ex05.c -o ex05.o

ex05_utils.o: ex05_utils.c ex05.h
	$(CC) $(CFLAGS) -c ex05_utils.c -o ex05_utils.o

clean:
	rm -f *.o programa