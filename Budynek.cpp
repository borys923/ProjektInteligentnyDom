#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CzujnikTemperatury.h"
#include "CzujnikWilgotnosci.h"
#include "CzujnikCisnienia.h"
#include "CzujnikCzadu.h"
#include "FabrykaCzujnikow.h"
#include "Budynek.h"

void Budynek::dodajCzujnik(Czujnik *czujnik) {
    czujniki.push_back(czujnik);
}

void Budynek::wypisz() const {
    std::cout << nazwa << std::endl;
    for(unsigned int i = 0; i < czujniki.size(); i++) {
        czujniki[i]->wylosujPomiar();
        czujniki[i]->wypiszStan();
        std::cout << std::endl;
    }
}



Budynek::~Budynek() {
    for(int i = 0; i < czujniki.size(); i++) {
        delete czujniki[i];
    }
}



void Budynek::kreatorCzujnika() {
    std::string typ;
    do {
        std::cout << "Podaj typ czujnika [temperatury/wilgotnosci/cisnienia/czadu]: ";
        std::cin >> typ;
    } while(typ != "temperatury" && typ != "wilgotnosci"&& typ != "cisnienia"&& typ != "czadu");
    dodajCzujnik(FabrykaCzujnikow::pobierzFabryke().stworz(typ));
}

void Budynek::menu() {
    int opcja = 0;
    do {
        std::cout << "1) Dodaj czujnik.\n";
        std::cout << "2) Wypisz stan czujnikow.\n";
        std::cout << "3) Wyjdz.\n";
        std::cin >> opcja;
        switch(opcja) {
            case 1:
                kreatorCzujnika();
                break;
            case 2:
                wypisz();
                break;
            case 3:
            std::cout << "Wychodze z programu.\n";
                break;
            default:
            std::cout << "Nie ma takiej opcji.\n";
        }
    } while(opcja != 3);
}

void Budynek::start() {
    menu();
}

Budynek::Budynek() {
    srand(time(0));
}
