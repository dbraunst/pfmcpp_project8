/*

Project 8: Part 1/1
video: Chapter 4 Part 6

Create a branch named Part1

Public vs. Protected vs Private & Friend

Build/Run often with this task to make sure you're not breaking the code with each step.
    I recommend committing after you get each step working so you can revert to a working version easily if needed.
    it's very easy to mess this task up. 

your task: 
    0) get familiar with the classes. 

    1) Fix the include errors. 

    2) HighwayPatrol can check the speed of vehicles on the highway. 
        make this happen without adding getters to the Highway or Vehicle class

    3) implement the Highway::addVehicleInternal 
        this function should call the non-evasive member function of the derived class, so use the technique shown in the Casting video.

    4) implement the Highway::removeVehicleInternal
        this function should call the evasive member function of the derived class, if it has one. use the technique shown in the Casting video.

    5) Add a Truck type
        semi-trucks don't evade when they're pulled over, unlike cars and motorcycles.  

    6) Add some Cars to the Highway
    7) Add some Motorcycles to the Highway
    8) Add some SemiTrucks to the highway. 


 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include "Highway.h"
#include "HighwayPatrol.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"
#include "Vehicle.h"

int main()
{
    Highway highway;
    
    std::vector<Car> cars 
    { 
        Car("janice"), Car("ernesto"), Car("caillou")
    };
    std::vector<Motorcycle> motorcycles
    { 
        Motorcycle("chad"), Motorcycle("betty"), Motorcycle("brad")
    };
    
    std::vector<SemiTruck> trucks
    {
        SemiTruck("cleber"), SemiTruck("darryl"), SemiTruck("louann")
    };
    //assert(false);
    //add the cars, motorcycles and trucks to the highway using range-based for() loops: for( element : vec ) { ... }
    for (auto& i : cars) //that's why we put the & next to the type, not the variable name, when declaring a reference
    {
        highway.addVehicle(&i); // &i looks like you're taking the address of, which you are here
    }

    for (auto& i : motorcycles)
    {
        highway.addVehicle(&i);
    }

    for (auto& i : trucks)
    {
        highway.addVehicle(&i);
    }
    //be careful to not accidentally make element copies when iterating.
    
    HighwayPatrol cop;
    cop.scanHighway(&highway);

    std::cout << "done" << std::endl;

    return 0;
}
