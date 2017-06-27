#include <iostream>
#include "CzujnikCzadu.h"


void CzujnikCzadu::wypiszStan() const {
    std::cout << "CZUJNIK CZADU\n";
    std::cout << "Poziom czadu = " << odczytajPomiar() / 2 + 5 << "%\n\n";
}
