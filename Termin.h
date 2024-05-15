#pragma once
#include "Stul.h"
#include <string>

using namespace std;
class Termin
{
private:
	Stul* stul;
	string cas;
	int delka;
public:
	Termin(Stul* stul, string cas, int delka);

	Stul* getStul();
	string getCas();
	int getDelka();
};

