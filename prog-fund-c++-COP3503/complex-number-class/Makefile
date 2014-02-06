all: complex zip run clean

complex: Test.o Complex.o
	g++ -std=c++0x Test.o Complex.o -o complex

Test.o: Test.cpp
	g++ -std=c++0x -c Test.cpp

Complex.o: Complex.cpp
	g++ -std=c++0x -c Complex.cpp

clean:
	rm -rf *.o complex

run: complex
	./complex

zip:
	zip -r complex.zip *.cpp *.h *.hpp Makefile README.txt