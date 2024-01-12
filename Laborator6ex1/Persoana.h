#pragma
#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
using namespace std;

class Persoana {
protected:
	string CNP;
	string nume;
public:

	Persoana(string, string);
	Persoana(const Persoana& other);
	Persoana& operator=(const Persoana& other);
	~Persoana();

	inline string getCNP()const {
		return CNP;
	}
	inline string getNume()const {
		return nume;
	}
	inline void setCNP(string) {
		this->CNP = CNP;
	}
	inline void setNume(string) {
		this->nume = nume;
	}

	virtual void detalii()const = 0;
};
class Student: public Persoana {
private:
	string email;
	double nota;
public:
	Student(string, string, string, double);
	Student(const Student&);
	Student& operator=(const Student&);
	~Student();
	inline string getEmail()const {
		return email;
	}
	inline double getNota()const {
		return nota;
	}
	inline void setEmail(string) {
		this->email = email;
	}
	inline void setNota(double) {
		this->nota = nota;
	}
	void detalii()const override;
};
class Profesor : public Persoana {
private:
	string email;
	string materie;
public:
	Profesor(string, string, string, string);
	Profesor(const Profesor&);
	Profesor& operator=(const Profesor&);
	~Profesor();
	inline string getEmail()const {
		return email;
	}
	inline string getMaterie()const {
		return materie;
	}
	inline void setEmail(string) {
		this->email = email;
	}
	inline void setMaterie(string) {
		this->materie = materie;
	}
	void detalii()const override;
};
class Angajat : Persoana {
private:
	string email;
	string departament;
public:
	Angajat(string, string, string, string);
	Angajat(const Angajat&);
	Angajat& operator=(const Angajat&);
	~Angajat();
	inline string getEmail()const {
		return email;
	}
	inline string getDepartament()const {
		return departament;
	}
	inline void setEmail(string) {
		this->email = email;
	}
	inline void setDepartament(string) {
		this->departament = departament;
	}
    void detalii()const override;
};

#endif
