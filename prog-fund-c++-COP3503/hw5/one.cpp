#include <iostream>

int bar(int const * const n) {
	std::cout << *n << " : ";
	if (*n == 0)
		return 0;
	if (*n == 1)
		return 1;
	else {
		int nn = *n - 1;
		return *n * bar(&nn);
	}
}

int foo(int const * const n) {
	if (*n < 0) {
		int nn = -*n;
		return -bar(&nn);
	}
	else
		return bar(n);
}

int main() {

	for (int i = -5; i != 6; ++i)
		std::cout << foo(&i) << std::endl;

	return 0;
}
