#pragma once
#include "Vehicul.h"
class Garaj
{
    Vehicul** vehicule;
    int maxVehicule;
    int currentVehicul;
public:
    Garaj(int maxVehicule);
    Garaj& operator+=(Vehicul* vehicul);
    void pornesteVehicule();
};

