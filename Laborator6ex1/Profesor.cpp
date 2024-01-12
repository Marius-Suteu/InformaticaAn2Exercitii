#include "Persoana.h"
#include <iostream>
using namespace std;

Profesor::Profesor(string CNP, string nume, string email, string materie) : Persoana("", "") {
	this->CNP = CNP;
	this->nume = nume;
	this->email = email;
	this->materie = materie;
}
Profesor::Profesor(const Profesor& other) : Persoana("", "") {
	this->email = other.email;
	this->materie = other.materie;
}
Profesor& Profesor::operator=(const Profesor& other) {
	this->email = other.email;
	this->materie = other.materie;
	return *this;
}
Profesor::~Profesor(){}

void Profesor::detalii() const {
	cout << "Profesorul cu CNP-ul " << getCNP() << " si numele " << getNume();
	cout << " are email-ul " << getEmail() << " si preda  " << getMaterie() << endl;
}
