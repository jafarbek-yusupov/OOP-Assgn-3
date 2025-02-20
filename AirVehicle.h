#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include "Vehicle.h"

class AirVehicle : public Vehicle{
protected: int maxAltitude;
public:
    AirVehicle(std::string b, int y, int altitude) : Vehicle(b,y), maxAltitude(altitude) {}
    std::string getInfo() const override{ return "AirVehicle class: Max altitude: " + std::to_string(maxAltitude) + " meters" + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
