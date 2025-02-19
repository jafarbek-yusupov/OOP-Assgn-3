#ifndef TRUCK_H
#define TRUCK_H
#include "LandVehicle.h"

class Truck : public LandVehicle {
protected: double loadCapacity;
public:
    Truck(std::string brand, int year, int wheels, double loadCapacity): LandVehicle(brand, year, wheels), loadCapacity(loadCapacity) {}
    void getInfo() const override {
        std::cout << "Truck class:: Load capacity: " << loadCapacity << std::endl;
        LandVehicle::getInfo();
    }
};

#endif
