#include "Czujnik.h"

#include <cstdlib>

void Czujnik::wylosujPomiar() {
    pomiar = (double)(rand() % 501) / (double)100;
}

double Czujnik::odczytajPomiar() const {
    return pomiar;
}

Czujnik::~Czujnik() {

}
