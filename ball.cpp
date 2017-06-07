// A ball bounces around and breaks tiles

#include "ball.h"
#include "ofMain.h"

Ball::Ball() {
	location = ofVec2f(0, 0);
	velocity = ofVec2f(0, 0);
	acceleration = 1;
	radius = 6;
	dead = false;
	color = ofColor(255, 255, 255);
}

Ball::Ball(ofVec2f location, ofVec2f veocity, float acceleration, int radius, bool dead, ofColor color) {
	this->location = location;
	this->velocity = velocity;
	this->acceleration = acceleration;
	this->dead = dead;
	this->color = color;
}

void Ball::draw() {
	ofSetColor(255, 0, 0);
	ofDrawCircle(location, (radius * 2));
}

void Ball::move() {
	location += velocity;
}

void Ball::playerBounce(float paddleX) {
	if ((location.y + radius) >= (ofGetHeight() - 40)) {
		if (location.x >= paddleX && location.x <= (paddleX + 100)) {
			location.y -= 10;
			velocity.y *= -1;
			velocity.x = ((((paddleX + 50) - location.x) / 10) * -1);
			if (velocity.y < 15) {
				velocity -= acceleration;
			}
		}
	}
}

void Ball::wallBounce() {
	if ((location.x - radius) <= 0) {
		velocity.x *= -1;
		location.x += 10;
	} else if ((location.x + radius) >= ofGetWidth()) {
		velocity.x *= -1;
		location.x -= 10;
	} else if ((location.y - radius) <= 0) {
		velocity.y *= -1;
		location.y += 10;
	}
}

bool Ball::lost() {
	if (location.y >= ofGetHeight()) {
		dead = true;
	} else {
		dead = false;
	}
	return dead;
}

void Ball::reset() {
	dead = false;
	location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	velocity = ofVec2f(0, 0);
}

void Ball::start() {
	velocity.y = 3;
}