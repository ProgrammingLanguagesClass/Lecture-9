#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class complex {
private:
    double r, i;
public:
    complex();

    explicit complex(double real, double imaginary = 0);

    complex(const complex &other) = default;

    double real() const;

    double imaginary() const;

    complex &real(double real);

    complex &imaginary(double imaginary);

    double abs() const;

    complex complement() const;

    void print() const;

    complex operator-();  // Negative

    complex operator~(); // Complement

    complex operator+(const complex &rhs);

    complex operator-(const complex &rhs);

    complex operator*(const complex &rhs);

    complex operator/(const complex &rhs);

    complex operator+(const double &rhs);

    complex operator-(const double &rhs);

    complex operator*(const double &rhs);

    complex operator/(const double &rhs);

    complex &operator=(const complex &rhs) = default;

    complex &operator+=(const complex &rhs);

    complex &operator-=(const complex &rhs);

    complex &operator*=(const complex &rhs);

    complex &operator/=(const complex &rhs);

    complex &operator=(const double &rhs);

    complex &operator+=(const double &rhs);

    complex &operator-=(const double &rhs);

    complex &operator*=(const double &rhs);

    complex &operator/=(const double &rhs);

    friend complex operator+(const double &lhs, const complex &rhs);

    friend complex operator-(const double &lhs, const complex &rhs);

    friend complex operator*(const double &lhs, const complex &rhs);

    friend complex operator/(const double &lhs, const complex &rhs);

    friend ostream &operator<<(ostream &out, const complex &c);

    friend istream &operator>>(istream &in, complex &c);

    ~complex() = default;
};

#endif