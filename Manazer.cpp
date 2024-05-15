#include "Manazer.h"

Manazer::Manazer(string firstName, string lastName, int id, Restaurace* restaurace) : Zakaznik(firstName, lastName, id)
{
    this->restaurace = restaurace;
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

