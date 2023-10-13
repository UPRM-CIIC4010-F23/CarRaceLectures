#pragma once
#include "ofMain.h"
#include "Car.h"

using namespace std;

class PoliceCar : public Car {

    private:

    int timeToNextBlink;
    bool strobeOn;

    public:

    int getTimeToNextBlink(int t) { return timeToNextBlink; }

    void update() { timeToNextBlink--; };

    void setTimeToNextBlink(int t) { timeToNextBlink = t; }
    
    PoliceCar(int x, int y, ofColor c) : Car(x, y, c) { timeToNextBlink = 30; strobeOn = true; }

    virtual void draw();
    virtual void draw(ofColor c);

};