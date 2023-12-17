#include "Banca.h"
#include <iostream>
using namespace std;

Banca::Banca(string codBanca, unsigned nrClient, Client**) {
	this->codBanca = codBanca;
	this->nrClienti = nrClient;
	this->tablouClienti = new Client* [nrClienti];
}
Banca::~Banca() {
	for (unsigned i = 0; i < nrClienti; ++i)
		delete tablouClienti[i];
	delete[] tablouClienti;
}

Banca:: Banca(const Banca& other) {
	this->codBanca = other.codBanca;
	this->nrClienti = other.nrClienti;
	for (unsigned i = 0; i < nrClienti; ++i) {
		this->tablouClienti[i] = other.tablouClienti[i];
	}
}
string Banca::getCodBanca() {
	return codBanca;
}
void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}
unsigned Banca::getNrClienti() {
	return nrClienti;
}
void Banca::setNrClienti(unsigned nrClient) {
	this->nrClienti = nrClient;
}
Client** Banca::getClienti() {
	return tablouClienti;
}
void Banca::setClienti(Client** tablouClienti) {
	for (unsigned i = 0; i < nrClienti; ++i) {
		this->tablouClienti[i] = tablouClienti[i];
	}
}
void Banca::afisareDateBanca() {
	cout << "Cod banca: " << codBanca << endl;
	for (unsigned i = 0; i < this->nrClienti; ++i)
		tablouClienti[i]->afisareDateClient();

}
	