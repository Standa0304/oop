#include "Zakaznik.h"

int Zakaznik::idRez = 0;

Zakaznik::Zakaznik(string firstName, string lastName, int id) : Uzivatel(firstName, lastName)
{
    this->id = id;
}

int Zakaznik::getId()
{
    return this->id;
}

void Zakaznik::rezervovat(Termin* termin)
{
    if (rezervace != nullptr) {
        delete rezervace;
    }
    rezervace = new Rezervace(idRez, termin);
}

string Zakaznik::vypisInformace()
{
    string popis;
    popis = "first name: " + firstName + " last name: " + lastName + " id: " + std::to_string(id);
    return popis;
}

string Zakaznik::getFirstName()
{
    return firstName;
}

string Zakaznik::getLastName()
{
    return lastName;
}

string Zakaznik::getEmail()
{
    if (email.empty()) {
        return "Nebyl zadán email";
    }
    else {
        return email;
    }
}


void Zakaznik::setEmail(string email)
{
    this->email = email;
}

void Zakaznik::idP()
{
    Zakaznik::idRez++;
}
