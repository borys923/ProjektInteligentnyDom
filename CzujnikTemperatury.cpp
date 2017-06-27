#include <iostream>
#include "CzujnikTemperatury.h"


void CzujnikTemperatury::wypiszStan() const {
    std::cout << "CZUJNIK TEMPERATURY\n";
    std::cout << "Temperatura = " << odczytajPomiar() / 2 * 10 + 5 << "'C\n\n";
}
