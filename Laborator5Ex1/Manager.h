#include <iostream>
#include "Angajat.h"
using namespace std;
class Manager : public Angajat {
protected:
	int nrSubordonati;
public:
	Manager(double tarifOrar, int nrOre, int nrSubordonati);
	Manager(const Manager&);
	Manager& operator=(const Manager&);
	~Manager();
	
	inline double getSalar() {
		return Angajat::getSalar() * 1.5;
	}
	inline int getNrSubordonati() {
		return nrSubordonati;
	}
};
