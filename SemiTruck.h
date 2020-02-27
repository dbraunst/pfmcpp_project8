#pragma once

#include <string>
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;

    void enterHighway(); //FIXME member variables and functions don't start with a capital letter

    void pullOver(); //FIXME member variables and functions don't start with a capital letter
};
