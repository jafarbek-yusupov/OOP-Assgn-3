#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H
#include "Vehicle.h"

class LandVehicle : public Vehicle{
protected:
    int numWheels;
public:
    LandVehicle(std::string b, int y, int wheels) : Vehicle(b,y), numWheels(wheels) {}
    std::string getInfo() const override{ return "LandVehicle class: Number of wheels: " + std::to_string(numWheels) + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
