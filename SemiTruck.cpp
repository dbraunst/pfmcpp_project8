#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() {}

void SemiTruck::EnterHighway()
{
    setSpeed(65);
    std::cout << name << ": crankin up the radio!" << std::endl;
}

void SemiTruck::PullOver()
{
    std::cout << name << ": sorry officer, I'll take it easier on the downhills!" << std::endl;
    setSpeed(0);
}
