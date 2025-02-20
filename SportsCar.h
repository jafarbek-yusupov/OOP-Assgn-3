#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include "LandVehicle.h"

class SportsCar : public LandVehicle{
private: int maxSpeed;
public:
    SportsCar(std::string b, int y, int speed) : LandVehicle(b,y,4), maxSpeed(speed) {}
    std::string getInfo() const override{ return "Sportscar class: Max speed: " + std::to_string(maxSpeed) + " km/h" + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
