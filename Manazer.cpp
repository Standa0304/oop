#include "Manazer.h"

Manazer::Manazer(int pocetTerminu,string firstName, string lastName, int id, Restaurace* restaurace) : Zakaznik(firstName, lastName, id)
{
    this->restaurace = restaurace;
    seznamTerminu = new Termin * [pocetTerminu];
}

Termin* Manazer::setTermin(Stul* stul, string cas, int delka)
{
    Termin* termin = new Termin(stul, cas, delka);

    return termin;
}

string Manazer::vypisInformace()
{
    string popis;
    popis = "first name: " + firstName + "last name: " + lastName + "id: " + std::to_string(id) + "Pøiøazená restaurace: " + restaurace->getNazev();
    return popis;
}

void Manazer::pridatTermin(Termin* termin)
{
    for (int i = 0; i < pocetTerminu; ++i) {
        if (seznamTerminu[i] == nullptr) {
            seznamTerminu[i] = termin;
        }
    }
}

void Manazer::odebratTermin(string cas)
{
    for (int i = 0; i < pocetTerminu; ++i) {
        if (seznamTerminu[i]->getCas() == cas) {
            delete seznamTerminu[i];
            seznamTerminu[i] = nullptr;
        }
    }
}

Termin* Manazer::getTermin(string cas)
{
    for (int i = 0; i < pocetTerminu; ++i) {
        if (seznamTerminu[i]->getCas() == cas) {
            return seznamTerminu[i];
        }
    }  return nullptr;
}

