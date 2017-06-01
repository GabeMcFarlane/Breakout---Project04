// The board handels the different screens

#include "board.h"
#include "ofMain.h"


int startScreen() {
	ofSetColor(255, 255, 255);
	return 0;
}

void displayStats(int lives, int score) {
	ofSetColor(255, 255, 255);
	std::string str_frameNum = "Frame #: ";
	str_frameNum += ofToString(ofGetFrameNum());
	std::string str_fps = "FPS: ";
	str_fps += ofToString(ofGetFrameRate());
	ofDrawBitmapString(str_frameNum, 10, 20);
	ofDrawBitmapString(str_fps, 10, 40);
	ofDrawBitmapString("Score: " + ofToString(score), (ofGetWidth() - 100), 10);
	ofDrawBitmapString("Lives: " + ofToString(lives), 20, 10);
	ofDrawBitmapString("Controls: Use the mouse to control the paddle and bounce the ball!", 10, 70);
}
