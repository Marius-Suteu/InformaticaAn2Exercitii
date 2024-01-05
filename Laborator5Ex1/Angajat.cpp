#include <iostream>
#include "Angajat.h"
using namespace std;

Angajat::Angajat() {
	tarifOrar = 5.5;
	nrOre = 0;
}
Angajat::Angajat(double tarifOrar, int nrOre) {
	this->tarifOrar = tarifOrar;
	this->nrOre = nrOre;
}
Angajat::Angajat(const Angajat& other) {
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
}
Angajat& Angajat:: operator=(const Angajat& other) {
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
	return *this;
}
Angajat:: ~Angajat(){}

ostream& operator<<(ostream& os, const Angajat& ang) {
	os << "Tarif orar: " << ang.tarifOrar << ", Numar ore: " << ang.nrOre;
	return os;
}
istream& operator>>(istream& is, Angajat& ang) {
	double tarif;
	int ore;
	is >> tarif >> ore;
	ang.setTarifOrar(tarif);
	ang.setNrOre(ore);
	return is;
}