#pragma once
#include <iostream>
class Vehicul {
protected:
    int wheelsNumber;
public:
    /*virtual void porneste() {
        std::cout << "Am pornit vehiculul!\n";
    }*/
    /*void porneste() {
        std::cout << "Am pornit vehiculul!\n";
    }*/
    virtual void porneste() = 0;
    virtual void drive() = 0;
};