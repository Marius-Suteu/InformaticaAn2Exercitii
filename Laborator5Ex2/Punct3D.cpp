#include "Punct3D.h"
#include "Punct2D.h"
#include <cmath>
using namespace std;

Punct3D::Punct3D() : Punct2D(), z(0.0) {}

Punct3D::Punct3D(double x, double y, double z) : Punct2D(x, y), z(z) {}

Punct3D::~Punct3D() {}

Punct3D& Punct3D::operator=(const Punct3D& punct) {
    if (this != &punct) {
        Punct2D::operator=(punct);
        this->z = punct.z;
    }
    return *this;
}

bool Punct3D::operator>(const Punct3D& punct) const {
    return Punct2D::operator>(punct) && (z > punct.z);
}

bool Punct3D::operator>=(const Punct3D& punct) const {
    return Punct2D::operator>=(punct) && (z >= punct.z);
}

bool Punct3D::operator<(const Punct3D& punct) const {
    return Punct2D::operator<(punct) && (z < punct.z);
}

bool Punct3D::operator<=(const Punct3D& punct) const {
    return Punct2D::operator<=(punct) && (z <= punct.z);
}

bool Punct3D::operator==(const Punct3D& punct) const {
    return Punct2D::operator==(punct) && (z == punct.z);
}

bool Punct3D::operator!=(const Punct3D& punct) const {
    return !(*this == punct);
}

Punct3D Punct3D::operator+(const Punct3D& punct) const {
    return Punct3D(x + punct.x, y + punct.y, z + punct.z);
}

Punct3D Punct3D::operator-(const Punct3D& punct) const {
    return Punct3D(x - punct.x, y - punct.y, z - punct.z);
}

Punct3D Punct3D::operator*(const double scalar) const {
    return Punct3D(x * scalar, y * scalar, z * scalar);
}

Punct3D Punct3D::operator/(const double scalar) const {
    if (scalar != 0) {
        return Punct3D(x / scalar, y / scalar, z / scalar);
    }
    else {
        std::cerr << "Eroare: Impartire la zero!" << std::endl;
        return Punct3D(x, y, z);
    }
}

Punct3D& Punct3D::operator+=(const Punct3D& punct) {
    x += punct.x;
    y += punct.y;
    z += punct.z;
    return *this;
}

Punct3D& Punct3D::operator-=(const Punct3D& punct) {
    x -= punct.x;
    y -= punct.y;
    z -= punct.z;
    return *this;
}

Punct3D& Punct3D::operator*=(const double scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Punct3D& Punct3D::operator/=(const double scalar) {
    if (scalar != 0) {
        x /= scalar;
        y /= scalar;
        z /= scalar;
    }
    else {
        cout << "Eroare: Impartire la zero!" << endl;
    }
    return *this;
}

Punct3D& Punct3D::operator++() {
    ++x;
    ++y;
    ++z;
    return *this;
}

Punct3D Punct3D::operator++(int) {
    Punct3D temp(*this);
    ++(*this);
    return temp;
}

Punct3D& Punct3D::operator--() {
    --x;
    --y;
    --z;
    return *this;
}

Punct3D Punct3D::operator--(int) {
    Punct3D temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const Punct3D& punct) {
    os << "(" << punct.x << ", " << punct.y << ", " << punct.z << ")";
    return os;
}

istream& operator>>(istream& is, Punct3D& punct) {
    is >> punct.x >> punct.y >> punct.z;
    return is;
}

double Punct3D::distanta(const Punct3D& punct) const {
    double dist2D = Punct2D::distanta(punct);
    return sqrt(pow(dist2D, 2) + pow(z - punct.z, 2));
}
