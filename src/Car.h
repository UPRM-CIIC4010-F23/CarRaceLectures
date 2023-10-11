#pragma once
#include "ofMain.h"

using namespace std;

class Car {

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

    
    Car(int x, int y, ofColor c) { xPos = x; yPos = y; direction = 1; speed = 5; color = c; }

    virtual void draw();
    virtual void draw(ofColor c);

};