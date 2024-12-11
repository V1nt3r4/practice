CC = gcc
CFLAGS = -Werror -Wall -Wextra -g
LDFLAGS = 

programa: ex04.o ex04_utils.o
	$(CC) $(CFLAGS) $(LDFLAGS) ex04.o ex04_utils.o -o programa

ex04.o: ex04.c ex04.h
	$(CC) $(CFLAGS) -c ex04.c -o ex04.o

ex04_utils.o: ex04_utils.c ex04.h
	$(CC) $(CFLAGS) -c ex04_utils.c -o ex04_utils.o

clean:
	rm -f *.o programa