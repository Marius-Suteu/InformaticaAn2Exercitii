#include "Persoana.h"
#include <iostream>
using namespace std;

Student::Student(string CNP,string nume,string email, double nota) : Persoana("", "") {
	this->CNP = CNP;
	this->nume = nume;
	this->email = email;
	this->nota = nota;
}
Student::Student(const Student& other) : Persoana("", "") {
	this->email = other.email;
	this->nota = other.nota;
}
Student& Student::operator=(const Student& other) {
	this->email = other.email;
	this->nota = other.nota;
	return *this;
}
Student::~Student(){}

void Student::detalii() const {
	cout << "Studentul cu CNP-ul " << getCNP() << " si numele " << getNume();
	cout << " are email-ul " << getEmail() << " si nota " << getNota() << endl;
}