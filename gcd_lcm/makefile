all: gcd clean

complex: main.o
    g++ -std=c++0x main.o -o main

main.o: main.cpp
    g++ -std=c++0x -c main.cpp

clean:
    rm -rf *.o main
