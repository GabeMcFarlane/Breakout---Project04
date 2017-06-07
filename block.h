#pragma once

#include "ofMain.h"

class Block {
public:
	int health;
	ofVec2f location;
	ofColor color;
	Block();
	Block(int health, ofVec2f location, ofColor color);
	void draw(ofVec2f coordinates);
};