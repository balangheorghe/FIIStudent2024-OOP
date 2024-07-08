#include "Camion.h"

Camion::Camion()
{
    this->wheelsNumber = 6;
    this->maxTrailerCapacity = 30;
}

void Camion::porneste() {
    std::cout << "Am pornit camionul!\n";
    std::cout << "Aceasta are " << this->wheelsNumber << " roti si poate inca maxim " << this->maxTrailerCapacity << "t\n";
}

void Camion::drive() {
    std::cout << "Am inceput sa conduc camionul!\n";
}

void Camion::incarcaRemorca() {
    std::cout << "Incarc remorca!\n";
}
