#include <iostream>
#include <math.h>;
#include "Complex.h"
using namespace std;

Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
}
Complex::Complex(const Complex& other) {
	this->re = other.re;
	this->im = other.im;
}
Complex& Complex:: operator=(const Complex& other) {
	this->re = other.re;
	this->im = other.im;
	return *this;
}
Complex::~Complex() {}

Complex Complex::operator-() const {
    return Complex(-re, -im);
}

Complex& Complex::operator+=(const Complex& other) {
    re += other.re;
    im += other.im;
    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    re -= other.re;
    im -= other.im;
    return *this;
}

Complex& Complex::operator*=(const Complex& other) {
    double temp_re = re * other.re - im * other.im;
    double temp_im = re * other.im + im * other.re;
    re = temp_re;
    im = temp_im;
    return *this;
}

Complex& Complex::operator/=(const Complex& other) {
    double denominator = other.re * other.re + other.im * other.im;
    double temp_re = (re * other.re + im * other.im) / denominator;
    double temp_im = (im * other.re - re * other.im) / denominator;
    re = temp_re;
    im = temp_im;
    return *this;
}

bool Complex::operator<(const Complex& other) const {
    return (re * re + im * im) < (other.re * other.re + other.im * other.im);
}

bool Complex::operator<=(const Complex& other) const {
    return (re * re + im * im) <= (other.re * other.re + other.im * other.im);
}

bool Complex::operator>(const Complex& other) const {
    return !(*this <= other);
}

bool Complex::operator>=(const Complex& other) const {
    return !(*this < other);
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

bool Complex::operator==(const Complex& other) const {
    return (re == other.re) && (im == other.im);
}

Complex& Complex::operator++() {
    ++re;
    ++im;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp = *this;
    ++(*this);
    return temp;
}

Complex& Complex::operator--() {
    --re;
    --im;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp = *this;
    --(*this);
    return temp;
}

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.re + c2.re, c1.im + c2.im);
}

Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.re - c2.re, c1.im - c2.im);
}

Complex operator*(const Complex& c1, const Complex& c2) {
    double real = c1.re * c2.re - c1.im * c2.im;
    double imag = c1.re * c2.im + c1.im * c2.re;
    return Complex(real, imag);
}

Complex operator/(const Complex& c1, const Complex& c2) {
    double denominator = c2.re * c2.re + c2.im * c2.im;
    double real = (c1.re * c2.re + c1.im * c2.im) / denominator;
    double imag = (c1.im * c2.re - c1.re * c2.im) / denominator;
    return Complex(real, imag);
}

double modul(const Complex& c) {
    return sqrt(c.re * c.re + c.im * c.im);
}

Complex conjugat(const Complex& c) {
    return Complex(c.re, -c.im);
}

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.re << " + " << c.im << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex& c) {
    cout << "Partea reala: ";
    in >> c.re;
    cout << "Partea imaginara: ";
    in >> c.im;
    return in;
}