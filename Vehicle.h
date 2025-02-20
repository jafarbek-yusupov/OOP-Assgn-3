#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle{
protected: std::string brand; int year;
public:
    Vehicle(std::string b, int y) : brand(b), year(y) {}
    virtual std::string getInfo() const = 0;
    virtual ~Vehicle() {}
};

#endif
