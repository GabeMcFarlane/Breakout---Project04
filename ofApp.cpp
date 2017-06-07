#include "ofApp.h"
#include "board.h"
#include "ball.h"
#include "paddle.h"
#include "stage.h"
#include "block.h"

Ball b;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	ofSetFrameRate(60.0);
	ofHideCursor();

	player = new Paddle((ofGetWidth() / 2) - 50, ofGetHeight() - 40, 3, 0, false, 0);

	b.location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	b.velocity = ofVec2f(0, 0);
}

//--------------------------------------------------------------
void ofApp::update() {
	if (!player->getStarted()) {
		ofDrawBitmapString(ofToString(player->getLevel()), 10, 10); // Checker for variables
		startScreen();
	} else if (player->getStarted()) {
		displayStats(player->getLives(), player->getScore());

		player->draw();
		player->followMouse(ofGetMouseX());

		b.draw();
		b.move();
		b.playerBounce(player->getX());
		b.wallBounce();
		if (b.lost()) {
			if (player->getLives() >= 0) {
				b.reset();
				player->looseLife();
			} else if (player->getLives() < 0) {
				player->resetStarted(); // Game Over - return to start screen
			}
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (!player->getStarted()) {
		ofDrawBitmapString("stuff" + ofToString(player->getLevel()), 10, 10); // Checker for variables
		startScreen();
	} else if (player->getStarted()) {
		displayStats(player->getLives(), player->getScore());

		player->draw();

		b.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (!player->getStarted()) {
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
	} else if (player->getStarted()) {
		if (key == VK_SPACE) {
			b.start();
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
