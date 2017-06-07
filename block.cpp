// A block is spawned depending on the stage and looses health when hit by the ball until destroyed

#include "block.h"
#include "ofMain.h"

Block::Block() {
	size = 100;
	health = 1;
	location = ofVec2f(0, 0);
	color = ofColor(255, 255, 255);
}

Block::Block(int size, int health, ofVec2f location, ofColor color) {
	this->size = size;
	this->health = health;
	this->location = location;
	this->color = color;
}

void Block::draw(int row, int xLocation, int level) {
	health = level;
	color = ofColor(255, (255 - (level * 43)), 0);
	location.x = xLocation;
	if (row == 1) {
		location.y = 100;
	} else if (row == 2) {
		location.y = 200;
	} else if (row == 3) {
		location.y = 300;
	} else if (row == 4) {
		location.y = 400;
	}
	ofSetColor(color);
	ofDrawRectangle(location.x, location.y, size, size);
}