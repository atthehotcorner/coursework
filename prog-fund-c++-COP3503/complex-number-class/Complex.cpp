#include <iostream>
#include <string>
#include <cmath>
#include "Complex.h"

Complex Complex::complexFromPolar(double rho, double theta) {
	return Complex(rho * cos(theta), rho * sin(theta));
}

// +
const Complex Complex::operator+(const Complex& rhs) {
	Complex result = *this;
	result.realpart += rhs.realpart;
	result.imgpart += rhs.imgpart;
	return result;
}

// -
const Complex Complex::operator-(const Complex& rhs) {
	Complex result = *this;
	result.realpart -= rhs.realpart;
	result.imgpart -= rhs.imgpart;
	return result;
}

// *
const Complex Complex::operator*(const Complex& rhs) {
	Complex result = *this;
	result.realpart = (this->realpart * rhs.realpart) - (this->imgpart * rhs.imgpart);
	result.imgpart = (this->realpart * rhs.imgpart) + (this->imgpart * rhs.realpart);
	return result;
}

// /
const Complex Complex::operator/(const Complex& rhs) {
	// how to divide?
	double real = (this->realpart * rhs.realpart) - (this->imgpart * rhs.imgpart);
	double img = (this->realpart * rhs.imgpart) + (this->imgpart * rhs.realpart);
	return Complex(real, img);
}

// +=
Complex& Complex::operator+=(const Complex& rhs) {
	this->realpart += rhs.realpart;
	this->imgpart += rhs.imgpart;
	return *this;
}

// -=
Complex& Complex::operator-=(const Complex& rhs) {
	this->realpart -= rhs.realpart;
	this->imgpart -= rhs.imgpart;
	return *this;
}

// *=
Complex& Complex::operator*=(const Complex& rhs) {
	double real = (this->realpart * rhs.realpart) - (this->imgpart * rhs.imgpart);
	double img = (this->realpart * rhs.imgpart) + (this->imgpart * rhs.realpart);
	this->realpart = real;
	this->imgpart = img;
	return *this;
}

// /=
Complex& Complex::operator/=(const Complex& rhs) {
	// how to divide?
	double real = (this->realpart * rhs.realpart) - (this->imgpart * rhs.imgpart);
	double img = (this->realpart * rhs.imgpart) + (this->imgpart * rhs.realpart);
	this->realpart = real;
	this->imgpart = img;
	return *this;
}

double Complex::real() const {
	return realpart; // real coordinate
}
double Complex::img() const {
	return imgpart; // imaginary coordinate
}
double Complex::rho() const {
	return sqrt(pow(realpart, 2) + pow(imgpart, 2)); // magnitude [distance from origin]
}
double Complex::theta() const {
	return (realpart == 0) ? 0 : tan(imgpart / realpart); //→ angle with respect to the positive x-axis in radians
}

// ==
bool Complex::operator==(const Complex& rhs) const {
	if (this->real() == rhs.real() && this->img() == rhs.img()) return true;
	return false;
}

// !=
bool Complex::operator!=(const Complex& rhs) const {
	//if (this->realpart == rhs.realpart || this->imgpart == rhs.imgpart) return false;
	return !(*this == rhs);
}

// <
bool Complex::operator<(const Complex& rhs) const {
	if (this->rho() < rhs.rho()) return true;
	else if (this->rho() == rhs.rho() && this->theta() < rhs.theta()) return true;
	return false;
}

// <=
bool Complex::operator<=(const Complex& rhs) const {
	if (*this == rhs || *this < rhs) return true;
	return false;
}

// >
bool Complex::operator>(const Complex& rhs) const {
	if (this->rho() > rhs.rho()) return true;
	else if (this->rho() == rhs.rho() && this->theta() > rhs.theta()) return true;
	return false;
}

// >=
bool Complex::operator>=(const Complex& rhs) const {
	if (*this == rhs || *this > rhs) return true;
	return false;
}

std::string Complex::string() {
	std::string result = std::to_string(realpart) + " ";
	result += (imgpart < 0) ? "- " : "+ ";
	result += std::to_string((imgpart < 0) ? imgpart * -1 : imgpart) + "i";
	//result += (imgpart < 0)? "" : "i";
	return result;
}

// stringCart() → "(real,img)" [std::string]
std::string Complex::stringCart() {
	return "(" + std::to_string(realpart) + ", " + std::to_string(imgpart) + ")";
}

// stringPolar() → "(rho,theta)" [std::string]
std::string Complex::stringPolar() {
	return "(" + std::to_string(rho()) + ", " + std::to_string(theta()) + ")";
}

// << [insert string()'s output into ostream]
std::ostream& operator<<(std::ostream& stream, Complex& obj) {
	stream << obj.string();
	return stream;
}

// >> [extract from string of the form "real + img i" or "real - img i" from istream]
std::istream& operator>>(std::istream& stream, Complex& obj) {
	double real, img;
	stream >> real >> img;
	obj.realpart = real;
	obj.imgpart = img;
	return stream;
}
