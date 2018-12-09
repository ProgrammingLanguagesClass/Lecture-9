#include <cmath>
#include "complex.h"

// Constructors
complex::complex() : complex(0) {}

complex::complex(double r, double i) : r(r), i(i) {}

// Getters
double complex::real() const {
    return r;
}

double complex::imaginary() const {
    return i;
}

// Setters
complex &complex::real(double real) {
    r = real;
    return *this;
}

complex &complex::imaginary(double imaginary) {
    i = imaginary;
    return *this;
}

// Other member functions
double complex::abs() const {
    return sqrt(r * r + i * i);
}

complex complex::complement() const {
    return complex(r, -i);
}

void complex::print() const {
    cout << r << " + " << i << "i";
}

// Unary operators
complex complex::operator-() {
    return complex(-r, -i);
}

complex complex::operator~() {
    return complex(r, -i);
}

// Binary Operators
complex complex::operator+(const complex &rhs) {
    return complex(r + rhs.r, i + rhs.i);
}

complex complex::operator-(const complex &rhs) {
    return complex(r - rhs.r, i - rhs.i);
}

complex complex::operator*(const complex &rhs) {
    return complex(r * rhs.r - i * rhs.i, r * rhs.i + i * rhs.r);
}

complex complex::operator/(const complex &rhs) {
    double a = rhs.abs();
    return complex(*this * rhs.complement()) / (a * a);
}

complex complex::operator+(const double &rhs) {
    return complex(r + rhs, i);
}

complex complex::operator-(const double &rhs) {
    return complex(r - rhs, i);
}

complex complex::operator*(const double &rhs) {
    return complex(r * rhs, i * rhs);
}

complex complex::operator/(const double &rhs) {
    return complex(r / rhs, i / rhs);
}

// Assignment operators
complex &complex::operator+=(const complex &rhs) {
    r += rhs.r;
    i += rhs.i;
    return *this;
}

complex &complex::operator-=(const complex &rhs) {
    r -= rhs.r;
    i -= rhs.i;
    return *this;
}

complex &complex::operator*=(const complex &rhs) {
    double newReal = r * rhs.r - i * rhs.i;
    double newImaginary = r * rhs.i + i * rhs.r;
    r = newReal;
    i = newImaginary;
    return *this;
}

complex &complex::operator/=(const complex &rhs) {
    *this = complex(*this / rhs);
    return *this;
}

complex &complex::operator=(const double &rhs) {
    r = rhs;
    i = 0;
    return *this;
}

complex &complex::operator+=(const double &rhs) {
    r += rhs;
    return *this;
}

complex &complex::operator-=(const double &rhs) {
    r -= rhs;
    return *this;
}

complex &complex::operator*=(const double &rhs) {
    r *= rhs;
    i *= rhs;
    return *this;
}

complex &complex::operator/=(const double &rhs) {
    r /= rhs;
    i /= rhs;
    return *this;
}

complex operator+(const double &lhs, const complex &rhs) {
    return complex(lhs + rhs.r, rhs.i);
}

complex operator-(const double &lhs, const complex &rhs) {
    return complex(lhs - rhs.r, -rhs.i);
}

complex operator*(const double &lhs, const complex &rhs) {
    return complex(lhs * rhs.r, lhs * rhs.i);
}

complex operator/(const double &lhs, const complex &rhs) {
    return complex(lhs) / complex(lhs - rhs.r, -rhs.i);
}

// Input/Output operators
ostream &operator<<(ostream &out, const complex &c) {
    out << c.r;
    if (c.i != 0) out << " + " << c.i << "i";
    return out;
}

istream &operator>>(istream &in, complex &c) {
    in >> c.r >> c.i;
    return in;
}