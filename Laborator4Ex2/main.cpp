#include <iostream>
#include "Complex.h"

int main() {

    Complex a(3, 4);
    Complex b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    Complex suma = a + b;
    Complex diferenta = a - b;
    Complex produs = a * b;
    Complex coeficient = a / b;

    cout << "Suma: " << suma << endl;
    cout << "Diferenta: " << diferenta << endl;
    cout << "Produs: " << produs << endl;
    cout << "Catul: " << coeficient << endl;

    cout << "Modulul lui a: " << modul(a) << endl;
    cout << "Conjugatul lui b: " << conjugat(b) << endl;

    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;

    Complex c(2, 3);
    c += a;
    cout << "c += a: " << c << endl;

    c *= b;
    cout << "c *= b: " << c << endl;

    Complex d(1, 1);
    cout << "d initial: " << d << endl;
    cout << "d++: " << d++ << endl;
    cout << "++d: " << ++d << endl;
    cout << "d--: " << d-- << endl;
    cout << "--d: " << --d << endl;

    Complex inputComplex;
    cout << "Introduceti un numar complex:" << endl;
    cin >> inputComplex;
    cout << "Numarul complex introdus: " << inputComplex << endl;

    return 0;
}
