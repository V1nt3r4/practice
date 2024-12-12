CC = cc
CFLAGS = -Werror -Wextra -Wall -g

programa: ex06.o ex06_utils.o
	$(CC) $(CFLAGS) ex06.o ex06_utils.o -o programa

ex06.o: ex06.c ex06.h
	$(CC) $(CFLAGS) -c ex06.c -o ex06.o

ex06_utils.o: ex06_utils.c ex06.h
	$(CC) $(CFLAGS) -c ex06_utils.c -o ex06_utils.o

clean:
	rm -f *.o programa