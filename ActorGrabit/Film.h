#pragma
#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <vector>
using namespace std;

class ActorGrabit {
private:
    std::string nume;
    std::string prenume;
    int anExperienta;

public:
    ActorGrabit(std::string, std::string, int);
    ActorGrabit(const ActorGrabit& other);
    ActorGrabit operator=(const ActorGrabit& other);
    ~ActorGrabit();

    inline std::string getNume() {
        return nume;
    }
    inline std::string getPrenume() {
        return prenume;
    }
    inline int getAnExperienta() {
        return anExperienta;
    }
    inline void setNume(std::string nume) {
        this->nume = nume;
    }
    inline void setPrenume(std::string prenume) {
        this->prenume = prenume;
    }
    inline void setAnExperienta(int anExperienta) {
        this->anExperienta = anExperienta;
    }
};

class Film {
private:
    std::string nume;
    double buget;
    vector<ActorGrabit> listaActoriGrabiti;
    vector<Film> filme;

public:
    Film(std::string, double, vector<ActorGrabit>);
    Film(const Film& other);
    Film& operator=(const Film& other);
    ~Film();
    void afiseazaActorGrabit();

    inline vector<ActorGrabit> getListaActoriGrabiti() {
        return listaActoriGrabiti;
    }
    inline std::string getNume() {
        return nume;
    }
    inline double getBuget() {
        return buget;
    }
    inline vector<Film> getFilme() {
        return filme;
    }
    inline void setListaActoriGrabiti(const vector<ActorGrabit>& listaActoriGrabiti) {
        this->listaActoriGrabiti = listaActoriGrabiti;
    }
    inline void setNume(std::string nume) {
        this->nume = nume;
    }
    inline void setBuget(double buget) {
        this->buget = buget;
    }
    inline void setFilme(const vector<Film>& filme) {
        this->filme = filme;
    }
    void adaugaActorGrabit(const ActorGrabit& actor) {
        listaActoriGrabiti.push_back(actor);
    }
    void stergeActorGrabit() {
        listaActoriGrabiti.pop_back();
    }

    friend void sortareDupaBuget(vector<Film>& );
    friend void sortareDupaActori(vector<ActorGrabit>& );
};

#endif
