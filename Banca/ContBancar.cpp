#include "Banca.h"
#include <iostream>
using namespace std;

ContBancar::ContBancar(string numarCont, float suma, string moneda) {
	this->numarCont = numarCont;
	this->suma = suma;
	this->moneda = moneda;
}
ContBancar::~ContBancar() {}

ContBancar::ContBancar(const ContBancar& other) {
	this->numarCont = other.numarCont;
	this->suma = other.suma;
	this->moneda = other.moneda;
}
string ContBancar::getNumarCont() {
	return numarCont;
}
void ContBancar::setNumarCont(string numarCont) {
	this->numarCont = numarCont;
}
float ContBancar::getSuma() {
	return suma;
}
void ContBancar::setSuma(float suma) {
	this->suma = suma;
}
string ContBancar::getMoneda() {
	return moneda;
}
void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}
float ContBancar::getSumaTotala() {
	return suma;
}
float ContBancar::getDobanda() {
	if (this->moneda == "RON" && this->suma < 500) {
		return 0.3;
	}
	else
		if (this->moneda == "RON" && this->suma >= 500) {
			return 0.8;
		}
		else
			if (this->moneda == "EURO") {
				return 0.1;
			}
			else
				cout << "Moneda nepotrivita." << endl;
	return -1;
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}
void ContBancar::extragere(float suma) {
	if (this->suma < suma) {
		cout << "Saraculeeeeee!" << endl;
		return;
	}
	this->suma -= suma;
}
void ContBancar::transfer(ContBancar& cont, float suma) {
	if (this->moneda != cont.moneda) {
		cout << "Tranzactie neaceptata." << endl;
		return;
	}
	else {
		this->extragere(suma);
		cont.depunere(suma - cont.getDobanda() / 100 * suma);
	}
}
	void ContBancar::afisareDateCont(){
		cout << "Numar cont: " << numarCont << " Suma: " << suma << " Tip moneda: " << moneda<<endl;
	}

