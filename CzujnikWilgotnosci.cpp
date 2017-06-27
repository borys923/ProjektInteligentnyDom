
#include <iostream>
#include "CzujnikWilgotnosci.h"


void CzujnikWilgotnosci::wypiszStan() const {
    std::cout << "CZUJNIK WILGOTNOSCI\n";
    std::cout << "Wilgotnosc = " << odczytajPomiar() * 20.0 << "%\n";
}
