#include "Banca.h"
#include <iostream>
using namespace std;

Client::Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar** conturi) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;
	this->nrConturi = nrConturi;
	this->conturi = new ContBancar* [nrConturi];
}
Client::~Client() {
	for (unsigned i = 0 ; i < nrConturi; ++i)    
		delete conturi[i];
	delete[] conturi;
}
Client::Client(const Client& other) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;
	this->nrConturi = nrConturi;
	for (int i = 0; i < nrConturi; ++i) {
		this->conturi[i] = conturi[i];
	}
}
string Client::getNume() {
	return nume;
}
void Client::setNume(string nume) {
	this->nume = nume;
}
string Client::getPrenume() {
	return prenume;
}
void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}
string Client::getAdresa() {
	return adresa;
}
void Client::setAdresa(string adresa) {
	this->adresa = adresa;
}
unsigned Client::getNrConturi() {
	return nrConturi;
}
void Client::setNrConturi(unsigned nrConturi) {
	this->nrConturi = nrConturi;
}
ContBancar** Client::getContBancar() {
	return conturi;
}
void Client::setConturi(ContBancar** conturi) {
	for (unsigned i = 0; i < nrConturi; ++i)
		this->conturi[i] = conturi[i];
}
void Client::afisareDateClient() {
	cout << "Nume: " << nume << " Prenume: " << prenume << " Adresa: " << adresa << endl;
	for (unsigned i = 0; i < this->nrConturi; ++i)
		conturi[i]->afisareDateCont();

}
