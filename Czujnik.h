#ifndef INTELIGENTNYDOM_CZUJNIK_H
#define INTELIGENTNYDOM_CZUJNIK_H


class Czujnik {
protected:
    double pomiar;
public:
    virtual void wypiszStan() const = 0;
    void wylosujPomiar();
    double odczytajPomiar() const;
    virtual ~Czujnik();
};


#endif
