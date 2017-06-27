#include <iostream>
#include "CzujnikCisnienia.h"


void CzujnikCisnienia::wypiszStan() const {
    std::cout << "CZUJNIK CISNIENIA\n";
    std::cout << "Cisnienie = " << odczytajPomiar() / 2 + 1000 << "HPa\n\n";
}
