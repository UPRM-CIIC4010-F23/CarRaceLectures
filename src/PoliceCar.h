#pragma once
#include "ofMain.h"
#include "Car.h"

using namespace std;

class PoliceCar : public Car {

    public:
    
    PoliceCar(int x, int y, ofColor c) : Car(x, y, c) {}

    virtual void draw();
    virtual void draw(ofColor c);

};