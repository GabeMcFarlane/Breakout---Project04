#pragma once

#include "ofMain.h"

class Paddle {
public:
	float x;
	float y;
	int lives;
	Paddle();
	Paddle(float x, float y, int lives);
	void draw();
};