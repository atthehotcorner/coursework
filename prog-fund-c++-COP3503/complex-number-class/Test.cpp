#include <iostream>
#include <cmath>
#include "Complex.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

TEST_CASE("Create complex numbers", "[complex]") {
	Complex a;
	Complex b(2);
	Complex c(3.14);
	Complex d(4, 5.26);

	REQUIRE(a.real() == 0);
	REQUIRE(a.img() == 0);

	REQUIRE(b.real() == 2);
	REQUIRE(b.img() == 0);

	REQUIRE(c.real() == 3.14);
	REQUIRE(c.img() == 0);

	REQUIRE(d.real() == 4);
	REQUIRE(d.img() == 5.26);

	REQUIRE(a.rho() == 0);
	REQUIRE(a.theta() == 0);

	REQUIRE(b.rho() == 2);
	REQUIRE(b.theta() == 0);

	REQUIRE(c.rho() == 3.14);
	REQUIRE(c.theta() == 0);

	REQUIRE(d.rho() == sqrt(pow(4, 2) + pow(5.26, 2)));
	REQUIRE(d.theta() == tan(5.26 / 4));

	/*std::cout << a.rho() << " " << a.theta() << std::endl;
	std::cout << b.rho() << " " << b.theta() << std::endl;
	std::cout << c.rho() << " " << c.theta() << std::endl;
	std::cout << d.rho() << " " << d.theta() << std::endl;*/
}

TEST_CASE("Test compound assignment operators", "[complex]") {
	Complex a;
	Complex b(2);
	Complex c(3.14);
	Complex d(4, 5.26);
	
	Complex aplusb(2, 0);
	Complex aminusc(-3.14, 0);
	Complex btimesd(8, 10.52);
	Complex adivideb(0, 0);

	REQUIRE((a + b) == aplusb);
	REQUIRE((a - c) == aminusc);
	REQUIRE((b * d) == btimesd);
	REQUIRE((a / b) == adivideb);

	Complex a2, a3, a4, b2(2);
	REQUIRE((a2 += b) == aplusb);
	REQUIRE((a3 -= c) == aminusc);
	REQUIRE((b2 *= d) == btimesd);
	REQUIRE((a4 /= b) == adivideb);
}

TEST_CASE("Test comparison operators/relational operators", "[complex]") {
	Complex a(1, 3.14);
	Complex b(1, 3.14);
	Complex c(2, 5);
	Complex d;

	REQUIRE((a == b) == true);
	REQUIRE((a == c) == false);

	REQUIRE((a != b) == false);
	REQUIRE((a != c) == true);

	REQUIRE((a < b) == false);
	REQUIRE((a < c) == true);
	REQUIRE((a < d) == false);

	REQUIRE((a <= d) == false);
	REQUIRE((a <= c) == true);
	REQUIRE((a <= b) == true);

	REQUIRE((a > b) == false);
	REQUIRE((a > c) == false);
	REQUIRE((a > d) == true);

	REQUIRE((a >= d) == true);
	REQUIRE((a >= c) == false);
	REQUIRE((a >= b) == true);
}

TEST_CASE("Test strings", "[complex]") {
	Complex a(1, 3.14);
	Complex b(-3, -20);
	Complex c;

	REQUIRE(a.string() == "1.000000 + 3.140000i");
	REQUIRE(b.string() == "-3.000000 - 20.000000i");
	REQUIRE(c.string() == "0.000000 + 0.000000i");
}

/*TEST_CASE("Test output streams", "[complex]") {
	Complex a(1, 3.14);
	Complex b(-3, -20);
	Complex c;

	std::cout << "Testing streams" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}*/

/*TEST_CASE("Test input streams", "[complex]") {
	Complex a(1, 3.14);
	Complex b(-3, -20);
	Complex c;
	Complex d;
	Complex e;
	Complex f;

	std::cin >> d;
	std::cin >> e;
	std::cin >> f;

	REQUIRE(a == d);
	REQUIRE(b == e);
	REQUIRE(c == f);
}*/
