#include "Fractie.h"
#include <iostream>

using namespace std;

Fractie::Fractie(int numarator, int numitor) {
	this->numarator = numarator;
	this->numitor = numitor;
}
Fractie::Fractie(const Fractie& other) {
	this->numarator = other.numarator;
	this->numitor = other.numitor;
}
void Fractie::simplifica() {
	int divizorComun = cmmdc(this->numarator, this->numitor);

	this->numarator /= divizorComun;
	this->numitor /= divizorComun;

}
Fractie Fractie::reciproc()
{
	if (this->numarator == 0) {
		cout << "Nu exista reciproca.";
		return Fractie(0,1);
	}
	else
	{
		Fractie fr(this->numitor, this->numarator);
		return fr;
	}
}
void Fractie::print()
{
	cout << this->numarator << endl;
	cout << "---" << endl;
	cout << this->numitor << endl;
}
Fractie::~Fractie()
{
}
void Fractie::adunare(int numarator2, int numitor2) {
	int numitorComun = this->numitor * numitor2;
	int sumaNumaratorilor = this->numarator * numitor2 + numarator2 * this->numitor;

	this->numarator = sumaNumaratorilor;
	this->numitor = numitorComun;

	simplifica();
}
void Fractie::scadere(int numarator2, int numitor2) {
	int numitorComun = this->numitor * numitor2;
	int scadereaNumaratorilor = this->numarator * numarator2 - numarator2 * this->numitor;

	this->numarator = scadereaNumaratorilor;
	this->numitor = numitorComun;

	simplifica();
}
void Fractie::inmultire(int numarator2, int numitor2) {
	this->numarator *= numarator2;
	this->numitor *= numitor2;
	simplifica();
}
void Fractie::impartire(int numarator2, int numitor2) {
	int temp_numarator = numarator2;
	numarator2 = numitor2;
	numitor2 = temp_numarator;
	inmultire(numarator2, numitor2);
}

int Fractie::cmmdc(int a, int b)
{
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else 
			if (a < b) {
				b = b - a;
			}
	}
	return a;
}
