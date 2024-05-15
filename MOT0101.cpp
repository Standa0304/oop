#include <iostream>
#include "Manazer.h"
#include "Jidlo.h"
#include "Restaurace.h"
#include "Rezervace.h"

using namespace std;

int main() {
    Restaurace restaurace(10, "U lva");

    for (int i = 1; i <= 10; ++i) {
        restaurace.pridatStul(new Stul(i, 4));
    }

    Jidlo steak("Steak", 250.0, "Grilovany steak s prilohou");
    restaurace.setJidlo(&steak);

    Zakaznik zakaznik1("Standa", "Motyka", 1);
    zakaznik1.rezervovat(new Termin(restaurace.getStul(1), "19:00", 2));

    Zakaznik zakaznik2("Ondra", "Motyka", 2);
    zakaznik2.rezervovat(new Termin(restaurace.getStul(2), "20:00", 1));

    Zakaznik zakaznik3("Petr", "Dvorak", 3);
    zakaznik3.rezervovat(new Termin(restaurace.getStul(3), "21:00", 3));

    Manazer manazer(5, "Adam", "Novak", 5, &restaurace);
    Termin* termin = manazer.setTermin(restaurace.getStul(5), "22:00", 2);
    zakaznik3.rezervovat(termin);

    cout << "Informace o restauraci:" << endl;
    cout << "Nazev restaurace: " << restaurace.getNazev() << endl;
    cout << "Nabizené jidlo: " << restaurace.getJidlo()->getNazev() << endl;

    cout << endl << "Obsazenost stolu:" << endl;
    for (int i = 1; i <= 10; ++i) {
        Stul* stul = restaurace.getStul(i);
        cout << "Stul " << stul->getId() << ": Obsazenost - " << (stul->getObsazenost() ? "Obsazeny" : "Volny") << endl;
    }

    cout << endl << "Informace o zakaznicich:" << endl;
    cout << zakaznik1.vypisInformace() << endl;
    cout << zakaznik2.vypisInformace() << endl;
    cout << zakaznik3.vypisInformace() << endl;

    cout << endl << "Termin pro stul " << termin->getStul()->getId() << ": " << termin->getCas() << ", delka: " << termin->getDelka() << " hodiny" << endl;

    return 0;
}
