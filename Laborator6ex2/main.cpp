#include <iostream>
#include "triunghi.h"
using namespace std;

int main() {
    Dreptunghic dreptunghi(3, 4, 5);
    cout << "Aria dreptunghiului: " << dreptunghi.getArie() << endl;
    cout << "Perimetrul dreptunghiului: " << dreptunghi.getPerimetru() << endl;

    Isoscel isoscel(5, 5, 6);
    cout << "Aria triunghiului isoscel: " << isoscel.getArie() << endl;
    cout << "Perimetrul triunghiului isoscel: " << isoscel.getPerimetru() << endl;

    DreptunghicIsoscel dreptunghicIsoscel(3, 4, 5);
    cout << "Aria dreptunghiului isoscel: " << dreptunghicIsoscel.getArie() << endl;
    cout << "Perimetrul dreptunghiului isoscel: " << dreptunghicIsoscel.getPerimetru() << endl;

    Echilateral echilateral(5, 5, 5);
    cout << "Aria triunghiului echilateral: " << echilateral.getArie() << endl;
    cout << "Perimetrul triunghiului echilateral: " << echilateral.getPerimetru() << endl;

    return 0;
}
