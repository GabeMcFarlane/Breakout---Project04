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

	player = new Paddle((ofGetWidth() / 2) + 50, ofGetHeight() - 40, 3, 0, false);
	b.location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	b.velocity = ofVec2f(0, 1);
}

//--------------------------------------------------------------
void ofApp::update(){
	displayStats(player->getLives(), player->getScore());

	player->draw();
	player->followMouse(ofGetMouseX());

	b.draw();
	b.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
	displayStats(player->getLives(), player->getScore());

	player->draw();

	b.draw();
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
