#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H
#include "Vehicle.h"

class LandVehicle : public Vehicle{
protected: int wheels;
public: 
LandVehicle(std::string brand, int year, int wheels) : Vehicle(brand, year), wheels(wheels){}
void getInfo() const override {
    std::cout << "LandVehicle class:: Number of wheels: " << wheels << std::endl;
    std::cout << "Vehicle class:: Brand: " << brand << std::endl << "Vehicle class:: Year: " << year << std::endl;
}
};

#endif
