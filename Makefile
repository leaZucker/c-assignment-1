CC = gcc
AR = ar
FLAGS = -Wall -g
 
all: power.o basicMath.o main.o mymathd mymaths
	$(CC) $(FLAGS) -o myMath.exe main.o power.o basicMath.o

mymathd: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

mymaths: power.o basicMath.o 
	$(AR) -rcs libmyMath.a power.o basicMath.o

maind: mymathd main.o
	$(CC) $(FLAGS) -o mymathd.exe main.o ./libmyMath.so
	
mains: mymaths main.o
	$(CC) $(FLAGS) -o mymaths.exe main.o libmyMath.a

powr.o:power.c myMath.h
	$(CC) $(FLAGS) -c power.c 

basicMath.o:basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean 
	
clean:	
	rm -rf *.o *.a *.so *.exe