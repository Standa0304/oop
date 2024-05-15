#include "Restaurace.h"

Restaurace::Restaurace(int pocetStolu, string nazev)
{
    this->pocetStolu = pocetStolu;
    seznamStolu = new Stul * [pocetStolu];
    for (int i = 0; i < pocetStolu; i++) {
        seznamStolu[i] = nullptr;
    }
    this->nazev = nazev;
}

string Restaurace::getNazev()
{
    return this->nazev;
}

void Restaurace::pridatStul(Stul* stul)
{
    for (int i = 0; i < pocetStolu; i++){
        if (seznamStolu[i] == nullptr){
            seznamStolu[i] = stul;
        }
    }
}

void Restaurace::odebratStul(int id)
{
    for (int i = 0; i < pocetStolu; ++i) {
        if (seznamStolu[i]->getId() == id) {
            delete seznamStolu[i];
            seznamStolu[i] = nullptr;
        }
    }
}

void Restaurace::setJidlo(Jidlo* jidlo)
{
    this->jidlo = jidlo;
}

Stul* Restaurace::getStul(int id)
{
    if (id >= 1 && id <= pocetStolu) {
        return seznamStolu[id - 1];
    }
    else {
        return nullptr;
    }
}

Jidlo* Restaurace::getJidlo()
{
    return this->jidlo;
}
