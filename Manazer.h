#pragma once
#include "Zakaznik.h"
#include "Termin.h"
#include "Restaurace.h"

using namespace std;

class Manazer : public Zakaznik
{
private:
	Restaurace* restaurace;
	Termin** seznamTerminu;
	int pocetTerminu;
public:
	Manazer(int pocetTerminu, string firstName, string lastName, int id, Restaurace* restaurace);
	Termin* setTermin(Stul* stul, string cas, int delka);

	string vypisInformace();

	void pridatTermin(Termin* termin);
	void odebratTermin(string cas);
	Termin* getTermin(string cas);
};

