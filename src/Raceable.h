#pragma once
#include "ofMain.h"

using namespace std;

class Raceable {

    private:
    // int xPos;
    // int yPos;
    // int direction; // 1 -> left to right, 2 -> right to left
    // int speed;
    // ofColor color;

    public:
    virtual int getXPos() = 0;
    virtual int getYPos() = 0;
    virtual int getDirection() = 0;
    virtual int getSpeed() = 0;
    virtual ofColor getColor() = 0;

    virtual void move(int deltaX, int deltaY) = 0;
    virtual void setDirection(int dir) = 0;
    virtual void setSpeed(int s) = 0;

    Raceable() {}

    virtual void draw() = 0;  // Pure virtual method
    virtual void draw(ofColor c) = 0;

};