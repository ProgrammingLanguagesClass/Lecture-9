#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    complex c0;  // complex()
    complex c1(3, 4); // complex(double, double)
    complex c2(c1);  // complex(complex&)
    cout << c1 << endl;  // operator<<()
    cout << c2.abs() << endl;  // abs()
    cout << c1.complement() << endl;  // complement()
    cout << -c2 << endl;  // operator+(complex)
    cout << c1 + c2 << endl;  // operator+(complex)
    cout << c1 + c2 << endl;  // operator+(complex)
    cout << c1 - c2 << endl;  // operator-(complex)
    cout << c1 * c2 << endl;  // operator*(complex)
    cout << c1 / c2 << endl;  // operator/(complex)

    c1 += 4; // operator +=(double)
    cout << c1 << endl;
    cout << c1.real() << endl; // real()
    cout << c1.imaginary() << endl; // imaginary()

    complex c3;
    cin >> c3;  // operator>>()

    complex c4 = 4 - c3; // operator-(double, complex)
    cout << c4 << endl;

    return 0;
}