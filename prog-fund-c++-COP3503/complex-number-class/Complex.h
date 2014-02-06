#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
	double realpart;
	double imgpart; //cats
public:
	Complex() :realpart(0), imgpart(0) {};
	Complex(int realpart) :realpart(realpart) {};
	Complex(double realpart) :realpart(realpart) {};
	Complex(double realpart, double imgpart) :realpart(realpart), imgpart(imgpart) {};

	// Copy constructor
	Complex(const Complex& other):realpart(other.realpart), imgpart(other.imgpart) {};
	// Move constructor
	Complex(Complex&& c): realpart(c.realpart), imgpart(c.imgpart) {};

	Complex complexFromPolar(double rho, double theta);

	// +
	const Complex operator+(const Complex& rhs);

	// -
	const Complex operator-(const Complex& rhs);

	// *
	const Complex operator*(const Complex& rhs);

	// /
	const Complex operator/(const Complex& rhs);

	// +=
	Complex& operator+=(const Complex& rhs);

	// -=
	Complex& operator-=(const Complex& rhs);

	// *=
	Complex& operator*=(const Complex& rhs);

	// /=
	Complex& operator/=(const Complex& rhs);

	double real() const; // → real coordinate
	double img() const; // → imaginary coordinate
	double rho() const; //→ magnitude [distance from origin]
	double theta() const; //→ angle with respect to the positive x-axis in radians

	// ==
	bool operator==(const Complex& rhs) const;

	// !=
	bool operator!=(const Complex& rhs) const;

	// <
	bool operator<(const Complex& rhs) const;

	// <=
	bool operator<=(const Complex& rhs) const;

	// >
	bool operator>(const Complex& rhs) const;

	// >=
	bool operator>=(const Complex& rhs) const;

	std::string string();
	std::string stringCart();
	std::string stringPolar();

	// << [insert string()'s output into ostream]
	friend std::ostream& operator<< (std::ostream& stream, Complex& obj);

	// >> [extract from string of the form "real + img i" or "real - img i" from istream]
	friend std::istream& operator>> (std::istream& stream, Complex& obj);
};

#endif
