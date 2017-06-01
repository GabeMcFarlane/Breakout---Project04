// A paddle can be used to bounce around the ball

#include "paddle.h"
#include "ofMain.h"


Paddle::Paddle() {
	x = 0;
	y = 0;
}


Paddle::Paddle(float x, float y) {
	this->x = x;
	this->y = y;
}