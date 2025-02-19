#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"

class Submarine : public WaterVehicle{
private: int maxDepth;
public:
    Submarine(std::string brand, int year, std::string vesselType, int maxDepth) : WaterVehicle(brand, year, vesselType), maxDepth(maxDepth) {}
    void getInfo() const override{
        std::cout << "Submarine class:: Max depth: " << maxDepth << " meters" << std::endl;
        WaterVehicle::getInfo();
    }
};

#endif
