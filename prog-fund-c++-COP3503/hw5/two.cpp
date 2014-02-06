#include <iostream>

double const* bar(int * const n) {
	double const d = 1.4142135623730950488016887242097;
	// std::cout << *n << " : ";
	if (*n == 0)
		return new double(1.0);
	if (*n == 1)
		return &d;
	else {
		--(*n);
		return new double(d * *bar(n));
	}
}

double const* foo(int * const n) {
	if (*n < 0) {
		int i = -*n;
		double b = 1 / *bar(&i);
		return &b;
	}
	else
		return bar(n);
}

int main() {
	int i = -6;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;
	++i;
	std::cout << *foo(&i) << std::endl;

	return 0;
}
