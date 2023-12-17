#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>
#include <string>


class Fractie {
private:
	int numarator;
	int numitor;
public:
	Fractie(int num = 0, int den = 1);

	Fractie(const Fractie& other);

	void adunare(int, int);
	void scadere(int, int);
	void inmultire(int, int);
	void impartire(int, int);
	int static cmmdc(int, int);

	void simplifica();
	Fractie reciproc();
	void print();

	~Fractie();

};
#endif FRACTIE_H;