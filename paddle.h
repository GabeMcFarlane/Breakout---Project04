#pragma once

#include "ofMain.h"

class Paddle {
public:
	float x;
	float y;
	int lives;
	int score;
	Paddle();
	Paddle(float x, float y, int lives, int score);
	void draw();
	int getLives();
	int getScore();
};