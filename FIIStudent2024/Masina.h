#pragma once
#include "Vehicul.h"
class Masina : public Vehicul {
    int maxPeople;
    int trunkVolume;
public:
    Masina();
    virtual void porneste();
    virtual void drive();
    void asteaptaPasagerii();
};