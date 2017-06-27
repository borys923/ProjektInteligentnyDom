#ifndef INTELIGENTNYDOM_BUDYNEK_H
#define INTELIGENTNYDOM_BUDYNEK_H

#include <vector>
#include <string>
#include "Czujnik.h"
#include <vector>

class Budynek {
public:
    Budynek();
     ~Budynek();
    void dodajCzujnik(Czujnik* czujnik);
    void wypisz() const;
    void start();
private:
    std::string nazwa;
    std::vector<Czujnik*> czujniki;
    void wypiszStanPomieszczen() const;
    void kreatorCzujnika();
    void menu();
};


#endif //INTELIGENTNYDOM_BUDYNEK_H
