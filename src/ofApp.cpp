#include <vector>
#include "ofApp.h"
#include "Car.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    static int numCars = 15;
    int laneY = 0;
    for (int i=0; i<numCars; i++) {
        cars.push_back(Car(0,laneY));
        laneY += 40;
    }
    someCarFinished = false;
}

//--------------------------------------------------------------
void ofApp::update(){

    if (someCarFinished) return;
    
    for (int i = 0; i < cars.size(); i++) {
        if ((cars[i].getDirection() == 1) && (cars[i].getXPos() + 60) > ofGetWidth()) {
            cars[i].setDirection(-1);
        } else if ((cars[i].getDirection() == -1) && (cars[i].getXPos() <= 0)) {
            cars[i].setDirection(1);
        } else if (cars[i].getDirection() == 1) {
            cars[i].move(int(cars[i].getSpeed()*ofRandom(1)), 0);
        } else {
            cars[i].move(int(-1*cars[i].getSpeed()*ofRandom(1)), 0);
        }
    }

    for (int i=0; i<cars.size(); i++) {
        if (cars[i].getXPos()+60 >= ofGetWidth()) {
            someCarFinished = true;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    int i;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].draw();
    }
    // Car(100,100).draw();
    // Car(50,50).draw();
    // Car(ofGetWidth()-60,ofGetHeight()-30).draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
