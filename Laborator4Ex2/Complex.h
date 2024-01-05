#pragma once
#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;

class Complex {
private:
    double re;
    double im;

public:
    Complex(double re = 0, double im = 0);
    Complex(const Complex&);
    Complex& operator=(const Complex&);
    ~Complex();

    inline double getRe() const {
        return re;
    }

    inline double getIm() const {
        return im;
    }

    inline void setRe(double) {
        this->re = re;
    }

    inline void setIm(double) {
        this->im = im;
    }

    Complex operator-() const;
    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);
    bool operator<(const Complex&) const;
    bool operator<=(const Complex&) const;
    bool operator>(const Complex&) const;
    bool operator>=(const Complex&) const;
    bool operator!=(const Complex&) const;
    bool operator==(const Complex&) const;
    Complex& operator++();     
    Complex operator++(int);   
    Complex& operator--();     
    Complex operator--(int);   

    friend Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
    friend double modul(const Complex&);
    friend Complex conjugat(const Complex&);
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);

};
#endif // !COMPLEX_H

