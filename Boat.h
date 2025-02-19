#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"

class Boat : public WaterVehicle{
protected: double length;
public:
    Boat(std::string brand, int year, std::string vesselType, double length) : WaterVehicle(brand, year, veseelType), length(length) {}
    void getInfo() const override {
        cout << "Boat class:: Length: " << length << " meters" << std::endl;
        WaterVehicle::getInfo(); 
    }
};

#endif
