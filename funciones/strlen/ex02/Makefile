CC = gcc
CFLAGS = -Wall -Werror
LDFLAGS = 

programa: ex02.o ex02_utils.o
	$(CC) $(CFLAGS) $(LDFLAGS) ex02.o ex02_utils.o -o programa

ex02.o: ex02.c ex02.h
	$(CC) $(CFLAGS) -c ex02.c -o ex02.o

ex02_utils.o: ex02_utils.c ex02.h
	$(CC) $(CFLAGS) -c ex02_utils.c -o ex02_utils.o

clean:
	rm -f *.o programa
