#pragma once

#include "ofMain.h"

class Ball {
public:
	ofVec2f location;
	ofVec2f velocity;
	float acceleration;
	Ball();
	Ball(ofVec2f location, ofVec2f veocity, float acceleration);
	void draw();
	void move();
};