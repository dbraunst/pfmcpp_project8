#pragma once

#include <string>
#include <iostream>

struct HighwayPatrol;

struct Vehicle
{
    //inheritence specifiers !apply to class ?
    //ergo should include highway? instance?
    Vehicle(const std::string& n);
    virtual ~Vehicle();
    
    virtual void setSpeed(int s);
    virtual void tryToEvade();
    
protected:
    int speed = 0;
    std::string name;

    friend HighwayPatrol;
};
