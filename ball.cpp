// A ball bounces around and breaks tiles

#include "ball.h"
#include "ofMain.h"


Ball::Ball() {
	x = 0;
	y = 0;
}


Ball::Ball(float x, float y) {
	this->x = x;
	this->y = y;
}