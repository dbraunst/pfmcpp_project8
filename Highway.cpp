#include "Highway.h"

#include <cassert>


void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    //assert(false);

    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if (Car* sedan = dynamic_cast<Car*>(v))
    {
        sedan->closeWindows();
    }

    if (Motorcycle* bike = dynamic_cast<Motorcycle*>(v))
    {
        bike->lanesplitAndRace(90);
    }
    
    if (SemiTruck* lorry = dynamic_cast<SemiTruck*>(v))
    {
        lorry->PullOver();
    }

}

void Highway::removeVehicleInternal(Vehicle* v)
{
    //assert(false);

    /*
    depending on the derived type, call the member function that tries to evade the cops. 

    trucks pull over, but cars and bikes try to evade!!
    */
    if (Car* sedan = dynamic_cast<Car*>(v))
    {
        sedan->tryToEvade();
    }

    if (Motorcycle* bike = dynamic_cast<Motorcycle*>(v))
    {
        bike->tryToEvade();
    }

}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
