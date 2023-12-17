cc = g++
.PHONY: run clear all

all: main

main: main.o func.o
	$(cc) main.o func.o -o main
main.o: main.cpp
	$(cc) -c main.cpp -o main.o
func.o: func.cpp
	$(cc) -c func.cpp -o func.o
run: main
	./main
clean:
	rm main
	rm *.o

