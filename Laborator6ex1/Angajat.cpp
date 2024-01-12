#include "Persoana.h"
#include <iostream>
using namespace std;

Angajat::Angajat(string CNP, string nume, string email, string departament) : Persoana("", "") {
	this->CNP = CNP;
	this->nume = nume;
	this->email = email;
	this->departament = departament;
}
Angajat::Angajat(const Angajat& other) : Persoana("", "") {
	this->email = other.email;
	this->departament = other.departament;
}
Angajat& Angajat::operator=(const Angajat& other) {
	this->email = other.email;
	this->departament = other.departament;
	return *this;
}
Angajat::~Angajat(){}

void Angajat::detalii() const {
	cout << "Angajatul cu CNP-ul " << getCNP() << " si numele " << getNume();
	cout << " are email-ul " << getEmail() << " si lucreaza in departamentul " << getDepartament() << endl;
}
