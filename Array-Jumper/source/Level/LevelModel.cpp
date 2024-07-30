#include "../../header/Level/LevelModel.h"
using namespace Level;

Level::LevelModel::LevelModel()
{
}

Level::LevelModel::~LevelModel()
{
}

void Level::LevelModel::initialize()
{
}

BlockType Level::LevelModel::getCurrentBoxValue(int currentPosition)
{
	return current_level_data.level_boxes[currentPosition];
}
