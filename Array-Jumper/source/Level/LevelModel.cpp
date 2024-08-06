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

void Level::LevelModel::loadNextLevel()
{
	current_level_index++;
}

bool Level::LevelModel::isLastLevel()
{
	if (current_level_index == LevelConfiguration::NUMBER_OF_LEVELS - 1)
		return true;
	return false;
}

void Level::LevelModel::reset()
{
	current_level_index = 0;
}

BlockType Level::LevelModel::getCurrentBoxValue(int currentPosition)
{
	return  level_configuration.levels[current_level_index].level_boxes[currentPosition];
}

int Level::LevelModel::getCurrentLevelNumber()
{
	return current_level_index + 1;
}
