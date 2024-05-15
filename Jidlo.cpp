#include "Jidlo.h"

Jidlo::Jidlo(string nazev, double cena)
{
    this->nazev = nazev;
    this->cena = cena;
}

Jidlo::Jidlo(string nazev, double cena, string popis)
{
    this->nazev = nazev;
    this->cena = cena;
    this->popis = popis;
}

string Jidlo::getNazev()
{
    return this->nazev;
}

double Jidlo::getCena()
{
    return this->cena;
}

string Jidlo::getPopis()
{
    return this->popis;
}
