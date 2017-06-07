#pragma once

#include "ofMain.h"
#include "block.h"

class Stage {
public:
	int blocks;
	vector<Block> rowOne;
	vector<Block> rowTwo;
	vector<Block> rowThree;
	vector<Block> rowFour;
	Stage();
	Stage(int blocks, vector<Block> rowOne, vector<Block> rowTwo, vector<Block> rowThree, vector<Block> rowFour);
	void spawnBlocks(int level);
};