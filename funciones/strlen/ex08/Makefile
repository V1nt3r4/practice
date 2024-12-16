CC = cc
CFLAGS = -Wall -Werror -Wextra

programa: ex08.o ex08_utils.0
	$(CC) $(CFLAGS) ex08.o ex08_utils.o -o programa

ex08.o: ex08.c ex08.h
	$(CC) $(CFLAGS) -c ex08.c -o ex08.o

ex08_utils.o: ex08_utils.o ex08.h
	$(CC) $(CFLAGS) -c ex08.c -o ex08_utils.o