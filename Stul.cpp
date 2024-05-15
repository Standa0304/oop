#include "Stul.h"

	string Stul::barva = "cerna";

Stul::Stul(int id, int kapacita, bool obsazenost)
{
	this->id = id;
	this->kapacita = kapacita;
	this->obsazenost = obsazenost;
}

int Stul::getId()
{
	return this->id;
}

int Stul::getKapacita()
{
	return this->kapacita;
}

bool Stul::getObsazenost()
{
	return this->obsazenost;
}

void Stul::setObsazenost(bool obsazenost)
{
	this->obsazenost = obsazenost;
}

void Stul::zmenBarvu(string barva)
{
	Stul::barva = barva;
}
