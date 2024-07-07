#pragma once
#include "Vehicul.h"
class Masina : public Vehicul {
    int maxPeople;
    int trunkVolume;
public:
    virtual void porneste();
    virtual void drive();
    void asteaptaPasagerii();
};