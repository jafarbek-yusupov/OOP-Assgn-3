#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H
#include "Vehicle.h"

class WaterVehicle : public Vehicle{
protected: std::string vesselType;
public:
    WaterVehicle(std::string brand, int year, std::string vesselType) : Vehicle(brand, year), vesselType(vesselType) {}
    void getInfo() const override{
        std::cout << "WaterVehicle class:: Vessel type: " << vesselType << std::endl;
        std::cout << "Vehicle class:: Brand: " << brand << std::endl << "Vehicle class:: Year: " << year << std::endl;
    }
};

#endif
