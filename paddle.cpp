// A paddle can be used to bounce around the ball

#include "paddle.h"
#include "ofMain.h"


Paddle::Paddle() {
	x = 0;
	y = 0;
	lives = 3;
}


Paddle::Paddle(float x, float y, int lives) {
	this->x = x;
	this->y = y;
	this->lives = lives;
}

void Paddle::draw() {
	ofSetColor(0, (85 * lives), 0);
	ofDrawRectangle(x, y, 100, 20);
}