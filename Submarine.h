#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"

class Submarine : public WaterVehicle{
protected: int maxDepth;
public:
    Submarine(std::string brand, int year, std::string vesselType) : WaterVehicle(brand, year, vesselType), maxDepth(maxDepth) {}
    void getInfo() const override {
        std::cout << "Submarine class:: Max depth: " << maxDepth << " meters" << std::endl;
        WaterVehicle::getInfo();
    }
};

#endif
