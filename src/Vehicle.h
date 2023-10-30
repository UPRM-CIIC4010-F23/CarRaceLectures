#pragma once
#include "ofMain.h"
#include "RaceableImpl.h"

using namespace std;

class Vehicle : public RaceableImpl {

    public:

    Vehicle(int x, int y, ofColor c) : RaceableImpl(x,y,c) { }

    virtual void draw() = 0;  // Pure virtual method
    virtual void draw(ofColor c) = 0;

};