#include "Film.h"
#include <iostream>
#include <vector>
using namespace std;

Film::Film(string nume, double buget, vector<ActorGrabit> listaActoriGrabiti) :nume(nume), buget(buget), listaActoriGrabiti(listaActoriGrabiti){

}
Film::Film(const Film& other) : nume(other.nume), buget(other.buget), listaActoriGrabiti(other.listaActoriGrabiti) {

}
Film& Film::operator=(const Film& other) {
	this->nume = other.nume;
	this->buget = other.buget;
	this->listaActoriGrabiti = other.listaActoriGrabiti;

	return *this;
}

Film::~Film(){}

void Film::afiseazaActorGrabit() {
    cout << "Nume: " << nume << " Buget: " << buget << endl;
    for (auto& actor : listaActoriGrabiti) {
        cout << "Actor: " << actor.getNume() << " " << actor.getPrenume() << " Ani de experienta: " << actor.getAnExperienta() << endl;
    }
}
void sortareDupaActori(vector<Film>& filme)
{
	for (size_t i = 0; i < filme.size() -1 ; ++i) {
		for (size_t j = i + 1; j < filme.size(); ++j) {
			if (filme[i].getListaActoriGrabiti().size() > filme[j].getListaActoriGrabiti().size())
				swap(filme[i], filme[j]);
		}
	}
}

void sortareDupaBuget(vector<Film>& filme)
{
	for (size_t i = 0; i < filme.size() - 1; ++i) {
		for (size_t j = i + 1; j < filme.size(); ++j) {
			if (filme[i].getBuget() > filme[j].getBuget())
				swap(filme[i], filme[j]);
		}
	}
}
