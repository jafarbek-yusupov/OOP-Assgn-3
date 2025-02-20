#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"

class Helicopter : public AirVehicle{
private: int rotorCount;
public:
    Helicopter(std::string b, int y, int rotors) : AirVehicle(b, y, 12000), rotorCount(rotors) {}
    std::string getInfo() const override{ return "Helicopter class: Rotor count: " + std::to_string(rotorCount) + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
