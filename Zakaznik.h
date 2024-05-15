#pragma once
#include <string>
#include "Uzivatel.h"

using namespace std;

class Zakaznik : public Uzivatel
{
protected:
	int id;
	Rezervace* rezervace;
	static int idRez;
public:

	Zakaznik(string firstName, string lastName, int id);

	int getId();
	void rezervovat(Termin* termin);
	string vypisInformace();

	virtual string getFirstName() override;
	virtual string getLastName() override;
	virtual string getEmail() override;
	virtual void setEmail(string email) override;
	static void idP();

};

