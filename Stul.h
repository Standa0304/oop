#pragma once
#include <string>;

using namespace std;

class Stul
{
private:
	static string barva;
	int id;
	int kapacita;
	bool obsazenost;

public:
	Stul(int id, int kapacita, bool obsazenost = false);

	int getId();
	int getKapacita();
	bool getObsazenost();

	void setObsazenost(bool obsazenost);

	static void zmenBarvu(string barva);

};

