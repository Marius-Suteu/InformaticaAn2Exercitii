#include <iostream>
#include <vector>
#include "Punct2D.h"
#include "Punct3D.h"

using namespace std;

int main() {
    
    cout << "Exemplu pentru clasa Punct2D:" << endl;
    Punct2D punct1(1, 2);
    Punct2D punct2(3, 4);

    cout << "punct1: " << punct1 << endl;
    cout << "punct2: " << punct2 << endl;

    cout << "punct1 + punct2: " << punct1 + punct2 << endl;
    cout << "punct1 - punct2: " << punct1 - punct2 << endl;

    cout << "punct1 == punct2: " << (punct1 == punct2) << endl;
    cout << "punct1 != punct2: " << (punct1 != punct2) << endl;

    cout << "Distanta dintre punct1 si punct2: " << punct1.distanta(punct2) << endl;


    cout << "\nExemplu pentru clasa Punct3D:" << endl;
    Punct3D punct3(1, 2, 3);
    Punct3D punct4(4, 5, 6);

    cout << "punct3: " << punct3 << endl;
    cout << "punct4: " << punct4 << endl;

    cout << "punct3 + punct4: " << punct3 + punct4 << endl;
    cout << "punct3 - punct4: " << punct3 - punct4 << endl;

    cout << "punct3 == punct4: " << (punct3 == punct4) << endl;
    cout << "punct3 != punct4: " << (punct3 != punct4) << endl;

    cout << "Distanta dintre punct3 si punct4: " << punct3.distanta(punct4) << endl;

    return 0;
}

