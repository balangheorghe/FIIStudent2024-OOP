#pragma once
#include "Vehicul.h"
class Camion : public Vehicul {
    int maxCapacity;
public:
    virtual void porneste();
    virtual void drive();
    void incarcaRemorca();
};