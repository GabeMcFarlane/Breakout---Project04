// A paddle can be used to bounce around the ball

#include "paddle.h"
#include "ofMain.h"


Paddle::Paddle() {
	x = 0;
	y = 0;
	lives = 3;
	score = 0;
	started = false;
	level = 0;
}

Paddle::Paddle(float x, float y, int lives, int score, bool started, int level) {
	this->x = x;
	this->y = y;
	this->lives = lives;
	this->score = score;
	this->started = started;
}

void Paddle::draw() {
	ofSetColor(0, (85 * lives), 0);
	ofDrawRectangle(x, y, 100, 20);
}

int Paddle::getLives() {
	return lives;
}

void Paddle::looseLives() {
	lives--;
}

int Paddle::getScore() {
	return score;
}

void Paddle::followMouse(float xPosition) {
	x = xPosition;
}

void Paddle::setStarted() {
	started = true;
}

bool Paddle::getStarted() {
	return started;
}

int Paddle::getX() {
	return x;
}

void Paddle::setLevel(int key) {
	level = key;
}

int Paddle::getLevel() {
	return level;
}

