#include "Garaj.h"

Garaj::Garaj(int maxVehicule)
{
    this->maxVehicule = maxVehicule;
    this->vehicule = new Vehicul * [this->maxVehicule];
    this->currentVehicul = 0;
}

Garaj::~Garaj()
{
    std::cout << "Sunt in destructorul din Garaj!\n";
    if (this->vehicule != nullptr)
    {
        delete vehicule;
        vehicule = nullptr;
    }
}

Garaj& Garaj::operator+=(Vehicul* vehicul)
{
    if (this->currentVehicul < this->maxVehicule)
    {
        this->vehicule[this->currentVehicul++] = vehicul;
    }
    return *this;
}

void Garaj::pornesteVehicule()
{
    printf("Am urmatoarele vehicule in garaj pe care le pornesc!\n");
    for (int i = 0; i < this->currentVehicul; i++)
    {
        this->vehicule[i]->porneste();
    }
}
