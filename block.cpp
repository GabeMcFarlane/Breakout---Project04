// A block is spawned depending on the stage and looses health when hit by the ball until destroyed

#include "block.h"
#include "ofMain.h"

Block::Block() {
	health = 1;
	location = ofVec2f(0, 0);
	color = ofColor(255, 255, 255);
}

Block::Block(int health, ofVec2f location, ofColor color) {
	this->health = health;
	this->location = location;
	this->color = color;
}

void Block::draw(ofVec2f location) {
	
}