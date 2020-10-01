CFLAGS=-Wall -pedantic -std=c11 -g

all:	listtest1

list.o:	list.c list.h
				gcc $(CFLAGS) -c list.c

listtest1.o:	listtest1.c list.h
							gcc $(CFLAGS) -c listtest1.c

listtest1:	listtest1.o	list.o
						gcc $(CFLAGS) list.o listtest1.o -o listtest1	

clean:
				rm -f *.o listtest1
