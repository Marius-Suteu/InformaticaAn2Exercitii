#pragma once
#ifndef PUNCT3D_H
#define PUNCT3D_H
#include "Punct2D.h"
using namespace std;

class Punct3D : public Punct2D {
private:
    double z;

public:
    Punct3D();
    Punct3D(double x, double y, double z);
    ~Punct3D();

    Punct3D& operator=(const Punct3D& punct);

    bool operator>(const Punct3D& punct) const;
    bool operator>=(const Punct3D& punct) const;
    bool operator<(const Punct3D& punct) const;
    bool operator<=(const Punct3D& punct) const;
    bool operator==(const Punct3D& punct) const;
    bool operator!=(const Punct3D& punct) const;

    Punct3D operator+(const Punct3D& punct) const;
    Punct3D operator-(const Punct3D& punct) const;
    Punct3D operator*(const double scalar) const;
    Punct3D operator/(const double scalar) const;

    Punct3D& operator+=(const Punct3D& punct);
    Punct3D& operator-=(const Punct3D& punct);
    Punct3D& operator*=(const double scalar);
    Punct3D& operator/=(const double scalar);

    Punct3D& operator++();
    Punct3D operator++(int);
    Punct3D& operator--();
    Punct3D operator--(int);

    friend std::ostream& operator<<(std::ostream& os, const Punct3D& punct);
    friend std::istream& operator>>(std::istream& is, Punct3D& punct);

    double distanta(const Punct3D& punct) const;
};

#endif // PUNCT3D_H
