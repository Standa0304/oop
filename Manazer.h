#pragma once
#include "Zakaznik.h"
#include "Termin.h"
#include "Restaurace.h"

using namespace std;

class Manazer : public Zakaznik
{
private:
	Restaurace* restaurace;
public:
	Manazer(string firstName, string lastName, int id, Restaurace* restaurace);
	Termin* setTermin(Stul* stul, string cas, int delka);

	string vypisInformace();
};

