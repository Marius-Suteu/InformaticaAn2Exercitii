#include "Persoana.h"
#include <iostream>
using namespace std;

Persoana::Persoana(string CNP, string nume) {
	this->CNP = CNP;
	this->nume = nume;
}
Persoana::Persoana(const Persoana& other) {
	this->CNP = other.CNP;
	this->nume = other.nume;
}
Persoana& Persoana:: operator=(const Persoana& other) {
	this->CNP = other.CNP;
	this->nume = other.nume;
	return *this;
}
Persoana::~Persoana(){}

void Persoana::detalii()const {
	cout << "CNP: " << CNP << ", Nume: " << nume << endl;
}