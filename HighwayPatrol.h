#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : protected Vehicle
{
    HighwayPatrol();
    ~HighwayPatrol() {}
    
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    std::string vehicleType = "";
};
