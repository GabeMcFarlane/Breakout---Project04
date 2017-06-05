#pragma once

#include "ofMain.h"

class Ball {
public:
	ofVec2f location;
	ofVec2f velocity;
	float acceleration;
	int radius;
	bool dead;
	Ball();
	Ball(ofVec2f location, ofVec2f veocity, float acceleration, int radius, bool dead);
	void draw();
	void move();
	void playerBounce(float paddleX);
	void wallBounce();
	bool lost();
	void reset();
	void start();
};