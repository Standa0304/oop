#pragma once
#include "Stul.h"
#include "Termin.h"

class Rezervace
{
private:
    int id;
    Termin* termin;

public:
    Rezervace(int id, Termin* termin);
    int getId();
    Termin* getTermin();
    void setTermin(Termin* termin);
};
