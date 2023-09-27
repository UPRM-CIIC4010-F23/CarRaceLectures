#pragma once

class Car {

    private:
    int xPos;
    int yPos;
    int direction; // 1 -> left to right, 2 -> right to left
    int speed;

    public:
    int getXPos() { return xPos; }
    int getYPos() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }

    void move(int deltaX, int deltaY);
    void setDirection(int dir) { direction = dir; }
    void setSpeed(int s) { speed = s; }

    
    Car(int x, int y) { xPos = x; yPos = y; direction = 1; speed = 5; }

    void draw();

};