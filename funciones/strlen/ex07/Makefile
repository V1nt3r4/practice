CC = cc
CFLAGS = -Werror -Wall -Wextra

programa: ex07.o ex07_utils.o
	$(CC) $(CFLAGS) ex07.o ex07_utils.o -o programa

ex07.o: ex07.c ex07.h
	$(CC) $(CFLAGS) -c ex07.c -o ex07.o

ex07_utils.o: ex07_utils.c ex07.h
	$(CC) $(CFLAGS) -c ex07_utils.c -o ex07_utils.o

clean:
	rm -f *.o programa