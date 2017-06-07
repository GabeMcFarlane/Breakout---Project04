#pragma once

#include "ofMain.h"

class Stage {
public:
	int blocks;
	vector<string> rowOne;
	vector<string> rowTwo;
	vector<string> rowThree;
	vector<string> rowFour;
	Stage();
	Stage(int blocks, vector<string> rowOne, vector<string> rowTwo, vector<string> rowThree, vector<string> rowFour);
	void loadLevel(int level);
	string getLevel(int level, int column);
	int getBlocks();
};