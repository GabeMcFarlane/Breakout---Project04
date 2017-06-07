#pragma once

#include "ofMain.h"

class Block {
public:
	int health;
	ofColor color;
	ofVec2f location;
	Block();
	Block(int health, ofColor color, ofVec2f location);
	void draw(ofVec2f coordinates);
};