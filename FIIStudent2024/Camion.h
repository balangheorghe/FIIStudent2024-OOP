#pragma once
#include "Vehicul.h"
class Camion : public Vehicul {
    int maxTrailerCapacity;
public:
    Camion();
    virtual void porneste();
    virtual void drive();
    void incarcaRemorca();
};