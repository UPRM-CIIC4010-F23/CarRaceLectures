#include "ofApp.h"
#include "PoliceCar.h"

using namespace std;

void PoliceCar::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();

    Car::draw(c);

    // Draw Stobe Light
    // ofFill();
    ofDrawCircle(xPos+28,yPos-4,2);

}

void PoliceCar::draw() {

    draw(ofColor::green);

}