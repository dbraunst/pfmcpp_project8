#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    //~Car();
    void closeWindows();

    void tryToEvade() override;
};
