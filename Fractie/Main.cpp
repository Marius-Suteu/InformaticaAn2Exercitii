#include "Fractie.h"
#include <iostream>
using namespace std;

int main() {
    int numarator, numitor, numarator2, numitor2;
    cout << "Introduceti numaratorul: ";
    cin >> numarator;
    cout << "Introduceti numitorul: ";
    cin >> numitor;
  

    Fractie rezultat(numarator, numitor);

    rezultat.adunare(1,3);
    rezultat.print();
    cout << endl;
    rezultat.scadere(2,4); 
    rezultat.print();
    cout << endl;
    rezultat.inmultire(3,2); 
    rezultat.print();
    cout << endl;
    rezultat.impartire(2,6); 
    rezultat.print();
    cout << endl;

    return 0;
}
