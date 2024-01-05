#pragma once
#include <iostream>
#ifndef ANGAJAT_H
#define ANGAJAT_H
using namespace std;
class Angajat {
protected:
	double tarifOrar;
	int nrOre;
public:
	Angajat();
	Angajat(double, int);
	Angajat(const Angajat&);
	Angajat& operator=(const Angajat&);
	~Angajat();

	inline double getSalar() {
		return tarifOrar * nrOre;
	}
	inline double getTarifOrar() {
		return tarifOrar;
	}
	inline int getNrOre() {
		return nrOre;
	}
	inline void setTarifOrar(double tarif) {
		this->tarifOrar = tarif;
	}

	inline void setNrOre(int ore) {
		this->nrOre = ore;
	}

	friend ostream& operator<<(ostream&, const Angajat&);
	friend istream& operator>>(istream&, const Angajat&);

};

#endif // !ANGAJAT_H
