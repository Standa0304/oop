#pragma once
#include <string>

using namespace std;

class AbtractUzivatel
{
	virtual string getFirstName() = 0;
	virtual string getLastName() = 0;
	virtual string getEmail() = 0;
	virtual void setEmail(string email) = 0;
};

