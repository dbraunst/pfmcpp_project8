#pragma once

#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;

    void EnterHighway(); FIXME member variables and functions don't start with a capital letter

    void PullOver(); FIXME member variables and functions don't start with a capital letter
};
