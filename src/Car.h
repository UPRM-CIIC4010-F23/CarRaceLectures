#pragma once

class Car {

    private:
    int xPos;
    int yPos;

    public:
    int getXPos() { return xPos; }
    int getYPos() { return yPos; }

    void move(int deltaX, int deltaY);

    Car(int x, int y) { xPos = x; yPos = y; }

    void draw();

};