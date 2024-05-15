#include "Rezervace.h"

Rezervace::Rezervace(int id, Termin* termin)
{
    this->id = id;
    this->termin = termin;
}

int Rezervace::getId()
{
    return this->id;
}

Termin* Rezervace::getTermin()
{
    return this->termin;
}
void Rezervace::setTermin(Termin* termin)
{
    this->termin = termin;
}
