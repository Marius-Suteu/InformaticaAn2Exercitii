#pragma once
#ifndef BANCA_H
#define BANCA_H
#include <iostream>

using namespace std;

class Banca {
private:
	string codBanca;
	unsigned nrClienti;
	Client** tablouClienti;
public:
	Banca(string, unsigned, Client**);
	Banca(const Banca& other);
	~Banca();

	string getCodBanca();
	void setCodBanca(string);
	unsigned getNrClienti();
	void setNrClienti(unsigned);
	Client** getClienti();
	void setClienti(Client**);

	void afisareDateBanca();
};
class ContBancar:Operatiuni {
private:
	string numarCont;
	float suma;
	string moneda;
public:
	ContBancar(string, float, string);
	ContBancar(const ContBancar& other);
	~ContBancar();

	string getNumarCont();
	void setNumarCont(string);
	float getSuma();
	void setSuma(float);
	string getMoneda();
	void setMoneda(string);

	float getSumaTotala();
	float getDobanda();
	void depunere(float);
	void extragere(float);

	void transfer(ContBancar&, float); 
	void afisareDateCont();
};
class Client {
private:
	string nume;
	string prenume;
	string adresa;
	unsigned nrConturi;
	ContBancar** conturi;
public :
	Client(string, string, string, unsigned, ContBancar**);
	Client(const Client& );
	~Client();

	string getNume();
	void setNume(string);
	string getPrenume();
	void setPrenume(string);
	string getAdresa();
	void setAdresa(string);
	unsigned getNrConturi();
	void setNrConturi(unsigned);
	ContBancar** getContBancar();
	void setConturi(ContBancar**);

	static const int nrMaxConturi = 10;
	void afisareDateClient();

};
class Operatiuni {
public:
	virtual float getSumaTotala() = 0;
	virtual float getDobanda() = 0;
	virtual void depunere(float suma) = 0;
	virtual void extragere(float suma) = 0;
};
#endif // !BANCA_H

