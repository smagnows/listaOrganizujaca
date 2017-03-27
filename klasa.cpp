#include <iostream>
#include "klasa.h"
void dzialaj(void)
{
	lista1* muj = new lista1;
	int opcja;
	while(1){
		//opcja = new int;
		std::cout << "Opcje\n1. Dodaj element na poczatek listy\n2. Usun element o id\n3. Wypisz\n4. Wypisz konkretny element\n";
		std::cin >> opcja;
		switch(opcja) {
			case 1: muj->dodajElementPocz();
			break;
			case 2: muj->usunElementID();
			break;
			case 3: muj->wypisz();
			break;
			case 4: muj->dajLiczbe();
			break;
			default: break;
		}//switch
		//delete opcja;
	}//while
}//void dzialaj

