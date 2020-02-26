#pragma once

#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;

    void EnterHighway();

    void PullOver();
};
