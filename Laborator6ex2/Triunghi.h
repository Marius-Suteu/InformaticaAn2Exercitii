#pragma once
#ifndef TRIUNGHI_H
#define TRIUNGHI_H
#include <iostream>
using namespace std;

class Triunghi {
protected:
	double latura1;
	double latura2;
	double latura3;
public:
	Triunghi();
	Triunghi(double, double, double);
	Triunghi(const Triunghi&);
	Triunghi& operator=(const Triunghi&);
	~Triunghi();

	inline double getLatura1() {
		return latura1;
	}
	inline double getLatura2() {
		return latura2;
	}
	inline double getLatura3() {
		return latura3;
	}
	
	virtual double getArie()const = 0;
	virtual double getPerimetru()const = 0;;
};
class Dreptunghic : public Triunghi {
public:
	Dreptunghic(double, double, double);
	Dreptunghic(const Dreptunghic&);
	Dreptunghic& operator=(const Dreptunghic&);
	~Dreptunghic();

	double getArie()const override;
	double getPerimetru()const override;
};
class Isoscel: public Triunghi {
public:
	Isoscel(double, double, double);
	Isoscel(const Isoscel&);
	Isoscel& operator=(const Isoscel&);
	~Isoscel();

	double getArie()const override;
	double getPerimetru()const override;
};
class DreptunghicIsoscel : public Dreptunghic, public Isoscel {
public:
	DreptunghicIsoscel(double, double, double);
	DreptunghicIsoscel(const DreptunghicIsoscel&);
	DreptunghicIsoscel& operator=(const DreptunghicIsoscel&);
	~DreptunghicIsoscel();

	double getArie()const override;
	double getPerimetru()const override;
};
class Echilateral : public Isoscel {
	Echilateral(double, double, double);
	Echilateral(const Echilateral&);
	Echilateral& operator=(const Echilateral&);
	~Echilateral();

	double getArie()const override;
	double getPerimetru()const override;
};

#endif // !TRIUNGHI_H

