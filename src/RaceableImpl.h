#pragma once
#include "ofMain.h"
#include "Raceable.h"

using namespace std;

class RaceableImpl : public Raceable {

    private:
    int xPos;
    int yPos;
    int direction; // 1 -> left to right, 2 -> right to left
    int speed;
    ofColor color;

    public:
    int getXPos() { return xPos; }
    int getYPos() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }
    ofColor getColor() { return color; }

    void move(int deltaX, int deltaY);
    void setDirection(int dir) { direction = dir; }
    void setSpeed(int s) { speed = s; }

    
    RaceableImpl(int x, int y, ofColor c) { xPos = x; yPos = y; direction = 1; speed = 5; color = c; }

    virtual void draw() = 0;  // Pure virtual method
    virtual void draw(ofColor c) = 0;

};