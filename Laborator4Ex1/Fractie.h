#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
using namespace std;
class Fractie {
private:
	int numitor;
	int numarator;
public:
	Fractie(int numarator = 0, int numitor = 1);
	Fractie(const Fractie&);
	Fractie& operator=(const Fractie&);
	~Fractie();
	friend Fractie operator+(const Fractie&, const Fractie&);
	friend Fractie operator-(const Fractie&, const Fractie&);
	friend Fractie operator*(const Fractie&, const Fractie&);
	friend Fractie operator/(const Fractie&, const Fractie&);
	bool operator<(const Fractie&) const;
	bool operator<=(const Fractie&) const;
	bool operator>(const Fractie&) const;
	bool operator>=(const Fractie&) const;
	bool operator!=(const Fractie&) const;
	bool operator==(const Fractie&) const;
	Fractie operator-() const;
	Fractie& operator+=(const Fractie&);
	Fractie& operator-=(const Fractie&);
	Fractie& operator*=(const Fractie&);
	Fractie& operator/=(const Fractie&);
	Fractie& operator++();
	Fractie& operator++(int a);
	Fractie& operator--();
	Fractie& operator--(int a);
	static int cmmdc(int, int);
	void simplificare();
	Fractie reciproc();
	friend ostream& operator<<(ostream&, const Fractie&);
	friend istream& operator>>(istream&, const Fractie&);

};

class NumitorZeroException : public exception
{
public:
	const char* what() const noexcept override {
		return "Impartire la 0";
	}
};


#endif
