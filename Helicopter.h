#ifndef HELICOPTER_H
#define HELICOPTER_H
#inclue "AirVehicle.h"

class Helicopter : public AirVehicle{
protected: int rotorCount;
public: 
    Helicopter(std::string brand, int year, int maxAlt, int rotorCount) : AirVehicle(brand, year, maxAlt), rotorCount(rotorCount) {}
    void getInfo() const override{
        std::cout << "Helicopter class:: Rotor count: " << rotorCount << std::endl;
        AirVehicle::getInfo();
    }
};

#endif
