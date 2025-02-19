#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"

class Boat : public WaterVehicle{
private: double length;
public:
Boat(std::string brand, int year, std::string vesselType, double length) : WaterVehicle(brand, year, vesselType), length(length) {}
void getInfo() const override{
    std::cout << "Boat class:: Length: " << length << " meters" << std::endl;
    WaterVehicle::getInfo(); 
}
};

#endif
