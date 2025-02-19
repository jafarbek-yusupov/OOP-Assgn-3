#infdef AIRVEHICLE_H
#define AIRVEHICLE_H
#include "Vehicle.h"

class AirVehicle : public Vehicle{
protected: int maxAlt;
public:
    AirVehicle(std::string brand, int year, int maxAlt) : Vehicle(brand, year), maxAlt(maxAlt) {}
    void getInfo() const override{
        cout << "AirVehicle class:: Max altitude: " << maxAlt << " meters" << std::endl << "Vehicle class:: Brand: " << brand << std::endl << "Vehicle class:: Year: " << year << std::endl;
    }
};

#endif
