#pragma once

#include "ofMain.h"

class Block {
public:
	int size;
	int health;
	ofVec2f location;
	ofColor color;
	Block();
	Block(int size, int health, ofVec2f location, ofColor color);
	void draw(int row, int xLocation, int level);
};