#include "Termin.h"

Termin::Termin(Stul* stul, string cas, int delka)
{
    this->stul = stul;
    this->cas = cas;
    this->delka = delka;
}

Stul* Termin::getStul()
{
    return this->stul;
}

string Termin::getCas()
{
    return this->cas;
}

int Termin::getDelka()
{
    return this->delka;
}
