#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

class Vehicle{
protected: std::string brand; int year;
public:
Vehicle(const std::string& brand, int year) : brand(brand), year(year){}
virtual void getInfo() const = 0; 
// virtual ~Vehicle() = default;
virtual ~Vehicle() {}
};

#endif
