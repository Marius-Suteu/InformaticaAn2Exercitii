#include <iostream>
#include "fractie.h"
using namespace std;

int main() {
    try {
        Fractie f1(1, 2);
        Fractie f2(1, 3);
        Fractie f3;

        f3 = f1 + f2;
        cout << "Adunare: \n" << f3 << endl;

        f3 = f1 - f2;
        cout << "Scadere: \n" << f3 << endl;

        f3 = f1 * f2;
        cout << "Inmultire: \n" << f3 << endl;

        f3 = f1 / f2;
        cout << "Impartire: \n" << f3 << endl;

        f1 += f2;
        cout << "Rezultat += : \n" << f1 << endl;

        f1 -= f2;
        cout << "Rezultat -= : \n" << f1 << endl;

        f1 *= f2;
        cout << "Rezultat *= : \n" << f1 << endl;

        f1 /= f2;
        cout << "Rezultat /= : \n" << f1 << endl;

        f3 = -f2;
        cout << "Negatie unara: \n" << f3 << endl;

        if (f1 == f2)
            cout << "Egale \n" << endl;
        if (f1 != f2)
            cout << "Diferite \n" << endl;
        if (f1 < f2)
            cout << "f1 < f2 \n" << endl;
        if (f1 <= f2)
            cout << "f1 <= f2 \n" << endl;
        if (f1 > f2)
            cout << "f1 > f2 \n" << endl;
        if (f1 >= f2)
            cout << "f1 >= f2 \n" << endl;

        ++f1;
        cout << "f1 incrementat: \n" << f1 << endl;
        --f1;
        cout << "f1 decrementat: \n" << f1 << endl;

        f1++;
        cout << "f1 incrementat post: \n" << f1 << endl;
        f1--;
        cout << "f1 decrementat post: \n" << f1 << endl;

        Fractie f4 = f1.reciproc();
        cout << "Reciproc: \n" << f4 << endl;

    }
    catch (const std::exception& e) {
        cout << "Exceptie: \n" << e.what() << endl;
    }

    return 0;
}
