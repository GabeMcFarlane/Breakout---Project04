#include "ofApp.h"
#include "board.h"
#include "ball.h"
#include "paddle.h"

Ball b;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	ofSetFrameRate(60.0);
	ofHideCursor();

	player = new Paddle((ofGetWidth() / 2) - 50, ofGetHeight() - 40, 3, 0, false, 0);

	b.location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	b.velocity = ofVec2f(0, 3);
}

//--------------------------------------------------------------
void ofApp::update() {
	if (player->getStarted() == false) {
		ofDrawBitmapString("stuff" + ofToString(player->getLevel()), 10, 10);
		startScreen(0); // Add level selection
	} else if (player->getStarted() == true) {
		displayStats(player->getLives(), player->getScore());

		player->draw();
		player->followMouse(ofGetMouseX());

		b.draw();
		b.move();
		b.playerBounce(player->getX());
		b.wallBounce();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (player->getStarted() == false) {
		ofDrawBitmapString("stuff" + ofToString(player->getLevel()), 10, 10); // checker for variables
		startScreen(0);
	} else if (player->getStarted() == true) {
		displayStats(player->getLives(), player->getScore());

		player->draw();

		b.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (player->getStarted() == false) {
		if (key == '1') {
			player->setLevel(1);
			player->setStarted();
		}
		else if (key == '2') {
			player->setLevel(2);
			player->setStarted();
		}
		else if (key == '3') {
			player->setLevel(3);
			player->setStarted();
		}
		else if (key == '4') {
			player->setLevel(4);
			player->setStarted();
		}
	}
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
