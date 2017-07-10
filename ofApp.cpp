#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(30);
	ofBackground(0);
	ofEnableDepthTest();
	ofSetWindowTitle("Insta");

	ofSetLineWidth(1);
	ofSetColor(ofColor(0, 255, 0));
	ofNoFill();

	this->noise_source = ofRandom(30);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw() {
	cam.begin();

	float tmp_noise_source = this->noise_source;

	for(int x = -ofGetWidth() / 2; x < ofGetWidth() / 2; x += 50) {
		for (int y = -ofGetHeight() / 2; y < ofGetHeight() / 2; y += 50) {
			//float noise_value = ofNoise(tmp_noise_source);

			float noise_value = ofNoise(x * 0.0025, y * 0.0025, ofGetFrameNum() * 0.025);

			ofEllipse(ofVec3f(x, y, 0), 100 * noise_value, 100 * noise_value);
		}

		tmp_noise_source += 0.025;
	}

	this->noise_source += 0.025;

	cam.end();
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
