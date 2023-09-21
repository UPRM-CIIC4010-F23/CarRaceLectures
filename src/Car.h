#pragma once

class Car {

    private:
    int xPos;
    int yPos;
    int direction; // 1 -> left to right, 2 -> right to left

    public:
    int getXPos() { return xPos; }
    int getYPos() { return yPos; }
    int getDirection() { return direction; }

    void move(int deltaX, int deltaY);
    void setDirection(int dir) { direction = dir; 
    }
    Car(int x, int y) { xPos = x; yPos = y; direction = 1; }

    void draw();

};