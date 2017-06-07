// A stage has a layout of blocks that are destroyed when the ball hits them

#include "stage.h"
#include "ofMain.h"

Stage::Stage() {
	blocks = 0;
	rowOne = vector<string>();
	rowTwo = vector<string>();
	rowThree = vector<string>();
	rowFour = vector<string>();
}

Stage::Stage(int blocks, vector<string> rowOne, vector<string> rowTwo, vector<string> rowThree, vector<string> rowFour) {
	this->blocks = blocks;
	this->rowOne = rowOne;
	this->rowTwo = rowTwo;
	this->rowThree = rowThree;
	this->rowFour = rowFour;
}

void Stage::loadLevel(int level) {
	if (level == 1) {
		ofBuffer buffer = ofBufferFromFile("levelOne.txt");
		for (auto line : buffer.getLines()) {
			rowOne.push_back(line);
		}
	} else if (level == 2) {
		ofBuffer buffer = ofBufferFromFile("levelTwo.txt");
		for (auto line : buffer.getLines()) {
			rowTwo.push_back(line);
		}
	} else if (level == 3) {
		ofBuffer buffer = ofBufferFromFile("levelThree.txt");
		for (auto line : buffer.getLines()) {
			rowThree.push_back(line);
		}
	} else if (level == 4) {
		ofBuffer buffer = ofBufferFromFile("levelFour.txt");
		for (auto line : buffer.getLines()) {
			rowFour.push_back(line);
		}
	}
}

string Stage::getLevel(int level, int column) {
	if (level == 1) {
		return rowOne.at(column);
		blocks++;
	} else if (level == 2) {
		return rowTwo.at(column);
		blocks++;
	} else if (level == 3) {
		return rowThree.at(column);
		blocks++;
	} else if (level == 4) {
		return rowFour.at(column);
		blocks++;
	}
}

int Stage::getBlocks() {
	return blocks;
}