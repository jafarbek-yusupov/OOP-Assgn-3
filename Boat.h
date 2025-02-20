#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"

class Boat : public WaterVehicle{
private: double length;
public:
    Boat(std::string b, int y, double len) : WaterVehicle(b, y, "Recreational"), length(len) {}
    std::string getInfo() const override{ return "Boat class: Length: " + std::to_string(length) + " meters" + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
