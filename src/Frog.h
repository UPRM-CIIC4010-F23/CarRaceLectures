#pragma once

#include "ofMain.h"
#include "Raceable.h"
#include "Animal.h"

using namespace std;

class Frog : public Raceable, public Animal {
    
private: 

    int coords[2];
    int speed;

    ofImage image;

public:

    int getXPos() { return coords[0]; }
    int getYPos() { return coords[1]; }
    int getDirection() { return 1; }
    int getSpeed() { return 5; }
    ofColor getColor() { return ofColor::green; }

    void move(int deltaX, int deltaY);
    void setDirection(int dir) { }
    void setSpeed(int s) { speed = s; }

    Frog(int x, int y);

    virtual void draw();
    virtual void draw(ofColor c);

    virtual string makeNoise() { return "Croc"; };
    virtual string eat() { return "Yummy"; };

};
