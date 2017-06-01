// A paddle can be used to bounce around the ball

#include "paddle.h"
#include "ofMain.h"


Paddle::Paddle() {
	x = 0;
	y = 0;
	lives = 3;
	score = 0;
}


Paddle::Paddle(float x, float y, int lives, int score) {
	this->x = x;
	this->y = y;
	this->lives = lives;
	this->score = score;
}

void Paddle::draw() {
	ofSetColor(0, (85 * lives), 0);
	ofDrawRectangle(x, y, 100, 20);
}

int Paddle::getLives() {
	return lives;
}

int Paddle::getScore() {
	return score;
}