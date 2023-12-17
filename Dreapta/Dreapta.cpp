
#include "Punct.h"

Dreapta::Dreapta() : m(1), n(0) {}

Dreapta::Dreapta(double panta, double ordonata) : m(panta), n(ordonata) {}

Dreapta::Dreapta(const Dreapta& other) : m(other.m), n(other.n) {}

Dreapta::~Dreapta() {}

