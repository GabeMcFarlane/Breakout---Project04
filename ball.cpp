// A ball bounces around and breaks tiles

#include "ball.h"
#include "ofMain.h"


Ball::Ball() {
	
}


Ball::Ball(ofVec2f location, ofVec2f veocity, float acceleration) {
	this->location = location;
	this->velocity = velocity;
	this->acceleration = acceleration;
}

void Ball::draw() {
	ofSetColor(255, 0, 0);
	ofDrawCircle(location, 10);
}

void Ball::move() {
	location += velocity;
}