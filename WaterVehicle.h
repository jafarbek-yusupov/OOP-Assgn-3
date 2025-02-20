#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H
#include "Vehicle.h"

class WaterVehicle : public Vehicle{
protected: std::string vesselType;
public:
    WaterVehicle(std::string b, int y, std::string type) : Vehicle(b,y), vesselType(type) {}
    std::string getInfo() const override{ return "WaterVehicle class: Vessel type: " + vesselType + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
