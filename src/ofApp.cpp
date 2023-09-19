#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // this->c1 = Car(0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    c1.move(3,0);
}

//--------------------------------------------------------------
void ofApp::draw(){

    c1.draw();
    Car(100,100).draw();
    Car(50,50).draw();
    Car(ofGetWidth()-60,ofGetHeight()-30).draw();

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
