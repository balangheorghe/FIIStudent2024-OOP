#include "Masina.h"

Masina::Masina()
{
    this->wheelsNumber = 4;
    this->maxPeople = 5;
    this->trunkVolume = 300;
}

void Masina::porneste(){
    std::cout << "Am pornit masina!\n";
    std::cout << "Aceasta are " << this->wheelsNumber << " roti si poate acomoda maxim " << this->maxPeople << " persoane si " << this->trunkVolume << "l de bagaje\n";
}

void Masina::drive() {
    std::cout << "Am inceput sa conduc masina!\n";
}

void Masina::asteaptaPasagerii() {
    std::cout << "Astept pasagerii!\n";
}

