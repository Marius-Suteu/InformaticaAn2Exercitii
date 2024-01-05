#pragma once
#ifndef PUNCT2D_H
#define PUNCT2D_H
#include <iostream>
using namespace std;

class Punct2D {
protected:
    double x;
    double y;

public:
    Punct2D();
    Punct2D(double x, double y);
    ~Punct2D();

    Punct2D& operator=(const Punct2D& punct);

    bool operator>(const Punct2D& punct) const;
    bool operator>=(const Punct2D& punct) const;
    bool operator<(const Punct2D& punct) const;
    bool operator<=(const Punct2D& punct) const;
    bool operator==(const Punct2D& punct) const;
    bool operator!=(const Punct2D& punct) const;

    Punct2D operator+(const Punct2D& punct) const;
    Punct2D operator-(const Punct2D& punct) const;
    Punct2D operator*(const double scalar) const;
    Punct2D operator/(const double scalar) const;

    Punct2D& operator+=(const Punct2D& punct);
    Punct2D& operator-=(const Punct2D& punct);
    Punct2D& operator*=(const double scalar);
    Punct2D& operator/=(const double scalar);

    Punct2D& operator++(); 
    Punct2D operator++(int); 
    Punct2D& operator--(); 
    Punct2D operator--(int); 

    friend std::ostream& operator<<(std::ostream& os, const Punct2D& punct);
    friend std::istream& operator>>(std::istream& is, Punct2D& punct);

    double distanta(const Punct2D& punct) const;
};

#endif // PUNCT2D_H
