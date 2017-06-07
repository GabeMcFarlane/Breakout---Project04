// A stage has a layout of blocks that are destroyed when the ball hits them

#include "stage.h"
#include "ofMain.h"
#include "block.h"

Stage::Stage() {
	blocks = 0;
	rowOne = vector<Block>();
	rowTwo = vector<Block>();
	rowThree = vector<Block>();
	rowFour = vector<Block>();
}

Stage::Stage(int blocks, vector<Block> rowOne, vector<Block> rowTwo, vector<Block> rowThree, vector<Block> rowFour) {
	this->blocks = blocks;
	this->rowOne = rowOne;
	this->rowTwo = rowTwo;
	this->rowThree = rowThree;
	this->rowFour = rowFour;
}

void Stage::spawnBlocks(int level) {
	if (level == 1) {

	} else if (level == 2) {

	} else if (level == 3) {

	} else if (level == 4) {

	}
}