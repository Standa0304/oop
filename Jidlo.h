#pragma once
#include <string>

using namespace std;

class Jidlo
{
private:
	string nazev;
	double cena;
	string popis;
public:
	Jidlo(string nazev, double cena);
	Jidlo(string nazev, double cena, string popis);

	string getNazev();
	double getCena();
	string getPopis();

};

