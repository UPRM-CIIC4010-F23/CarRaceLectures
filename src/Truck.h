#pragma once
#include "ofMain.h"
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {

    public:
    
    Truck(int x, int y, ofColor c) : Vehicle(x,y,c) {}

    virtual void draw();
    virtual void draw(ofColor c);

};