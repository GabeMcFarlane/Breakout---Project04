// The board handels the different screens

#include "board.h"
#include "ofMain.h"


void startScreen() {
	ofSetColor(255, 255, 255);
	ofDrawBitmapString("Bustout!", (ofGetWidth() / 2) - 40, (ofGetHeight() / 2) - 40);
	ofDrawBitmapString("Level 1 - Easy", (ofGetWidth() / 2) - 40, ofGetHeight() / 2);
	ofDrawBitmapString("Level 2 - Medium", (ofGetWidth() / 2) - 40, (ofGetHeight() / 2) + 20);
	ofDrawBitmapString("Level 3 - Hard", (ofGetWidth() / 2) - 40, (ofGetHeight() / 2) + 40);
	ofDrawBitmapString("Level 4 - What!?!?!?!", (ofGetWidth() / 2) - 40, (ofGetHeight() / 2) + 60);
	ofDrawBitmapString("Use keys 1, 2, 3 or 4 to select your starting level!", (ofGetWidth() / 2) - 40, (ofGetHeight() / 2) + 80);
}

void displayStats(int lives, int score) {
	ofSetColor(255, 255, 255);
	std::string str_frameNum = "Frame #: ";
	str_frameNum += ofToString(ofGetFrameNum());
	std::string str_fps = "FPS: ";
	str_fps += ofToString(ofGetFrameRate());
	ofDrawBitmapString(str_frameNum, 10, 20);
	ofDrawBitmapString(str_fps, 10, 40);
	ofDrawBitmapString("Score: " + ofToString(score), (ofGetWidth() - 100), 20);
	ofDrawBitmapString("Lives: " + ofToString(lives), (ofGetWidth() - 100), 40);
	ofDrawBitmapString("Controls: Use the 'mouse' to control the paddle and bounce the ball and 'space' to start the game!", ofGetWidth() / 2, 20);
}
