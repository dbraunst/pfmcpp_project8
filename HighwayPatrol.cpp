#include "HighwayPatrol.h"
#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("Patrol")
{
    
}

HighwayPatrol::~HighwayPatrol() {}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    for( int i = h->vehicles.size(); --i >= 0; )
    {
        auto* v = h->vehicles[i];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    //std::cout << willArrest << std::endl;
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {
        std::string vehicleType; //got it
        if(dynamic_cast<Motorcycle*>(v)) 
        {
            vehicleType = "Motorcycle";
        }
        else if(dynamic_cast<Car*>(v))
        {
            vehicleType = "Car";
        }
        else if(dynamic_cast<SemiTruck*>(v))
        {
            vehicleType = "SemiTruck";
        }
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE [ " << /*v->name << */vehicleType << " ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}
