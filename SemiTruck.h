#pragma once


#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n) : Vehicle(n) {}
    ~SemiTruck() {}

    void EnterHighway(){
        setSpeed(65);
        std::cout << name << ": crankin up the radio!" << std::endl;
    }

    void PullOver(){
        std::cout << name << ": sorry officer, I'll take it easier on the downhills!" << std::endl;
        setSpeed(0);
    }

    std::string vehicleType = "Motorcycle";
};
