#include "ofApp.h"
#include "RaceableImpl.h"

using namespace std;

void RaceableImpl::move(int deltaX, int deltaY){
    this->xPos += deltaX;
    this->yPos += deltaY;
};