#include "ofApp.h"
#include "PoliceCar.h"

using namespace std;

void PoliceCar::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();

    Car::draw(c);

    // Draw Stobe Light
    // ofFill();
    this->update();
    if (timeToNextBlink == 0) {
        strobeOn = !strobeOn;
        setTimeToNextBlink(30);
    }
    if (!strobeOn) {
        ofNoFill();
    }
    ofDrawCircle(xPos+28,yPos-4,2);
    ofFill();

}

void PoliceCar::draw() {

    draw(ofColor::green);

}