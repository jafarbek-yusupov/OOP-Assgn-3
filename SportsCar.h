#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include "Car.h"

class SportsCar : public Car{
private: int maxSpeed;
public:
SportsCar(std::string brand, int year, int wheels, int numDoors, int maxSpeed) : Car(brand, year, wheels, numDoors), maxSpeed(maxSpeed){}
void getInfo() const override{
    std::cout << "SportsCar class:: Max speed: " << maxSpeed << " km/h" << std::endl;
    Car::getInfo();
}
};

#endif
