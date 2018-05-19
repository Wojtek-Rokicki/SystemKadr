all: main.o klasy.o
	g++ main.o klasy.o -std=c++11 -o aplikacja

klasy.o: klasy.cpp  klasy.h
	g++ klasy.cpp -std=c++11 -c -o klasy.o

main.o: main.cpp klasy.h
	g++ main.cpp -std=c++11 -c -o main.o

clean:
	rm -f *.o aplikacja