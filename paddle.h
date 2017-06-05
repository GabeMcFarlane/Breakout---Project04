#pragma once

#include "ofMain.h"

class Paddle {
public:
	float x;
	float y;
	int lives;
	int score;
	bool started;
	int level;
	Paddle();
	Paddle(float x, float y, int lives, int score, bool started, int level);
	void draw();
	int getLives();
	void looseLife();
	int getScore();
	void followMouse(float xPosition);
	void setStarted();
	void resetStarted();
	bool getStarted();
	int getX();
	void setLevel(int key);
	int getLevel();
};