#include "Persoana.h"
#include <iostream>
using namespace std;

int main() {

    Student student("12345678901232", "Popescu Vasile", "student@example.com", 9.5);
    student.detalii();

    Profesor profesor("19861115182124", "Simion Zsolt", "profesor@exemple.com", "matematica");
    profesor.detalii();

    Angajat angajat("12344321657812", "Badea Gheorghe", "angajat@exemple.com", "Ingineria Calculatoarelor.");
    angajat.detalii();

    return 0;
}
