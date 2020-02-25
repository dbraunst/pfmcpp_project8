#pragma once


#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
};
