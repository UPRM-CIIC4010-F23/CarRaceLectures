#include "ofApp.h"
#include "Vehicle.h"

using namespace std;

void Vehicle::move(int deltaX, int deltaY){
    this->xPos += deltaX;
    this->yPos += deltaY;
};

