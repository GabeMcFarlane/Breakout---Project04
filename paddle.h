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
	void looseLives();
	int getScore();
	void followMouse(float xPosition);
	void setStarted();
	bool getStarted();
	int getX();
	void setLevel(int key);
	int getLevel();
};