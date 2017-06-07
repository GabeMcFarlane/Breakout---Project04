#pragma once

#include "ofMain.h"

class Stage {
public:
	int blocks;
	Stage();
	Stage(int blocks);
	void spawnBlocks(int level);
};