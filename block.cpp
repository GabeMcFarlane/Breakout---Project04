// A block is spawned depending on the stage and looses health when hit by the ball until destroyed

#include "block.h"
#include "ofMain.h"

Block::Block() {
	health = 1;
	color = ofColor(255, 255, 255);
	location = ofVec2f(0, 0);
}

Block::Block(int health, ofColor color, ofVec2f location) {
	this->health = health;
	this->color = color;
	this->location = location;
}

void Block::draw(ofVec2f location) {
	
}