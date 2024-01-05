#include <iostream>
#include "Angajat.h"
#include "Manager.h"
using namespace std;

int main() {
	Angajat angajati(5.5, 40);
	cout << "Tariful orar este: " << angajati.getTarifOrar() << endl;
	cout << "Salariul este: " << angajati.getSalar() << endl;

	Manager manager(10.0, 40, 500);
	cout << "Tariful orar al managerului este: " << manager.getTarifOrar() << endl;
	cout << "Salariul managerului este: " << manager.getSalar() << endl;
	cout << "Numarul de subordonati: " << manager.getNrSubordonati() << endl;


	return 0;
}