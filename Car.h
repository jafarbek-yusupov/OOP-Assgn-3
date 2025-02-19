#ifndef CAR_H
#define CAR_H
#include "LandVehicle.h"

class Car : public LandVehicle{
private: int numDoors;
public:
Car(std::string brand, int year, int wheels, int numDoors) : LandVehicle(brand, year, wheels), numDoors(numDoors) {}
void getInfo() const override{ 
    std::cout << "Car class:: Number of doors: " << numDoors << std::endl; 
    LandVehicle::getInfo();
} 
};

#endif
