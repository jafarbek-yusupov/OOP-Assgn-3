#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"

class Submarine : public WaterVehicle{
private: int maxDepth;
public:
    Submarine(std::string b, int y, int depth) : WaterVehicle(b, y, "Military"), maxDepth(depth) {}
    std::string getInfo() const override{ return "Submarine class: Max depth: " + std::to_string(maxDepth) + " meters" + " Vehicle class: Brand: " + brand + " Vehicle class: Year: " + std::to_string(year);}
};

#endif
