CC = g++ -Wall -std=c++11 -g

all: main.o klasa.o
	$(CC) main.o klasa.o -o plik

main.o: main.cpp
	$(CC) main.cpp -c -o main.o

klasa.o: klasa.h klasa.cpp
	$(CC) klasa.cpp -c -o klasa.o

clean:
	rm -f *.o plik

