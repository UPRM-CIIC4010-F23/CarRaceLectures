#include "ofApp.h"
#include "Car.h"

using namespace std;

void Car::move(int deltaX, int deltaY){
    this->xPos += deltaX;
    this->yPos += deltaY;
};

void Car::draw() {

    int xPos = this->getXPos();
    int yPos = this->getYPos();
    ofSetColor(ofColor::green);
    // Draw body
    ofDrawRectangle(xPos+0,yPos+10,60,10);
    // Draw roof
    ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
    ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
    ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);

    // Draw tires
    ofDrawCircle(xPos+15,yPos+25,5);
    ofDrawCircle(xPos+45,yPos+25,5);

}