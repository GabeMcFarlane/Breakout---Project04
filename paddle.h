#pragma once

#include "ofMain.h"

class Paddle {
public:
	float x;
	float y;
	int lives;
	int score;
	bool started;
	Paddle();
	Paddle(float x, float y, int lives, int score, bool started);
	void draw();
	int getLives();
	int getScore();
	void followMouse(float xPosition);
	void setStarted();
	int getX();
};