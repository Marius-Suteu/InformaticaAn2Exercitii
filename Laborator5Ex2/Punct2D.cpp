#include "Punct2D.h"
#include <cmath>
using namespace std;

Punct2D::Punct2D() : x(0.0), y(0.0) {}

Punct2D::Punct2D(double x, double y) : x(x), y(y) {}

Punct2D::~Punct2D() {}

Punct2D& Punct2D::operator=(const Punct2D& punct) {
    if (this != &punct) {
        this->x = punct.x;
        this->y = punct.y;
    }
    return *this;
}

bool Punct2D::operator>(const Punct2D& punct) const {
    return (x > punct.x) && (y > punct.y);
}

bool Punct2D::operator>=(const Punct2D& punct) const {
    return (x >= punct.x) && (y >= punct.y);
}

bool Punct2D::operator<(const Punct2D& punct) const {
    return (x < punct.x) && (y < punct.y);
}

bool Punct2D::operator<=(const Punct2D& punct) const {
    return (x <= punct.x) && (y <= punct.y);
}

bool Punct2D::operator==(const Punct2D& punct) const {
    return (x == punct.x) && (y == punct.y);
}

bool Punct2D::operator!=(const Punct2D& punct) const {
    return !(*this == punct);
}

Punct2D Punct2D::operator+(const Punct2D& punct) const {
    return Punct2D(x + punct.x, y + punct.y);
}

Punct2D Punct2D::operator-(const Punct2D& punct) const {
    return Punct2D(x - punct.x, y - punct.y);
}

Punct2D Punct2D::operator*(const double scalar) const {
    return Punct2D(x * scalar, y * scalar);
}

Punct2D Punct2D::operator/(const double scalar) const {
    if (scalar != 0) {
        return Punct2D(x / scalar, y / scalar);
    }
    else {
        cout << "Eroare: Impartire la zero!" << std::endl;
        return Punct2D(x, y);
    }
}

Punct2D& Punct2D::operator+=(const Punct2D& punct) {
    x += punct.x;
    y += punct.y;
    return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& punct) {
    x -= punct.x;
    y -= punct.y;
    return *this;
}

Punct2D& Punct2D::operator*=(const double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Punct2D& Punct2D::operator/=(const double scalar) {
    if (scalar != 0) {
        x /= scalar;
        y /= scalar;
    }
    else {
        std::cerr << "Eroare: Impartire la zero!" << std::endl;
    }
    return *this;
}

Punct2D& Punct2D::operator++() {
    ++x;
    ++y;
    return *this;
}

Punct2D Punct2D::operator++(int) {
    Punct2D temp(*this);
    ++(*this);
    return temp;
}

Punct2D& Punct2D::operator--() {
    --x;
    --y;
    return *this;
}

Punct2D Punct2D::operator--(int) {
    Punct2D temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const Punct2D& punct) {
    os << "(" << punct.x << ", " << punct.y << ")";
    return os;
}

istream& operator>>(istream& is, Punct2D& punct) {
    is >> punct.x >> punct.y;
    return is;
}

double Punct2D::distanta(const Punct2D& punct) const {
    return sqrt(pow(x - punct.x, 2) + pow(y - punct.y, 2));
}





/* fie clasa Punct2D care va avea 2 proprietati x si y abscisa si ordonata, se vor defini 2 constructori si un destructor 
operator=. Sa se supraincarce operatorii: >,>=,<,<=,==,!=,+,-,*,/,+=.,-=,*=,/=,++,--,<<,>>. In main sa se creeze n instante
ale clasei Punct2D intr-un vector de puncte Punct2D, n se citeste de la tastatura. In clasa Punct2D se va defini o functie 
numita distanta care va calcula distanta intre doua puncte date in 2D. Fie clasa Punct3D care mosteneste clasa Punct2D 
si va avea o proprietate z in plus. Si in acest caz se vor defini 2 constructori si un destructor ,operator =. Sa se 
foloseasca apelul metodelor potrivite din Punct2D. Sa se supraincarce operatorii >,>=,<,<=,==,!=,+,-,*,/,+=.,-=,*=,/=,++,--,<<,>>
sa se foloseasca apelul operatorilor potriviti din Punct2D. In main sa se creeze m instante ale clasei Punct3D intr-un 
vector de Puncte3D, m se citeste de la tastatura. In clasa Punct3D se va suprascrie in functia numita distanta care va calcula 
distanta intre doua puncte date in 3D. */