CC = gcc
CFLAGS = -Wextra -Wall
LDFLAGS = 

programa: ex03.o ex03_utils.o
	$(CC) $(CFLAGS) $(LDFLAGS) ex03.o ex03_utils.o -o programa

ex03.o: ex03.c ex03.h
	$(CC) $(CFLAGS) -c ex03.c -o ex03.o

ex03_utils.o: ex03_utils.c ex03.h
	$(CC) $(CFLAGS) -c ex03_utils.c -o ex03_utils.o

clean:
	rm -f *.o programa