#include "Triunghi.h"
#include <iostream>
#include <math.h>
using namespace std;

Triunghi::Triunghi() {
	this->latura1 = 0;
	this->latura2 = 0;
	this->latura3 = 0;
}
Triunghi::Triunghi(double latura1, double latura2, double latura3) {
	this->latura1 = latura3;
	this->latura2 = latura3;
	this->latura3 = latura3;
}
Triunghi::Triunghi(const Triunghi& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
}
Triunghi& Triunghi::operator=(const Triunghi& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
	return *this;
}
Triunghi::~Triunghi(){}

Dreptunghic::Dreptunghic(double latura1, double latura2, double latura3) {
	this->latura1 = latura1;
	this->latura2 = latura2;
	this->latura3 = latura3;
}
Dreptunghic::Dreptunghic(const Dreptunghic& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
}
Dreptunghic& Dreptunghic::operator=(const Dreptunghic& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
	return *this;
}
Dreptunghic::~Dreptunghic(){}

double Dreptunghic::getArie()const {
	return (latura1 * latura2) / 2;
}
double Dreptunghic::getPerimetru()const {
	return latura1 + latura2 + latura3;
}

Isoscel::Isoscel(double latura1, double latura2, double latura3) {
	this->latura1 = latura1;
	this->latura2 = latura2;
	this->latura3 = latura3;
}
Isoscel::Isoscel(const Isoscel& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
}
Isoscel& Isoscel::operator=(const Isoscel& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
	return *this;
}
Isoscel::~Isoscel(){}

double Isoscel::getArie()const {
	double baza = latura1; 
	double inaltime = sqrt(latura2 * latura2 - (baza * baza / 4)); 
	return (baza * inaltime) / 2;
}
double Isoscel::getPerimetru()const {
	return latura1 + latura2 + latura3;
}
DreptunghicIsoscel::DreptunghicIsoscel(double latura1, double latura2, double latura3) : Dreptunghic(latura1, latura2, latura3), Isoscel(latura1, latura2, latura3) {
	DreptunghicIsoscel::DreptunghicIsoscel(latura1, latura2, latura3); {
		this->latura1 = latura1;
		this->latura2 = latura2;
		this->latura3 = latura3;
	}
	DreptunghicIsoscel::DreptunghicIsoscel(const Isoscel& other) {
		this->latura1 = other.latura1;
		this->latura2 = other.latura2;
		this->latura3 = other.latura3;
	}
	DreptunghicIsoscel& DreptunghicIsoscel::operator=(const Isoscel & other) {
		this->latura1 = other.latura1;
		this->latura2 = other.latura2;
		this->latura3 = other.latura3;
		return *this;
	}
	DreptunghicIsoscel::~DreptunghicIsoscel() {}

	double DreptunghicIsoscel::getArie() const {
		return (latura1 * latura2) / 2;
	}

	double DreptunghicIsoscel::getPerimetru() const {
		return latura1 + latura2 + latura3;
	}
}
Echilateral::Echilateral(double latura1, double latura2, double latura3) {
	this->latura1 = latura1;
	this->latura2 = latura2;
	this->latura3 = latura3;
}
Echilateral::Echilateral(const Echilateral& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
}
Echilateral& Echilateral::operator=(const Echilateral& other) {
	this->latura1 = other.latura1;
	this->latura2 = other.latura2;
	this->latura3 = other.latura3;
	return *this;
}
Echilateral::~Echilateral() {}

double Echilateral::getArie()const {
	return (sqrt(3) / 4) * latura1 * latura1;
}

double Echilateral::getPerimetru()const {
	return latura1 * 3;
}