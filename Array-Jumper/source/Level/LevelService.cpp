#include "../../header/Level/LevelService.h"
#include "../../header/Level/LevelController.h"
#include "../../header/Level/LevelModel.h"

namespace Level
{
	LevelService::LevelService()
	{
		level_controller = new LevelController();
	}

	LevelService::~LevelService() { destroy(); }

	void LevelService::intialize()
	{
		level_controller->initialize();
	}

	void LevelService::update()
	{
		level_controller->update();
	}

	void LevelService::render()
	{
		level_controller->render();
	}

	BoxDimensions LevelService::getBoxDimensions()
	{
		return level_controller->getBoxDimensions();
	}

	BlockType LevelService::getCurrentBoxValue(int currentPosition)
	{
		return level_controller->getCurrentBoxValue(currentPosition);
	}

	void LevelService::loadNextLevel()
	{
		level_controller->loadNextLevel();
	}

	bool LevelService::isLastLevel()
	{
		return level_controller->isLastLevel();
	}

	void LevelService::reset()
	{
		level_controller->reset();
	}

	void LevelService::destroy()
	{
		delete(level_controller);
	}
}