#pragma once
#include <string>
#include "Rezervace.h"
#include "AbtractUzivatel.h"

using namespace std;

class Uzivatel : public AbtractUzivatel
{
protected:
	string firstName;
	string lastName;
	string email;

public:

	Uzivatel(string firstName, string lastName);
	 
	virtual string getFirstName() = 0;
	virtual string getLastName() = 0;
	virtual string getEmail() = 0;
	virtual void setEmail(string email) = 0;
};

