#include "Film.h"
#include <iostream>
#include <vector>
using namespace std;

ActorGrabit::ActorGrabit(string nume, string prenume, int anExperienta) : nume(nume), prenume(prenume), anExperienta(anExperienta) {

}
ActorGrabit::ActorGrabit(const ActorGrabit& other) : nume(other.nume), prenume(other.prenume), anExperienta(other.anExperienta) {

}
ActorGrabit ActorGrabit::operator=(const ActorGrabit& other)
{
	this->nume = other.nume;
	this->prenume = other.prenume;
	this->anExperienta = other.anExperienta;

	return *this;
}
ActorGrabit::~ActorGrabit() {}
