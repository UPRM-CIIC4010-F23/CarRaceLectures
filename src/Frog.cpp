#include "Frog.h"

using namespace std;

Frog::Frog(int x, int y) {
     coords[0]=x; 
     coords[1] = y; 
     image.load("Frog.png");

}

void Frog::move(int deltaX, int deltaY){
    this->coords[0] += deltaX;
    this->coords[1] += deltaY;
};

void Frog::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();
    image.draw(xPos, yPos, 40, 40);

}

void Frog::draw() {

    draw(ofColor::green);

}