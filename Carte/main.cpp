#include "Carte.h"
#include <iostream>
using namespace std;

int main() {
    Carte carte1("Autor1", "Titlu1", "ISBN1", 29.99);
    Carte carte2("Autor2", "Titlu2", "ISBN2", 19.99);
    Carte carte3("Autor3", "Titlu3", "ISBN3", 40.99);


    int nrInstante = Carte::getNrInstante();
    cout << "Numarul de instante de Carte create este: " << nrInstante << endl;
   
    return 0;
}
