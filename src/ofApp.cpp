#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Hello there general kenobi only siths speak in absolutes
	ofBackground(196, 158, 133);
	const int triangleSize = static_cast<int>(ofGetWidth() / 24);
	//Cave
	for(int i = 0; i < 24; i++)
	{
		ofFill();
		ofSetColor(107, 75, 62);
		if(i % 2 == 0)
		{
			ofNoFill();
		}
		ofDrawTriangle(i * triangleSize, 0, (i + 1) * (triangleSize), 0, (i + 1) * triangleSize - triangleSize / 2, triangleSize);
		ofDrawTriangle(i * triangleSize, ofGetHeight(), (i + 1) * (triangleSize), ofGetHeight(), (i + 1) * triangleSize - triangleSize / 2,  ofGetHeight() - triangleSize);
		ofDrawLine((i + 1) * triangleSize - triangleSize / 2, triangleSize, (i + 1) * triangleSize - triangleSize / 2, ofGetHeight() - triangleSize);
	}
	ofFill();
	//Legs
	ofSetColor(3, 25, 38);
	ofSetColor(207, 207, 205);
	ofDrawRectRounded(ofGetWidth() / 2 - 75, ofGetHeight() / 1.5, 70, 200, 10);
	ofDrawRectRounded(ofGetWidth() / 2 + 5, ofGetHeight() / 1.5, 70, 200, 10);

	//Arms
	ofDrawEllipse(ofGetWidth() / 2 - 100, ofGetHeight() / 2 + 36, 75, 175);
	ofDrawEllipse(ofGetWidth() / 2 + 100, ofGetHeight() / 2 + 36, 75, 175);

	//Body
	ofSetColor(215, 222, 220);
	ofDrawRectangle(ofGetWidth() / 2 - 75, ofGetHeight() / 3.5 + 100, 150, 250);


	//Head
	ofSetColor(255, 91, 100);
	ofSetCircleResolution(10);
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 3.5, 150);

	//Eyes
	ofSetCircleResolution(40);
	ofSetColor(255, 255, 255);
	ofDrawCircle(ofGetWidth() / 2 - 60, ofGetHeight() / 3.9, 35);
	ofDrawCircle(ofGetWidth() / 2 + 60, ofGetHeight() / 3.9, 35);

	//EyeBall
	ofSetColor(21, 122, 110);
	ofDrawCircle(ofGetWidth() / 2 - 60, ofGetHeight() / 3.9, 5);
	ofDrawCircle(ofGetWidth() / 2 + 60, ofGetHeight() / 3.9, 5);

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
