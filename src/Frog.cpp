#include "Frog.h"
#include "RaceableImpl.h"

using namespace std;

Frog::Frog(int x, int y) : RaceableImpl(x,y,ofColor::green) {

     image.load("Frog.png");

}

void Frog::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();
    image.draw(xPos, yPos, 40, 40);

}

void Frog::draw() {

    draw(ofColor::green);

}