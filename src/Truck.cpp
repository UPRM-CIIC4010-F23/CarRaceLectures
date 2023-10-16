#include "ofApp.h"
#include "Truck.h"

using namespace std;

void Truck::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();
    ofSetColor(c);
    // Draw body
    ofDrawRectangle(xPos+0,yPos+10,60,10);
    // Draw cargo
    ofDrawRectangle(xPos+0,yPos+0,40,20);
    // Draw roof
    // ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
    // ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
    ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);
    // Draw tires
    ofDrawCircle(xPos+15,yPos+25,5);
    ofDrawCircle(xPos+25,yPos+25,5);
    ofDrawCircle(xPos+45,yPos+25,5);

}

void Truck::draw() {

    draw(ofColor::green);

}