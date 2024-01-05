#include <iostream>
#include "Manager.h"
using namespace std;

Manager::Manager(double tarifOrar, int nrOre, int nrSubordonati) {
	this->tarifOrar = tarifOrar;
	this->nrOre = nrOre;
	this->nrSubordonati = nrSubordonati;

}
Manager::Manager(const Manager& other) {
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
	this->nrSubordonati = other.nrSubordonati;
}
Manager&Manager:: operator=(const Manager& other) {
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
	this->nrSubordonati = other.nrSubordonati;
	return *this;
}
Manager::~Manager(){}