#include "Film.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ActorGrabit actor1("Mitica", "DeLaLiga", 5);
    ActorGrabit actor2("Armin", "VanBuriana", 8);
    ActorGrabit actor3("Ion", "Creanga", 20);
    ActorGrabit actor4("Victoria", "Lipan", 8);

    vector<ActorGrabit> listaActorilor = { actor1, actor2, actor3, actor4 };

    Film film1("De ce trag clopotele Mitica", 2000, listaActorilor);
    Film film2("La furat de cirese", 1500, listaActorilor);

    film1.adaugaActorGrabit(actor1);
    film1.adaugaActorGrabit(actor2);
    film2.adaugaActorGrabit(actor3);
    film2.adaugaActorGrabit(actor4);

    //film1.afiseazaActorGrabit();
    //film2.afiseazaActorGrabit();

    vector<Film> filme = { film1, film2 };

    for (auto& film : filme) {
        cout << "Film: " << film.getNume() << ", Buget: " << film.getBuget() << endl;
    }

    sortareDupaBuget(filme);
    cout << "Lista filmelor sortate dupa buget: " << endl;
    for (auto& film : filme) {
        cout << "Film: " << film.getNume() << ", Buget: " << film.getBuget() << endl;
    }
   
    return 0;
}
