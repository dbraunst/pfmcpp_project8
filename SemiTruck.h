#pragma once


#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck();

    void PullOver(){
        std::cout << name << ": sorry officer, I'll take it easier on the downhills!" << std::endl;
        setSpeed(0);
    }
};
