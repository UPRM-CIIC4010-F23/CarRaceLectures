#pragma once

#include "ofMain.h"
#include "RaceableImpl.h"
#include "Animal.h"

using namespace std;

class Frog : public RaceableImpl, public Animal {
    
private: 

    ofImage image;

public:

    Frog(int x, int y);

    virtual void draw();
    virtual void draw(ofColor c);

    virtual string makeNoise() { return "Croc"; };
    virtual string eat() { return "Yummy"; };

};
