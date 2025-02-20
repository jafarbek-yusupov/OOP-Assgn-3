#ifndef TRUCK_H
#define TRUCK_H
#include "LandVehicle.h"

class Truck : public LandVehicle{
private: double loadCapacity;
public:
    Truck(std::string b, int y, double capacity) : LandVehicle(b, y, 6), loadCapacity(capacity) {}
    std::string getInfo() const override{ return "Truck class: Load capacity: " + std::to_string(loadCapacity) + " tons" + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
