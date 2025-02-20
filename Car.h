#ifndef CAR_H
#define CAR_H
#include "LandVehicle.h"

class Car : public LandVehicle{
private: int numDoors;
public:
    Car(std::string b, int y, int doors) : LandVehicle(b,y,4), numDoors(doors) {}
    std::string getInfo() const override{ return "Car class: Number of doors: " + std::to_string(numDoors) + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
