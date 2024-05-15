#pragma once
#include "Stul.h"
#include <string>
#include "Jidlo.h"

using namespace std;

class Restaurace
{
private:
	string nazev;
	Stul** seznamStolu;
	int pocetStolu;
	Jidlo* jidlo;

public:
	Restaurace(int pocetStolu, string nazev);

	string getNazev();

	void pridatStul(Stul* stul);
	void odebratStul(int id);

	Stul* getStul(int id);
	void setJidlo(Jidlo* jidlo);
	Jidlo* getJidlo();
};

